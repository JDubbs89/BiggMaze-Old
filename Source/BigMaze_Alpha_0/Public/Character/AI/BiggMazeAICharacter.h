// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "Character/BiggMazeCharacter.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "GASFramework/AttributeSets/AS_Ingredients.h"
#include "BiggMazeAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API ABiggMazeAICharacter : public ABiggMazeCharacter
{
	GENERATED_BODY()

public:
	ABiggMazeAICharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	void AddCharAttributeChangeDelegates();

	void AddAmmoAttributeChangeDelegates();

	void AddIngredientAttributeChangeDelegates();
	// Functions to handle attribute changes and propagate those changes to UI
	
	/** Health Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // CurrentHealth
	void OnCurrentHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // MaxHealth
	void OnMaxHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Health") // RegenHealth
	void OnRegenHealthChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Stamina Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Stamina") // CurrentStamina
	void OnCurrentStaminaChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Stamina") // MaxStamina
	void OnMaxStaminaChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Stamina") // RegenStamina
	void OnRegenStaminaChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Leveling Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Leveling") // CurrentLevel
	void OnCurrentLevelChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Leveling") // XPRequired
	void OnXPRequiredChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Leveling") // CurrentXP
	void OnCurrentXPChanged(float DeltaValue, const FGameplayTagContainer& EventTags);


	// Ammo Attribute Set
	/** Pistol Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Pistol Ammo") // Current Pistol Ammo
	void OnCurrentPistolAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Pistol Ammo") // Max Pistol Ammo
	void OnMaxPistolAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Rifle Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Rifle Ammo") // Current Rifle Ammo
	void OnCurrentRifleAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Rifle Ammo") // Max Rifle Ammo
	void OnMaxRifleAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Sniper Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Sniper Ammo") // Current Sniper Ammo
	void OnCurrentSniperAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Sniper Ammo") // Max Sniper Ammo
	void OnMaxSniperAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Shotgun Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Shotgun Ammo") // Current Shotgun Ammo
	void OnCurrentShotgunAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Shotgun Ammo") // Max Shotgun Ammo
	void OnMaxShotgunAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Rocket Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Rocket Ammo") // Current Rocket Ammo
	void OnCurrentRocketAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Rocket Ammo") // Max Rocket Ammo
	void OnMaxRocketAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Universal Ammo Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Universal Ammo") // Current Universal Ammo
	void OnCurrentUniversalAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Universal Ammo") // Max Universal Ammo
	void OnMaxUniversalAmmoChanged(float DeltaValue, const FGameplayTagContainer& EventTags);

	/** Ingredient1 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient1
	void OnCurrentIngredient1Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient1
	void OnMaxIngredient1Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	
	/** Ingredient2 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient2
	void OnCurrentIngredient2Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient2
	void OnMaxIngredient2Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	
	/** Ingredient3 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient3
	void OnCurrentIngredient3Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient3
	void OnMaxIngredient3Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	
	/** Ingredient4 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient4
	void OnCurrentIngredient4Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient4
	void OnMaxIngredient4Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	
	/** Ingredient5 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient5
	void OnCurrentIngredient5Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient5
	void OnMaxIngredient5Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	
	/** Ingredient6 Attributes */
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Current Ingredient6
	void OnCurrentIngredient6Changed(float DeltaValue, const FGameplayTagContainer& EventTags);
	UFUNCTION(BlueprintImplementableEvent, Category = "Ingredients") // Max Ingredient6
	void OnMaxIngredient6Changed(float DeltaValue, const FGameplayTagContainer& EventTags);

protected:

	virtual void BeginPlay() override;

	// Attribute Set
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAS_Ammunition> AmmoAttributeSet;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes", Replicated, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAS_Ingredients> IngredientAttributeSet;

	void InitializeAttributes();

private:

	// Functions to handle attribute changes

	/** Health Attributes */
	void HandleCurrentHealthChanged(const FOnAttributeChangeData& Data); // CurrentHealth
	void HandleMaxHealthChanged(const FOnAttributeChangeData& Data); // MaxHealth
	void HandleRegenHealthChanged(const FOnAttributeChangeData& Data); // RegenHealth

	/** Stamina Attributes */
	void HandleCurrentStaminaChanged(const FOnAttributeChangeData& Data); // CurrentStamina
	void HandleMaxStaminaChanged(const FOnAttributeChangeData& Data); // MaxStamina
	void HandleRegenStaminaChanged(const FOnAttributeChangeData& Data); // RegenStamina

	/** Leveling Attributes */
	void HandleCurrentLevelChanged(const FOnAttributeChangeData& Data); // CurrentLevel
	void HandleXPRequiredChanged(const FOnAttributeChangeData& Data); // XPRequired
	void HandleCurrentXPChanged(const FOnAttributeChangeData& Data); // CurrentXP

	/** Ammo Attributes */
	// PistolAmmo
	void HandleCurrentPistolAmmoChanged(const FOnAttributeChangeData& Data); // CurrentPistolAmmo
	void HandleMaxPistolAmmoChanged(const FOnAttributeChangeData& Data); // MaxPistolAmmo
	// RifleAmmo
	void HandleCurrentRifleAmmoChanged(const FOnAttributeChangeData& Data); // CurrentRifleAmmo
	void HandleMaxRifleAmmoChanged(const FOnAttributeChangeData& Data); // MaxRifleAmmo
	// SniperAmmo
	void HandleCurrentSniperAmmoChanged(const FOnAttributeChangeData& Data); // CurrentSniperAmmo
	void HandleMaxSniperAmmoChanged(const FOnAttributeChangeData& Data); // MaxSniperAmmo
	// ShotgunAmmo
	void HandleCurrentShotgunAmmoChanged(const FOnAttributeChangeData& Data); // CurrentShotgunAmmo
	void HandleMaxShotgunAmmoChanged(const FOnAttributeChangeData& Data); // MaxShotgunAmmo
	// RocketAmmo
	void HandleCurrentRocketAmmoChanged(const FOnAttributeChangeData& Data); // CurrentRocketAmmo
	void HandleMaxRocketAmmoChanged(const FOnAttributeChangeData& Data); // MaxRocketAmmo
	// UniversalAmmo
	void HandleCurrentUniversalAmmoChanged(const FOnAttributeChangeData& Data); // CurrentUniversalAmmo
	void HandleMaxUniversalAmmoChanged(const FOnAttributeChangeData& Data); // MaxUniversalAmmo

	/** Ingredient Attributes */
	//Ingredient Ingredient1
	void HandleCurrentIngredient1Changed(const FOnAttributeChangeData& Data); // CurrentIngredient1
	void HandleMaxIngredient1Changed(const FOnAttributeChangeData& Data); // Max Ingredient1
	//Ingredient Ingredient2
	void HandleCurrentIngredient2Changed(const FOnAttributeChangeData& Data); // CurrentIngredient2
	void HandleMaxIngredient2Changed(const FOnAttributeChangeData& Data); // Max Ingredient2
	//Ingredient Ingredient3
	void HandleCurrentIngredient3Changed(const FOnAttributeChangeData& Data); // CurrentIngredient3
	void HandleMaxIngredient3Changed(const FOnAttributeChangeData& Data); // Max Ingredient3
	//Ingredient Ingredient4
	void HandleCurrentIngredient4Changed(const FOnAttributeChangeData& Data); // CurrentIngredient4
	void HandleMaxIngredient4Changed(const FOnAttributeChangeData& Data); // Max Ingredient4
	//Ingredient Ingredient5
	void HandleCurrentIngredient5Changed(const FOnAttributeChangeData& Data); // CurrentIngredient5
	void HandleMaxIngredient5Changed(const FOnAttributeChangeData& Data); // Max Ingredient5
	//Ingredient Ingredient6
	void HandleCurrentIngredient6Changed(const FOnAttributeChangeData& Data); // CurrentIngredient6
	void HandleMaxIngredient6Changed(const FOnAttributeChangeData& Data); // Max Ingredient6

	// Specifies what properties get replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


};
