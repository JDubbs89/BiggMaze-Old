// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "AS_Ammunition.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UAS_Ammunition : public UAttributeSet
{
	GENERATED_BODY()

public:

	// Initialization function
	UAS_Ammunition();

	// Parent Class Overrides

	/** Pre Attribute Change Override to allow for clamping attribute values */
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	/** Post Gameplay Effect Override to allow for post attribute change logic */
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FGameplayAttribute GetAmmoAttribute(float AmmoType);

	// Defining Gameplay Attributes (All are replicated besides cost, which is a meta attribute)

	/** Cost */
	UPROPERTY(BlueprintReadOnly, Category = "Cost")
	FGameplayAttributeData Cost;
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, Cost)

	/** Pistol Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Pistol", ReplicatedUsing = OnRep_CurrentPistolAmmo)
	FGameplayAttributeData CurrentPistolAmmo; // Current Pistol Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentPistolAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Pistol", ReplicatedUsing = OnRep_MaxPistolAmmo)
	FGameplayAttributeData MaxPistolAmmo; // Max Pistol Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxPistolAmmo)

	/** Rifle Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Rifle", ReplicatedUsing = OnRep_CurrentRifleAmmo)
	FGameplayAttributeData CurrentRifleAmmo; // Current Rifle Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentRifleAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Rifle", ReplicatedUsing = OnRep_MaxRifleAmmo)
	FGameplayAttributeData MaxRifleAmmo; // Max Rifle Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxRifleAmmo)

	/** Sniper Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Sniper", ReplicatedUsing = OnRep_CurrentSniperAmmo)
	FGameplayAttributeData CurrentSniperAmmo; // Current Sniper Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentSniperAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Sniper", ReplicatedUsing = OnRep_MaxSniperAmmo)
	FGameplayAttributeData MaxSniperAmmo; // Max Sniper Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxSniperAmmo)

	/** Shotgun Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Shotgun", ReplicatedUsing = OnRep_CurrentShotgunAmmo)
	FGameplayAttributeData CurrentShotgunAmmo; // Current Shotgun Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentShotgunAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Shotgun", ReplicatedUsing = OnRep_MaxShotgunAmmo)
	FGameplayAttributeData MaxShotgunAmmo; // Max Shotgun Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxShotgunAmmo)

	/** Rocket Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Rocket", ReplicatedUsing = OnRep_CurrentRocketAmmo)
	FGameplayAttributeData CurrentRocketAmmo; // Current Rocket Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentRocketAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Rocket", ReplicatedUsing = OnRep_MaxRocketAmmo)
	FGameplayAttributeData MaxRocketAmmo; // Max Rocket Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxRocketAmmo)

	/** Universal Ammo */
	UPROPERTY(BlueprintReadOnly, Category = "Universal", ReplicatedUsing = OnRep_CurrentUniversalAmmo)
	FGameplayAttributeData CurrentUniversalAmmo; // Current Universal Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, CurrentUniversalAmmo)

	UPROPERTY(BlueprintReadOnly, Category = "Universal", ReplicatedUsing = OnRep_MaxUniversalAmmo)
	FGameplayAttributeData MaxUniversalAmmo; // Max Universal Ammo
	ATTRIBUTE_ACCESSORS(UAS_Ammunition, MaxUniversalAmmo)

protected:

	/** Pistol Ammo Attributes */
	UFUNCTION() // Current PistolAmmo
	virtual void OnRep_CurrentPistolAmmo(const FGameplayAttributeData& OldCurrentPistolAmmo);
	UFUNCTION() // Max PistolAmmo
	virtual void OnRep_MaxPistolAmmo(const FGameplayAttributeData& OldMaxPistolAmmo);

	/** Rifle Ammo Attributes */
	UFUNCTION() // Current RifleAmmo
	virtual void OnRep_CurrentRifleAmmo(const FGameplayAttributeData& OldCurrentRifleAmmo);
	UFUNCTION() // Max RifleAmmo
	virtual void OnRep_MaxRifleAmmo(const FGameplayAttributeData& OldMaxRifleAmmo);

	/** Sniper Ammo Attributes */
	UFUNCTION() // Current SniperAmmo
	virtual void OnRep_CurrentSniperAmmo(const FGameplayAttributeData& OldCurrentSniperAmmo);
	UFUNCTION() // Max SniperAmmo
	virtual void OnRep_MaxSniperAmmo(const FGameplayAttributeData& OldMaxSniperAmmo);

	/** Shotgun Ammo Attributes */
	UFUNCTION() // Current ShotgunAmmo
	virtual void OnRep_CurrentShotgunAmmo(const FGameplayAttributeData& OldCurrentShotgunAmmo);
	UFUNCTION() // Max ShotgunAmmo
	virtual void OnRep_MaxShotgunAmmo(const FGameplayAttributeData& OldMaxShotgunAmmo);

	/** Rocket Ammo Attributes */
	UFUNCTION() // Current RocketAmmo
	virtual void OnRep_CurrentRocketAmmo(const FGameplayAttributeData& OldCurrentRocketAmmo);
	UFUNCTION() // Max RocketAmmo
	virtual void OnRep_MaxRocketAmmo(const FGameplayAttributeData& OldMaxRocketAmmo);

	/** Universal Ammo Attributes */
	UFUNCTION() // Current UniversalAmmo
	virtual void OnRep_CurrentUniversalAmmo(const FGameplayAttributeData& OldCurrentUniversalAmmo);
	UFUNCTION() // Max UniversalAmmo
	virtual void OnRep_MaxUniversalAmmo(const FGameplayAttributeData& OldMaxUniversalAmmo);
};
