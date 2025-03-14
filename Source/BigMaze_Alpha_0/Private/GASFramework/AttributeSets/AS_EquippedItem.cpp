// Copyright of Jade Eye Studios 2025


#include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "Net/UnrealNetwork.h"

UAS_EquippedItem::UAS_EquippedItem()
{
    // Set default values for attributes in set. Initialized as -99 for item specific attributes

    /** StackCount */
    StackCount.SetBaseValue(1.f);
    StackCount.SetCurrentValue(1.f);
    /** MaxStackCount */
    MaxStackCount.SetBaseValue(1.f);
    MaxStackCount.SetCurrentValue(1.f);

    /** MagCount */
    MagCount.SetBaseValue(-99.f);
    MagCount.SetCurrentValue(0.f);
    /** MaxMagCount */
    MaxMagCount.SetBaseValue(-99.f);
    MaxMagCount.SetCurrentValue(-99.f);
    /** AmmoType */
    AmmoType.SetBaseValue(-99.f);
    AmmoType.SetCurrentValue(-99.f);

    /** Level */
    Level.SetBaseValue(1.f);
    Level.SetCurrentValue(1.f);
    /** MaxLevel */
    MaxLevel.SetBaseValue(10.f);
    MaxLevel.SetCurrentValue(10.f);

    /** Range */
    Range.SetBaseValue(-99.f);
    Range.SetCurrentValue(-99.f);

    /** Spread */
    Spread.SetBaseValue(-99.f);
    Spread.SetCurrentValue(-99.f);
    /** ScopedSpread */
    ScopedSpread.SetBaseValue(-99.f);
    ScopedSpread.SetCurrentValue(-99.f);

    /** Damage */
    Damage.SetBaseValue(-99.f);
    Damage.SetCurrentValue(-99.f);
    /* CritMultiplier */
    CritMultiplier.SetBaseValue(-99.f);
    CritMultiplier.SetCurrentValue(-99.f);

    /** Handling */
    Handling.SetBaseValue(1.f);
    Handling.SetCurrentValue(1.f);

    /** FireRate */
    FireRate.SetBaseValue(60.f);
    FireRate.SetCurrentValue(60.f);
}

// RepNotifies -----------------------------------------------------------------------------------------

/** StackCount */
// StackCount
void UAS_EquippedItem::OnRep_StackCount(const FGameplayAttributeData& OldStackCount)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, StackCount, OldStackCount);
}
// MaxStackCount
void UAS_EquippedItem::OnRep_MaxStackCount(const FGameplayAttributeData& OldMaxStackCount)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, MaxStackCount, OldMaxStackCount);
}

/** Magazine */
// MagCount
void UAS_EquippedItem::OnRep_MagCount(const FGameplayAttributeData& OldMagCount)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, MagCount, OldMagCount);
}
// MaxMagCount
void UAS_EquippedItem::OnRep_MaxMagCount(const FGameplayAttributeData& OldMaxMagCount)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, MaxMagCount, OldMaxMagCount);
}
// AmmoType
void UAS_EquippedItem::OnRep_AmmoType(const FGameplayAttributeData& OldAmmoType)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, AmmoType, OldAmmoType);
}
// ReloadAmt
void UAS_EquippedItem::OnRep_ReloadAmt(const FGameplayAttributeData& OldReloadAmt)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, ReloadAmt, OldReloadAmt);
}

/** Level */
// Level
void UAS_EquippedItem::OnRep_Level(const FGameplayAttributeData& OldLevel)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, Level, OldLevel);
}
// MaxLevel
void UAS_EquippedItem::OnRep_MaxLevel(const FGameplayAttributeData& OldMaxLevel)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, MaxLevel, OldMaxLevel);
}

/** Range */
// Range
void UAS_EquippedItem::OnRep_Range(const FGameplayAttributeData& OldRange)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, Range, OldRange);
}

/** Spread */
// Spread
void UAS_EquippedItem::OnRep_Spread(const FGameplayAttributeData& OldSpread)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, Spread, OldSpread);
}
// ScopedSpread
void UAS_EquippedItem::OnRep_ScopedSpread(const FGameplayAttributeData& OldScopedSpread)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, ScopedSpread, OldScopedSpread);
}

/** Damage */
// Damage
void UAS_EquippedItem::OnRep_Damage(const FGameplayAttributeData& OldDamage)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, Damage, OldDamage);
}
// CritMultiplier
void UAS_EquippedItem::OnRep_CritMultiplier(const FGameplayAttributeData& OldCritMultiplier)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, CritMultiplier, OldCritMultiplier);
}

/** Handling */
// Handling
void UAS_EquippedItem::OnRep_Handling(const FGameplayAttributeData& OldHandling)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, Handling, OldHandling);
}

/** FireRate */
// FireRate
void UAS_EquippedItem::OnRep_FireRate(const FGameplayAttributeData& OldFireRate)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_EquippedItem, FireRate, OldFireRate);
}

// Attribute Change and Parent Overrides ---------------------------------------------------------------

/** Pre Attribute Change */
void UAS_EquippedItem::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue); // Callback to parent function

    if (Attribute == GetStackCountAttribute()) // Stack
    {
        const float MaxValue = MaxStackCount.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
    }
    else if (Attribute == GetLevelAttribute()) // Level
    {
        const float MaxValue = MaxLevel.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
    }
    else if (Attribute == GetHandlingAttribute()) // Handling
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
    }
    else if (Attribute == GetFireRateAttribute()) // FireRate
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
    }
    else if (Attribute == GetMagCountAttribute()) // MagCount
    {
        if (NewValue != -99.f)
        {
            const float MaxValue = MaxMagCount.GetCurrentValue();
            NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
        }
    }
    else if (Attribute == GetAmmoTypeAttribute())
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, 5.f); // bounded between 0 and 5 (1 and 6) due to there being 6 ammo types
        }
    }
    else if (Attribute == GetReloadAmtAttribute())
    {
        if (NewValue != -99.f)
        {
            const float MaxValue = MaxMagCount.GetCurrentValue();
            NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
        }
    }
    else if (Attribute == GetRangeAttribute()) // Range
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
        }
    }
    else if (Attribute == GetSpreadAttribute()) // Spread
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
        }
    }
    else if (Attribute == GetScopedSpreadAttribute()) // ScopedSpread
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
        }
    }
    else if (Attribute == GetDamageAttribute()) // Damage
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
        }
    }
    else if (Attribute == GetCritMultiplierAttribute()) // CritMultiplier
    {
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
        }
    }
}

/** Post Gameplay Effect Execute */
void UAS_EquippedItem::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data); // Callback to parent function

    FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);
    FGameplayAttribute Attribute = Data.EvaluatedData.Attribute;
    float NewValue = -99.f;

    if (Attribute == GetStackCountAttribute()) // Stack
    {
        const float MaxValue = MaxStackCount.GetCurrentValue();
        NewValue = FMath::Clamp(StackCount.GetCurrentValue(), 0.0f, MaxValue);
        SetStackCount(NewValue);
    }
    else if (Attribute == GetLevelAttribute()) // Level
    {
        const float MaxValue = MaxLevel.GetCurrentValue();
        NewValue = FMath::Clamp(Level.GetCurrentValue(), 0.0f, MaxValue);
        SetLevel(NewValue); // Level
    }
    else if (Attribute == GetHandlingAttribute()) // Handling
    {
        NewValue = FMath::Clamp(Handling.GetCurrentValue(), 0.0f, NewValue);
        SetHandling(NewValue); // Handling
    }
    else if (Attribute == GetFireRateAttribute()) // FireRate
    {
        NewValue = FMath::Clamp(FireRate.GetCurrentValue(), 0.0f, NewValue);
        SetFireRate(NewValue); // FireRate
    }
    else if (Attribute == GetMagCountAttribute()) // MagCount
    {
        NewValue = MagCount.GetCurrentValue();
        if (NewValue != -99.f)
        {
            const float MaxValue = MaxMagCount.GetCurrentValue();
            NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
            SetMagCount(NewValue); // MagCount
        }
    }
    else if (Attribute == GetAmmoTypeAttribute())
    {
        NewValue = AmmoType.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, 5.f);
            SetAmmoType(NewValue); // Ammo Type
        }
    }
    else if (Attribute == GetReloadAmtAttribute())
    {
        const float MaxValue = MaxMagCount.GetCurrentValue();
        NewValue = ReloadAmt.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, MaxValue);
            SetReloadAmt(NewValue);
        }
    }
    else if (Attribute == GetRangeAttribute()) // Range
    {
        NewValue = Range.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
            SetRange(NewValue); // Range
        }
    }
    else if (Attribute == GetSpreadAttribute()) // Spread
    {
        NewValue = Spread.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
            SetSpread(NewValue); // Spread
        }
    }
    else if (Attribute == GetScopedSpreadAttribute()) // ScopedSpread
    {
        NewValue = ScopedSpread.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
            SetScopedSpread(NewValue); // ScopedSpread
        }
    }
    else if (Attribute == GetDamageAttribute()) // Damage
    {
        NewValue = Damage.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
            SetDamage(NewValue); // Damage
        }
    }
    else if (Attribute == GetCritMultiplierAttribute()) // CritMultiplier
    {
        NewValue = CritMultiplier.GetCurrentValue();
        if (NewValue != -99.f)
        {
            NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
            SetCritMultiplier(NewValue); // CritMultiplier
        }
    }

}

/** Get Lifetime Replicated Props */
void UAS_EquippedItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate All Attributes to Clients

    /* StackCount */
    // StackCount
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, StackCount, COND_None, REPNOTIFY_Always);
    // MaxStackCount
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, MaxStackCount, COND_None, REPNOTIFY_Always);

    /** Magazine */
    // MagCount
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, MagCount, COND_None, REPNOTIFY_Always);
    // MaxMagCount
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, MaxMagCount, COND_None, REPNOTIFY_Always);
    // Ammo Type
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, AmmoType, COND_None, REPNOTIFY_Always);
    // Reload Amt
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, ReloadAmt, COND_None, REPNOTIFY_Always);

    /** Level */
    // Level
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, Level, COND_None, REPNOTIFY_Always);
    // MaxLevel
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, MaxLevel, COND_None, REPNOTIFY_Always);

    /** Range */
    // Range
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, Range, COND_None, REPNOTIFY_Always);

    /** Spread */
    // Spread
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, Spread, COND_None, REPNOTIFY_Always);
    // ScopedSpread
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, ScopedSpread, COND_None, REPNOTIFY_Always);

    /** Damage */
    // Damage
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, Damage, COND_None, REPNOTIFY_Always);
    // CritMultiplier
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, CritMultiplier, COND_None, REPNOTIFY_Always);

    /** Handling */
    // Handling
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, Handling, COND_None, REPNOTIFY_Always);

    /** FireRate */
    // FireRate
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_EquippedItem, FireRate, COND_None, REPNOTIFY_Always);

}