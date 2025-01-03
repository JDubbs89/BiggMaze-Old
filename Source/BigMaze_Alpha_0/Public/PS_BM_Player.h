// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "AS_BM_CharBase.h"
#include "PS_BM_Player.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API APS_BM_Player : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this playerstate's properties
	APS_BM_Player();

	// Implements the interface method for getting the ASC
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// Functions to handle attribute changes and propagate those changes to UI
	
	/** Health Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // CurrentHealth
	void OnCurrentHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // MaxHealth
	void OnMaxHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // RegenHealth
	void OnRegenHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// ASC
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystemComponent;
	// Attribute Set
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	UAS_BM_CharBase* AttributeSet;

	void InitializeAttributes();

private:
	// Functions to handle attribute changes

	/** Health Attributes */
	void HandleCurrentHealthChanged(const FOnAttributeChangeData& Data); // CurrentHealth
	void HandleMaxHealthChanged(const FOnAttributeChangeData& Data); // MaxHealth
	void HandleRegenHealthChanged(const FOnAttributeChangeData& Data); // RegenHealth

	// Specifies what properties get replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
