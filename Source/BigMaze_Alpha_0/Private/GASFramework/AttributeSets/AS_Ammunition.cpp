// Copyright Jade Eye Studios 2025


#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "Net/UnrealNetwork.h"

UAS_Ammunition::UAS_Ammunition()
{
    // Set Default attribute values

    /** Cost */
    Cost.SetBaseValue(0.f);
    Cost.SetCurrentValue(0.f);

    /** Pistol */
    CurrentPistolAmmo.SetBaseValue(0.f);
    CurrentPistolAmmo.SetCurrentValue(0.f);

    MaxPistolAmmo.SetBaseValue(999.f);
    MaxPistolAmmo.SetCurrentValue(0.f);

    /** Rifle */
    CurrentRifleAmmo.SetBaseValue(0.f);
    CurrentRifleAmmo.SetCurrentValue(0.f);

    MaxRifleAmmo.SetBaseValue(999.f);
    MaxRifleAmmo.SetCurrentValue(0.f);

    /** Sniper */
    CurrentSniperAmmo.SetBaseValue(0.f);
    CurrentSniperAmmo.SetCurrentValue(0.f);

    MaxSniperAmmo.SetBaseValue(50.f);
    MaxSniperAmmo.SetCurrentValue(0.f);

    /** Shotgun */
    CurrentShotgunAmmo.SetBaseValue(0.f);
    CurrentShotgunAmmo.SetCurrentValue(0.f);

    MaxShotgunAmmo.SetBaseValue(50.f);
    MaxShotgunAmmo.SetCurrentValue(0.f);

    /** Rocket */
    CurrentRocketAmmo.SetBaseValue(0.f);
    CurrentRocketAmmo.SetCurrentValue(0.f);

    MaxRocketAmmo.SetBaseValue(20.f);
    MaxRocketAmmo.SetCurrentValue(0.f);

    /** Universal */
    CurrentUniversalAmmo.SetBaseValue(0.f);
    CurrentUniversalAmmo.SetCurrentValue(0.f);

    MaxUniversalAmmo.SetBaseValue(999.f);
    MaxUniversalAmmo.SetCurrentValue(0.f);
}

// Overrides for parent functions

/** Pre Attribute Change, mainly used for clamping */
void UAS_Ammunition::PreAttributeChange(const FGameplayAttribute &Attribute, float &NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue); // Parent function callback

    if (Attribute == GetCurrentPistolAmmoAttribute()) // Current Pistol Ammo Clamp
    {
        const float MaxValue = MaxPistolAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
    else if (Attribute == GetCurrentRifleAmmoAttribute()) // Current Rifle Ammo Clamp
    {
        const float MaxValue = MaxRifleAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
    else if (Attribute == GetCurrentSniperAmmoAttribute()) // Current Sniper Ammo Clamp
    {
        const float MaxValue = MaxSniperAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
    else if (Attribute == GetCurrentShotgunAmmoAttribute()) // Current Shotgun Ammo Clamp
    {
        const float MaxValue = MaxShotgunAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
    else if (Attribute == GetCurrentRocketAmmoAttribute()) // Current Rocket Ammo Clamp
    {
        const float MaxValue = MaxRocketAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
    else if (Attribute == GetCurrentUniversalAmmoAttribute()) // Current Universal Ammo Clamp
    {
        const float MaxValue = MaxUniversalAmmo.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue,0.0f,MaxValue);
    }
}

void UAS_Ammunition::PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data)
{
    Super::PostGameplayEffectExecute(Data); // Parent function callback

    if (Data.EvaluatedData.Attribute == GetCurrentPistolAmmoAttribute()) // Pistol Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentPistolAmmo.GetCurrentValue(), 0.0f, MaxPistolAmmo.GetCurrentValue());
        SetCurrentPistolAmmo(NewValue);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentRifleAmmoAttribute()) // Rifle Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentRifleAmmo.GetCurrentValue(), 0.0f, MaxRifleAmmo.GetCurrentValue());
        SetCurrentRifleAmmo(NewValue);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentSniperAmmoAttribute()) // Sniper Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentSniperAmmo.GetCurrentValue(), 0.0f, MaxSniperAmmo.GetCurrentValue());
        SetCurrentSniperAmmo(NewValue);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentShotgunAmmoAttribute()) // Shotgun Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentShotgunAmmo.GetCurrentValue(), 0.0f, MaxShotgunAmmo.GetCurrentValue());
        SetCurrentShotgunAmmo(NewValue);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentRocketAmmoAttribute()) // Rocket Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentRocketAmmo.GetCurrentValue(), 0.0f, MaxRocketAmmo.GetCurrentValue());
        SetCurrentRocketAmmo(NewValue);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentUniversalAmmoAttribute()) // Universal Ammo Post Clamp
    {
        float NewValue = FMath::Clamp(CurrentUniversalAmmo.GetCurrentValue(), 0.0f, MaxUniversalAmmo.GetCurrentValue());
        SetCurrentUniversalAmmo(NewValue);
    }
}

void UAS_Ammunition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps); // Parent function callback

    /** Pistol Ammo */
    //Current Pistol Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentPistolAmmo, COND_None, REPNOTIFY_Always);
    //Max Pistol Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxPistolAmmo, COND_None, REPNOTIFY_Always);

    /** Rifle Ammo */
    //Current Rifle Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentRifleAmmo, COND_None, REPNOTIFY_Always);
    //Max Rifle Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxRifleAmmo, COND_None, REPNOTIFY_Always);

    /** Sniper Ammo */
    //Current Sniper Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentSniperAmmo, COND_None, REPNOTIFY_Always);
    //Max Sniper Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxSniperAmmo, COND_None, REPNOTIFY_Always);

    /** Shotgun Ammo */
    //Current Shotgun Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentShotgunAmmo, COND_None, REPNOTIFY_Always);
    //Max Shotgun Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxShotgunAmmo, COND_None, REPNOTIFY_Always);

    /** Rocket Ammo */
    //Current Rocket Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentRocketAmmo, COND_None, REPNOTIFY_Always);
    //Max Rocket Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxRocketAmmo, COND_None, REPNOTIFY_Always);

    /** Universal Ammo */
    //Current Universal Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, CurrentUniversalAmmo, COND_None, REPNOTIFY_Always);
    //Max Universal Ammo
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ammunition, MaxUniversalAmmo, COND_None, REPNOTIFY_Always);
}

// RepNotifies for attributes

void UAS_Ammunition::OnRep_CurrentPistolAmmo(const FGameplayAttributeData &OldCurrentPistolAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentPistolAmmo, OldCurrentPistolAmmo);
}

void UAS_Ammunition::OnRep_MaxPistolAmmo(const FGameplayAttributeData &OldMaxPistolAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxPistolAmmo, OldMaxPistolAmmo);
}

void UAS_Ammunition::OnRep_CurrentRifleAmmo(const FGameplayAttributeData &OldCurrentRifleAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentRifleAmmo, OldCurrentRifleAmmo);
}

void UAS_Ammunition::OnRep_MaxRifleAmmo(const FGameplayAttributeData &OldMaxRifleAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxRifleAmmo, OldMaxRifleAmmo);
}

void UAS_Ammunition::OnRep_CurrentSniperAmmo(const FGameplayAttributeData &OldCurrentSniperAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentSniperAmmo, OldCurrentSniperAmmo);
}

void UAS_Ammunition::OnRep_MaxSniperAmmo(const FGameplayAttributeData &OldMaxSniperAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxSniperAmmo, OldMaxSniperAmmo);
}

void UAS_Ammunition::OnRep_CurrentShotgunAmmo(const FGameplayAttributeData &OldCurrentShotgunAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentShotgunAmmo, OldCurrentShotgunAmmo);
}

void UAS_Ammunition::OnRep_MaxShotgunAmmo(const FGameplayAttributeData &OldMaxShotgunAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxShotgunAmmo, OldMaxShotgunAmmo);
}

void UAS_Ammunition::OnRep_CurrentRocketAmmo(const FGameplayAttributeData &OldCurrentRocketAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentRocketAmmo, OldCurrentRocketAmmo);
}

void UAS_Ammunition::OnRep_MaxRocketAmmo(const FGameplayAttributeData &OldMaxRocketAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxRocketAmmo, OldMaxRocketAmmo);
}

void UAS_Ammunition::OnRep_CurrentUniversalAmmo(const FGameplayAttributeData &OldCurrentUniversalAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, CurrentUniversalAmmo, OldCurrentUniversalAmmo);
}

void UAS_Ammunition::OnRep_MaxUniversalAmmo(const FGameplayAttributeData &OldMaxUniversalAmmo)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ammunition, MaxUniversalAmmo, OldMaxUniversalAmmo);
}
