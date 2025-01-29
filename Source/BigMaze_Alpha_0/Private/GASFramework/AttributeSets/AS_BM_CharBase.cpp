// Copyright Jade Eye Studios 2025


#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "Net/UnrealNetwork.h"

UAS_BM_CharBase::UAS_BM_CharBase()
{
    // Set default values for attributes in set.

    /** Damage */
    Damage.SetBaseValue(0.f);
    Damage.SetCurrentValue(0.f);

    /** Health Attributes */
    CurrentHealth.SetBaseValue(100.f); // Current health
    CurrentHealth.SetCurrentValue(100.f);
    
    MaxHealth.SetBaseValue(100.f); // Max Health
    MaxHealth.SetCurrentValue(100.f);
    
    RegenHealth.SetBaseValue(2.f); // Regen Health
    RegenHealth.SetCurrentValue(2.f);

    /** Stamina Attributes */
    CurrentStamina.SetBaseValue(100.f); // Current Stamina
    CurrentStamina.SetCurrentValue(100.f);
    
    MaxStamina.SetBaseValue(100.f); // Max Stamina
    MaxStamina.SetCurrentValue(100.f);
    
    RegenStamina.SetBaseValue(2.f); // Regen Stamina
    RegenStamina.SetCurrentValue(2.f);

    /** Leveling Attributes */
    CurrentLevel.SetBaseValue(1.f); // Current Level
    CurrentLevel.SetCurrentValue(1.f);
    
    XPRequired.SetBaseValue(100.f); // XP required to level up
    XPRequired.SetCurrentValue(100.f);
    
    CurrentXP.SetBaseValue(0.f); // Current XP owned by the character
    CurrentXP.SetCurrentValue(0.f);

}

// RepNotifies

/** Health Attributes */
// Current health
void UAS_BM_CharBase::OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentHealth, OldCurrentHealth);
}
// Max health
void UAS_BM_CharBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, MaxHealth, OldMaxHealth);
}
// Regen health
void UAS_BM_CharBase::OnRep_RegenHealth(const FGameplayAttributeData& OldRegenHealth)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, RegenHealth, OldRegenHealth);
}

/** Stamina Attributes */
// Current Stamina
void UAS_BM_CharBase::OnRep_CurrentStamina(const FGameplayAttributeData &OldCurrentStamina)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentStamina, OldCurrentStamina);
}
// Max Stamina
void UAS_BM_CharBase::OnRep_MaxStamina(const FGameplayAttributeData &OldMaxStamina)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, MaxStamina, OldMaxStamina);
}
// Regen Stamina
void UAS_BM_CharBase::OnRep_RegenStamina(const FGameplayAttributeData &OldRegenStamina)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, RegenStamina, OldRegenStamina);
}

/** Leveling Attributes */
// Current Level
void UAS_BM_CharBase::OnRep_CurrentLevel(const FGameplayAttributeData &OldCurrentLevel)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentLevel, OldCurrentLevel);
}
// XP Required
void UAS_BM_CharBase::OnRep_XPRequired(const FGameplayAttributeData &OldXPRequired)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, XPRequired, OldXPRequired);
}
// Current XP
void UAS_BM_CharBase::OnRep_CurrentXP(const FGameplayAttributeData &OldCurrentXP)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentXP, OldCurrentXP);
}

/** Pre Attribute Change */
void UAS_BM_CharBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue); // Callback to parent function
    
    if (Attribute == GetCurrentHealthAttribute()) 
    {// Current Health Value Clamp
        const float MaxHealthValue = MaxHealth.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxHealthValue);
    }
    else if (Attribute == GetCurrentStaminaAttribute())
    {// Current Stamina Value Clamp
        const float MaxStaminaValue = MaxStamina.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxStaminaValue);
    }
    else if (Attribute == GetCurrentXPAttribute())
    {// Current XP Value Clamp
        const float XPRequiredValue = XPRequired.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, XPRequiredValue);
    }
    else if (Attribute == GetCurrentLevelAttribute() && CurrentLevel.GetCurrentValue() < 0)
    {// If Current level is less than 0, set to 0
        NewValue = 0;
    }
}

/** Post Gameplay Effect Execute */
void UAS_BM_CharBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data); // Callback to parent function

    FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);

    if (Data.EvaluatedData.Attribute == GetDamageAttribute())
    {
        const float LocalDamageDone = GetDamage();
		SetDamage(0.f);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
    {
        
        float NewHealth = FMath::Clamp(CurrentHealth.GetCurrentValue(), 0.0f, MaxHealth.GetCurrentValue());
        SetCurrentHealth(NewHealth);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentStaminaAttribute())
    {
        float NewStamina = FMath::Clamp(CurrentStamina.GetCurrentValue(), 0.0f, MaxStamina.GetCurrentValue());
        SetCurrentStamina(NewStamina);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentLevelAttribute() && CurrentLevel.GetCurrentValue() < 0)
    {
        SetCurrentLevel(0);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentXPAttribute())
    {
        if (CurrentXP.GetCurrentValue() >= XPRequired.GetCurrentValue())
        {
            SetCurrentLevel(CurrentLevel.GetCurrentValue() + 1);
            SetCurrentXP(CurrentXP.GetCurrentValue() - XPRequired.GetCurrentValue());
        }
    }

}

void UAS_BM_CharBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate Attributes to all clients.
    
    /** Health Attributes */
    // CurrentHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentHealth, COND_None, REPNOTIFY_Always);
    // MaxHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxHealth, COND_None, REPNOTIFY_Always);
    // RegenHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, RegenHealth, COND_None, REPNOTIFY_Always);

    /** Stamina Attributes */
    // CurrentStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentStamina, COND_None, REPNOTIFY_Always);
    // MaxStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxStamina, COND_None, REPNOTIFY_Always);
    // RegenStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, RegenStamina, COND_None, REPNOTIFY_Always);

    /** Leveling Attributes */
    // CurrentLevel
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentLevel, COND_None, REPNOTIFY_Always);
    // XPRequired
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, XPRequired, COND_None, REPNOTIFY_Always);
    // CurrentXP
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentXP, COND_None, REPNOTIFY_Always);
}