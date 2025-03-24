// Copyright Jade Eye Studios 2025


#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "Net/UnrealNetwork.h"

UAS_BM_CharBase::UAS_BM_CharBase()
{
    // Set default values for attributes in set.

    /* Damage */
    Damage.SetBaseValue(0.f);
    Damage.SetCurrentValue(0.f);

    /* Health Attributes */
    CurrentHealth.SetBaseValue(100.f); // Current health
    CurrentHealth.SetCurrentValue(100.f);
    
    CurrentHealth1.SetBaseValue(100.f); // Current health1
    CurrentHealth1.SetCurrentValue(100.f);

    MaxHealth.SetBaseValue(100.f); // Max Health
    MaxHealth.SetCurrentValue(100.f);
    
    MaxHealth1.SetBaseValue(100.f); // Max Health1
    MaxHealth1.SetCurrentValue(100.f);

    CurrentShield.SetBaseValue(100.f); // Current Shield
    CurrentShield.SetCurrentValue(100.f);

    CurrentShield1.SetBaseValue(100.f); // Current Shield1
    CurrentShield1.SetCurrentValue(100.f);

    MaxShield.SetBaseValue(100.f); // Max Shield
    MaxShield.SetCurrentValue(100.f);

    MaxShield1.SetBaseValue(100.f); // Max Shield1
    MaxShield1.SetCurrentValue(100.f);

    /* Overflow Values*/
    HealthOverflowPercent.SetBaseValue(100.f); // Health overflow Percent
    HealthOverflowPercent.SetCurrentValue(100.f);

    ShieldOverflowPercent.SetBaseValue(100.f); // Shield Overflow Percent
    ShieldOverflowPercent.SetCurrentValue(100.f);

    Shield1OverflowPercent.SetBaseValue(100.f); // Shield1 Overflow Percent
    Shield1OverflowPercent.SetCurrentValue(100.f);

    /* Regen Values*/
    RegenShield.SetBaseValue(0.f); // Regen Shield
    RegenShield.SetCurrentValue(0.f);

    RegenHealth.SetBaseValue(2.f); // Regen Health
    RegenHealth.SetCurrentValue(2.f);

    /* Stamina Attributes */
    CurrentStamina.SetBaseValue(100.f); // Current Stamina
    CurrentStamina.SetCurrentValue(100.f);
    
    MaxStamina.SetBaseValue(100.f); // Max Stamina
    MaxStamina.SetCurrentValue(100.f);
    
    RegenStamina.SetBaseValue(2.f); // Regen Stamina
    RegenStamina.SetCurrentValue(2.f);

    /* Leveling Attributes */
    CurrentLevel.SetBaseValue(1.f); // Current Level
    CurrentLevel.SetCurrentValue(1.f);
    
    XPRequired.SetBaseValue(100.f); // XP required to level up
    XPRequired.SetCurrentValue(100.f);
    
    CurrentXP.SetBaseValue(0.f); // Current XP owned by the character
    CurrentXP.SetCurrentValue(0.f);

}

// RepNotifies

/* Health Attributes */
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
// Current health1
void UAS_BM_CharBase::OnRep_CurrentHealth1(const FGameplayAttributeData& OldCurrentHealth1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentHealth1, OldCurrentHealth1);
}
// Max health1
void UAS_BM_CharBase::OnRep_MaxHealth1(const FGameplayAttributeData& OldMaxHealth1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, MaxHealth1, OldMaxHealth1);
}
// Current Shield
void UAS_BM_CharBase::OnRep_CurrentShield(const FGameplayAttributeData& OldCurrentShield)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentShield, OldCurrentShield);
}
// Max Shield
void UAS_BM_CharBase::OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, MaxShield, OldMaxShield);
}
// Current Shield1
void UAS_BM_CharBase::OnRep_CurrentShield1(const FGameplayAttributeData& OldCurrentShield1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, CurrentShield1, OldCurrentShield1);
}
// Max Shield1
void UAS_BM_CharBase::OnRep_MaxShield1(const FGameplayAttributeData& OldMaxShield1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, MaxShield1, OldMaxShield1);
}

// HealthoverflowPercent
void UAS_BM_CharBase::OnRep_HealthOverflowPercent(const FGameplayAttributeData& OldHealthOverflowPercent)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, HealthOverflowPercent, OldHealthOverflowPercent);
}
// ShieldOverflowPercent
void UAS_BM_CharBase::OnRep_ShieldOverflowPercent(const FGameplayAttributeData& OldShieldOverflowPercent)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, ShieldOverflowPercent, OldShieldOverflowPercent);
}
// Shield1OverflowPercent
void UAS_BM_CharBase::OnRep_Shield1OverflowPercent(const FGameplayAttributeData& OldShield1OverflowPercent)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, Shield1OverflowPercent, OldShield1OverflowPercent);
}


// Regen health
void UAS_BM_CharBase::OnRep_RegenHealth(const FGameplayAttributeData& OldRegenHealth)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, RegenHealth, OldRegenHealth);
}
// Regen shield
void UAS_BM_CharBase::OnRep_RegenShield(const FGameplayAttributeData& OldRegenShield)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_BM_CharBase, RegenShield, OldRegenShield);
}

/* Stamina Attributes */
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

/* Leveling Attributes */
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

/* Pre Attribute Change */
void UAS_BM_CharBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue); // Callback to parent function
    
    if (Attribute == GetCurrentShield1Attribute()) 
    {// Current Shield1 Value Clamp
        const float MaxShield1Value = MaxShield1.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxShield1Value);
    }
    else if (Attribute == GetCurrentShieldAttribute()) 
    {// Current Shield Value Clamp
        const float MaxShieldValue = MaxShield.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxShieldValue);
    }
    else if (Attribute == GetCurrentHealth1Attribute()) 
    {// Current Health1 Value Clamp
        const float MaxHealth1Value = MaxHealth1.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxHealth1Value);
    }
    else if (Attribute == GetCurrentHealthAttribute()) 
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

/* Post Gameplay Effect Execute */
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
        const float LocalCurrentHealth = GetCurrentHealth();
		SetDamage(0.f);
        // Set current health to health - damage done
        SetCurrentHealth(FMath::Clamp(LocalCurrentHealth - LocalDamageDone, 0.0f, MaxHealth.GetCurrentValue()));
        
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentShield1Attribute())
    {
        float NewShield1 = FMath::Clamp(CurrentShield1.GetCurrentValue(), 0.0f, MaxShield1.GetCurrentValue());
        SetCurrentShield1(NewShield1);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentShieldAttribute())
    {
        float NewShield = FMath::Clamp(CurrentShield.GetCurrentValue(), 0.0f, MaxShield.GetCurrentValue());
        SetCurrentShield(NewShield);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentHealth1Attribute())
    {
        float NewHealth1 = FMath::Clamp(CurrentHealth1.GetCurrentValue(), 0.0f, MaxHealth1.GetCurrentValue());
        SetCurrentHealth1(NewHealth1);
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
        float NewXP = FMath::Clamp(CurrentXP.GetCurrentValue(), 0.0f, XPRequired.GetCurrentValue());
        if (CurrentXP.GetCurrentValue() >= XPRequired.GetCurrentValue())
        {
            SetCurrentLevel(CurrentLevel.GetCurrentValue() + 1);
            SetCurrentXP(CurrentXP.GetCurrentValue() - XPRequired.GetCurrentValue());
        }
        else
        {
            SetCurrentXP(NewXP);
        }
    }

}

void UAS_BM_CharBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate Attributes to all clients.
    
    /* Health and Shield Attributes */
    // CurrentHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentHealth, COND_None, REPNOTIFY_Always);
    // MaxHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxHealth, COND_None, REPNOTIFY_Always);
    // CurrentHealth1
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentHealth1, COND_None, REPNOTIFY_Always);
    // MaxHealth1
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxHealth1, COND_None, REPNOTIFY_Always);
    
    // CurrentShield
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentShield, COND_None, REPNOTIFY_Always);
    // MaxShield
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxShield, COND_None, REPNOTIFY_Always);
    // CurrentShield1
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentShield1, COND_None, REPNOTIFY_Always);
    // MaxShield1
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxShield1, COND_None, REPNOTIFY_Always);
    
    // RegenHealth
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, RegenHealth, COND_None, REPNOTIFY_Always);
    // RegenShield
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, RegenShield, COND_None, REPNOTIFY_Always);
    
    // Overflow Health
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, HealthOverflowPercent, COND_None, REPNOTIFY_Always);
    // Overflow Shield
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, ShieldOverflowPercent, COND_None, REPNOTIFY_Always);
    // Overflow Shield1
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, Shield1OverflowPercent, COND_None, REPNOTIFY_Always);
    
    /* Stamina Attributes */
    // CurrentStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentStamina, COND_None, REPNOTIFY_Always);
    // MaxStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, MaxStamina, COND_None, REPNOTIFY_Always);
    // RegenStamina
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, RegenStamina, COND_None, REPNOTIFY_Always);

    /* Leveling Attributes */
    // CurrentLevel
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentLevel, COND_None, REPNOTIFY_Always);
    // XPRequired
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, XPRequired, COND_None, REPNOTIFY_Always);
    // CurrentXP
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_BM_CharBase, CurrentXP, COND_None, REPNOTIFY_Always);
}