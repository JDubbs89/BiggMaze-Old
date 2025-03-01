// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// ASC
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", Replicated, meta = (AllowPrivateAccess = "true"))
	UASC_BiggMaze* AbilitySystemComponent;
	// Attribute Set
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", Replicated, meta = (AllowPrivateAccess = "true"))
	UAS_BM_CharBase* AttributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", Replicated, meta = (AllowPrivateAccess = "true"))
	UAS_Ammunition* AmmoAttributeSet;

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

	// Specifies what properties get replicated
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
