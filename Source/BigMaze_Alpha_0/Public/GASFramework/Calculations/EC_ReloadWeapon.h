// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "EC_ReloadWeapon.generated.h"


/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UEC_ReloadWeapon : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
    UEC_ReloadWeapon();

    virtual void Execute_Implementation(
        const FGameplayEffectCustomExecutionParameters& ExecutionParams,
        FGameplayEffectCustomExecutionOutput& OutputExecutionOutput) const override;

    

};