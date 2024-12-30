// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "PS_BiggMaze.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API APS_BiggMaze : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	//Implement IAbilitySystem Interface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UBMAttributeBase* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "BiggMaze PlayerState")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "BiggMaze PlayerState UI")
	void ShowAbilityConfirmCancelText(bool ShowText);


	/**
	 * Getters for Attributes from BMAttributeSetBase. Returns Current Value unless otherwise specified.
	 */

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	int32 GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "GASDocumentation|GDPlayerState|Attributes")
	int32 GetXP() const;

protected:
	UPROPERTY()
	class UBMAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UBMAttributeSetBase* AttributeSetBase;

	FGameplayTag DeadTag;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle XPChangedDelegateHandle;	
	FDelegateHandle CharacterLevelChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void XPChanged(const FOnAttributeChangeData& Data);
	virtual void CharacterLevelChanged(const FOnAttributeChangeData& Data);

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
