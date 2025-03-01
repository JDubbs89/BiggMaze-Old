// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ASC_CharacterBase.generated.h"

// DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedDamageDelegate, UGDAbilitySystemComponent*, SourceASC, float, UnmitigatedDamage, float, MitigatedDamage);


UCLASS()
class BIGMAZE_ALPHA_0_API UASC_CharacterBase : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	bool AbilitiesGiven = false;
	bool StartupEffectsApplied = false;


    
};