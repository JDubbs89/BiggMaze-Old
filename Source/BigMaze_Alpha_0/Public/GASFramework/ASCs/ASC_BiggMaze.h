// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ASC_BiggMaze.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedDamageDelegate, UASC_BiggMaze*, SourceASC, float, UnmitigatedDamage, float, MitigatedDamage);


/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UASC_BiggMaze : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	bool AbilitiesGiven = false;
	bool StartupEffectsApplied = false;

	//FReceivedDamageDelegate RecievedDamage;
	
	//virtual void ReceiveDamage(UASC_BiggMaze* SourceASC, float UnmitigatedDamage, float MitigatedDamage);



};
