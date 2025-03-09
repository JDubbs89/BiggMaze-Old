// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "BiggMazeCharacter.generated.h"

UCLASS(Blueprintable, ClassGroup = BiggMaze)
class BIGMAZE_ALPHA_0_API ABiggMazeCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABiggMazeCharacter();

	// Interface method for getting ASC
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ASC
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UASC_BiggMaze> AbilitySystemComponent;

	// Character Attribute Set
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAS_BM_CharBase> CharAttributeSet;

	void InitializeAttributes();

	UFUNCTION(Blueprintable)
	void InitializeAbilities();

	virtual void OnRep_PlayerState() override;


	// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Abilities")
	TArray<TSubclassOf<class UGameplayAbility>> CharacterAbilities;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController * NewController) override;

private:

	// Specifies what properties get replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
