// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "GASFramework/AttributeSets/AS_Ingredients.h"
#include "BiggMazePlayerState.generated.h"



/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API ABiggMazePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	ABiggMazePlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:

	virtual void BeginPlay() override;

	// ASC
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UASC_BiggMaze> AbilitySystemComponent;
	// Attribute Set
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAS_Ammunition> AmmoAttributeSet;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAS_Ingredients> IngredientAttributeSet;

	void InitializeAttributes();

private:

	// Specifies what properties get replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
