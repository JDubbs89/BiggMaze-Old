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

/** Pre Attribute Change */
void UAS_BM_CharBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue); // Callback to parent function
    
    if (Attribute == GetCurrentHealthAttribute()) // Current Health Value Clamp
    {
        const float MaxHealthValue = MaxHealth.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxHealthValue);
    }
}

/** Post Gameplay Effect Execute */
void UAS_BM_CharBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data); // Callback to parent function

    if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
    {
        float NewHealth = FMath::Clamp(CurrentHealth.GetCurrentValue(), 0.0f, MaxHealth.GetCurrentValue());
        SetCurrentHealth(NewHealth);
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
}