// Copyright Jade Eye Studios 2025

#include "AbilitySystemComponent.h"
#include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "GASFramework/Calculations/EC_ReloadWeapon.h"

struct AmmunitionCapture
{
    DECLARE_ATTRIBUTE_CAPTUREDEF(MagCount);
    DECLARE_ATTRIBUTE_CAPTUREDEF(MaxMagCount);
    DECLARE_ATTRIBUTE_CAPTUREDEF(AmmoType);
    DECLARE_ATTRIBUTE_CAPTUREDEF(ReloadAmt);

    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentPistolAmmo);
    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentRifleAmmo);
    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentSniperAmmo);
    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentShotgunAmmo);
    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentRocketAmmo);
    DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentUniversalAmmo);

    AmmunitionCapture()
    {
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_EquippedItem, MagCount, Target, false);
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_EquippedItem, MaxMagCount, Target, false);
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_EquippedItem, AmmoType, Target, false);
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_EquippedItem, ReloadAmt, Target, false);

        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentPistolAmmo, Target, false); // Pistol
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentRifleAmmo, Target, false); // Rifle
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentSniperAmmo, Target, false); // Sniper
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentShotgunAmmo, Target, false); // Shotgun
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentRocketAmmo, Target, false); // Rocket
        DEFINE_ATTRIBUTE_CAPTUREDEF(UAS_Ammunition, CurrentUniversalAmmo, Target, false); // Universal
    }
};

static AmmunitionCapture& GetAmmunitionCapture()
{
    static AmmunitionCapture AmmunitionCapture;
    return AmmunitionCapture;
}

UEC_ReloadWeapon::UEC_ReloadWeapon()
{
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().MagCountDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().MaxMagCountDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().AmmoTypeDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().ReloadAmtDef);

    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentPistolAmmoDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentRifleAmmoDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentSniperAmmoDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentShotgunAmmoDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentRocketAmmoDef);
    RelevantAttributesToCapture.Add(GetAmmunitionCapture().CurrentUniversalAmmoDef);
}

void UEC_ReloadWeapon::Execute_Implementation(const FGameplayEffectCustomExecutionParameters &ExecutionParams, FGameplayEffectCustomExecutionOutput &OutputExecutionOutput) const
{
    UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();
    AActor* TargetActor = TargetASC ? TargetASC->GetAvatarActor() : nullptr;

    UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
    AActor* SourceActor = SourceASC ? SourceASC->GetAvatarActor() : nullptr;

    const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
    const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluationParameters;
    EvaluationParameters.SourceTags = SourceTags;
    EvaluationParameters.TargetTags = TargetTags;

    float MagCount = 0.0f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().MagCountDef, EvaluationParameters, MagCount);

    float MaxMagCount = 0.0f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().MaxMagCountDef, EvaluationParameters, MaxMagCount);

    float AmmoType = 0.0f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().AmmoTypeDef, EvaluationParameters, AmmoType);

    float ReloadAmt = 0.0f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().ReloadAmtDef, EvaluationParameters, ReloadAmt);

    float AmmoNeeded = FMath::Clamp(MaxMagCount - MagCount, 0.0f, MaxMagCount); // Determine the amount of ammo we need to fill the mag

    float ReservesAvailable = 0.f; // If else loop to determine what kind of ammo and how much we need/have
    if (AmmoType == 0.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentPistolAmmoDef, EvaluationParameters, ReservesAvailable);
    }
    else if (AmmoType == 1.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentRifleAmmoDef, EvaluationParameters, ReservesAvailable);
    }
    else if (AmmoType == 2.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentSniperAmmoDef, EvaluationParameters, ReservesAvailable);
    }
    else if (AmmoType == 3.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentShotgunAmmoDef, EvaluationParameters, ReservesAvailable);
    }
    else if (AmmoType == 4.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentRocketAmmoDef, EvaluationParameters, ReservesAvailable);
    }
    else if (AmmoType == 5.0f)
    {
        ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetAmmunitionCapture().CurrentUniversalAmmoDef, EvaluationParameters, ReservesAvailable);
    }

    float AmmoToReplenish = FMath::Clamp(AmmoNeeded, 0.0f, ReservesAvailable); // Clamp the amount of ammo we need to the amount of reserves we have

    AmmoToReplenish = FMath::Clamp(AmmoToReplenish, 0.0f, ReloadAmt); // Clamp the amount of ammo we can give to the amount allowed by a single reload instance

    OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().MagCountProperty,
    EGameplayModOp::Additive, AmmoToReplenish)); // Propogate changes to mag count
    
    if (AmmoType == 0.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentPistolAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }
    else if (AmmoType == 1.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentRifleAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }
    else if (AmmoType == 2.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentSniperAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }
    else if (AmmoType == 3.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentShotgunAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }
    else if (AmmoType == 4.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentRocketAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }
    else if (AmmoType == 5.0f)
    {
        OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetAmmunitionCapture().CurrentUniversalAmmoProperty,
        EGameplayModOp::Additive, (-AmmoToReplenish))); // Propogate changes to reserves
    }

}