// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_Damage.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UMMC_Damage : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

	UMMC_Damage();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec & Spec) const override;

	FGameplayEffectAttributeCaptureDefinition HealthDef;
	FGameplayEffectAttributeCaptureDefinition DamageDef;
};