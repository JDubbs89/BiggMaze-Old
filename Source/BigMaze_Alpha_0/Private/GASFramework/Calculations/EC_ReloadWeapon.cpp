// Copyright Jade Eye Studios 2025

#include "EngineGlobals.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "GASFramework/Calculations/EC_ReloadWeapon.h"

UEC_ReloadWeapon::UEC_ReloadWeapon()
{
}

/** Defining Attribute Captures */

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::CurrentMagCountDef(
    UAS_EquippedItem::GetMagCountAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::MaxMagCountDef(
    UAS_EquippedItem::GetMaxMagCountAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::AmmoTypeDef(
    UAS_EquippedItem::GetAmmoTypeAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::ReloadAmtDef(
    UAS_EquippedItem::GetReloadAmtAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

// Capture definitions for ALL ammo types
FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::PistolAmmoDef(
    UAS_Ammunition::GetCurrentPistolAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::RifleAmmoDef(
    UAS_Ammunition::GetCurrentRifleAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::SniperAmmoDef(
    UAS_Ammunition::GetCurrentSniperAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::ShotgunAmmoDef(
    UAS_Ammunition::GetCurrentShotgunAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::RocketAmmoDef(
    UAS_Ammunition::GetCurrentRocketAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

FGameplayEffectAttributeCaptureDefinition UEC_ReloadWeapon::UniversalAmmoDef(
    UAS_Ammunition::GetCurrentUniversalAmmoAttribute(), 
    EGameplayEffectAttributeCaptureSource::Source, 
    true
);

/** Execution Implementation */

void UEC_ReloadWeapon::Execute_Implementation(const FGameplayEffectCustomExecutionParameters &ExecutionParams, FGameplayEffectCustomExecutionOutput &OutputExecutionOutput) const
{
    // Retrieve source and target ASC
    const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
    UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
    UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();

    const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluateParameters;
    EvaluateParameters.SourceTags = SourceTags;
    EvaluateParameters.TargetTags = TargetTags;
    
    // Get Equipped Item Attributes
    float CurrentMagCount = 0.f;
    float MaxMagCount = 0.f;
    float ReloadAmt = 0.f;
    float AmmoType = 0.f;

    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(CurrentMagCountDef, EvaluateParameters, CurrentMagCount);
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MaxMagCountDef, EvaluateParameters, MaxMagCount);
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(ReloadAmtDef, EvaluateParameters, ReloadAmt);
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(AmmoTypeDef, EvaluateParameters, AmmoType);
    
    // Determine which ammo attribute to use
    FGameplayEffectAttributeCaptureDefinition SelectedAmmoDef;

    switch (static_cast<int32>(AmmoType))
    {
        case 0: SelectedAmmoDef = PistolAmmoDef; break;
        case 1: SelectedAmmoDef = RifleAmmoDef; break;
        case 2: SelectedAmmoDef = SniperAmmoDef; break;
        case 3: SelectedAmmoDef = ShotgunAmmoDef; break;
        case 4: SelectedAmmoDef = RocketAmmoDef; break;
        case 5: SelectedAmmoDef = UniversalAmmoDef; break;
        default: SelectedAmmoDef = UniversalAmmoDef; break; // Default to universal ammo
    }                                                              
    
    // Get Ammo Attributes
    float CurrentReserveCount = 0.f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(SelectedAmmoDef, EvaluateParameters, CurrentReserveCount);

    // Calculate Reload
    float NeededAmmo = MaxMagCount - CurrentMagCount;
    float AvailableAmmo = FMath::Min(NeededAmmo, CurrentReserveCount);
    float AmmoToReload = FMath::Min(AvailableAmmo, ReloadAmt);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Ammo Approved to be re-allocated: %f"), AmmoToReload));
    }

    // Apply changes
    OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(CurrentMagCountDef.AttributeToCapture, EGameplayModOp::Additive, AmmoToReload));
    OutputExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(SelectedAmmoDef.AttributeToCapture, EGameplayModOp::Additive, -AmmoToReload));

}