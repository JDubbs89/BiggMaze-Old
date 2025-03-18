// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "EC_ReloadWeapon.generated.h"


/**
 Gameplay Effect Execution class for handling weapon reloads 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UEC_ReloadWeapon : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
    UEC_ReloadWeapon();

    virtual void Execute_Implementation(
        const FGameplayEffectCustomExecutionParameters& ExecutionParams,
        FGameplayEffectCustomExecutionOutput& OutputExecutionOutput) const override;


private:

    // Capture Definitions for Reload Calculation
    static FGameplayEffectAttributeCaptureDefinition CurrentMagCountDef;
    static FGameplayEffectAttributeCaptureDefinition MaxMagCountDef;
    static FGameplayEffectAttributeCaptureDefinition ReloadAmtDef;
    static FGameplayEffectAttributeCaptureDefinition AmmoTypeDef;
    
    // Capture Definitions for ALL Ammo Types (one for each type)
    static FGameplayEffectAttributeCaptureDefinition PistolAmmoDef;
    static FGameplayEffectAttributeCaptureDefinition RifleAmmoDef;
    static FGameplayEffectAttributeCaptureDefinition SniperAmmoDef;
    static FGameplayEffectAttributeCaptureDefinition ShotgunAmmoDef;
    static FGameplayEffectAttributeCaptureDefinition RocketAmmoDef;
    static FGameplayEffectAttributeCaptureDefinition UniversalAmmoDef;
};