// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "AS_BM_CharBase.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UAS_BM_CharBase : public UAttributeSet // Basic attribute set for every bigg maze character. Will be subclassed to include more attributes for different characters.
{
	GENERATED_BODY()
	
public:
	// Constructor
	UAS_BM_CharBase();

	// Parent Class Overrides

	/** Pre Attribute Change Override to allow for clamping attribute values */
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	/** Post Gameplay Effect Override to allow for post attribute change logic */
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Damage */
	// Damage is a meta attribute used by the damage execution to calculate final damage
	// This value only exists on the server
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, Damage)

	/** Health Attributes */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_CurrentHealth)
	FGameplayAttributeData CurrentHealth; // Current base health of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth; // Current max health of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxHealth)
	
	/** Additional Health Volume Attributes */
	// Includes 2 Shield Volumes and One Extra Health Volume
	/** Overflowing Occurs when damage is applied to the first attribute in the order:
		Shield1, Shield, Health1, Health. Default overflow is 100%, where 100% of damage
		beyond what the attribute absorbs propogates to the next component. */

	/** Health1 Attributes */
	UPROPERTY(BlueprintReadOnly, Category = "Health1", ReplicatedUsing = OnRep_CurrentHealth1)
	FGameplayAttributeData CurrentHealth1; // Current base health1 of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentHealth1)

	UPROPERTY(BlueprintReadOnly, Category = "Health1", ReplicatedUsing = OnRep_MaxHealth1)
	FGameplayAttributeData MaxHealth1; // Current max health1 of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxHealth1)
	
	/** Health Overflow Percentage */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HealthOverflowPercent)
	FGameplayAttributeData HealthOverflowPercent; // Current base Health Overflow % of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, HealthOverflowPercent)
	
	/** Shield Attributes */
	UPROPERTY(BlueprintReadOnly, Category = "Shield", ReplicatedUsing = OnRep_CurrentShield)
	FGameplayAttributeData CurrentShield; // Current base Shield of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentShield)
	
	UPROPERTY(BlueprintReadOnly, Category = "Shield", ReplicatedUsing = OnRep_MaxShield)
	FGameplayAttributeData MaxShield; // Current max Shield of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxShield)
	
	/** Shield 1 Attributes */
	UPROPERTY(BlueprintReadOnly, Category = "Shield1", ReplicatedUsing = OnRep_CurrentShield1)
	FGameplayAttributeData CurrentShield1; // Current base Shield1 of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentShield1)
	
	UPROPERTY(BlueprintReadOnly, Category = "Shield1", ReplicatedUsing = OnRep_MaxShield1)
	FGameplayAttributeData MaxShield1; // Current max Shield1 of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxShield1)
	
	/** Shield Overflow Percentage Attributes */

	UPROPERTY(BlueprintReadOnly, Category = "Shield", ReplicatedUsing = OnRep_ShieldOverflowPercent)
	FGameplayAttributeData ShieldOverflowPercent; // Current base Shield Overflow % of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, ShieldOverflowPercent)
	
	UPROPERTY(BlueprintReadOnly, Category = "Shield1", ReplicatedUsing = OnRep_Shield1OverflowPercent)
	FGameplayAttributeData Shield1OverflowPercent; // Current base Shield1 overflow % of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, Shield1OverflowPercent)
	
	/** Regen Attributes */

	// Regen Health
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_RegenHealth)
	FGameplayAttributeData RegenHealth; // Current character health per second that regenerates when initiated
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, RegenHealth)

	// Regen Shield
	UPROPERTY(BlueprintReadOnly, Category = "Shield", ReplicatedUsing = OnRep_RegenShield)
	FGameplayAttributeData RegenShield; // Current character Shield per second that regenerates when initiated
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, RegenShield)

	/** Stamina Attributes */

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_CurrentStamina)
	FGameplayAttributeData CurrentStamina; // Current base Stamina of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentStamina)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina; // Current max Stamina of a character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxStamina)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_RegenStamina)
	FGameplayAttributeData RegenStamina; // Current character Stamina per second that regenerates when initiated
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, RegenStamina)

	/** Leveling Attributes */
	
	UPROPERTY(BlueprintReadOnly, Category = "Leveling", ReplicatedUsing = OnRep_CurrentLevel)
	FGameplayAttributeData CurrentLevel; // Current character level
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentLevel)

	UPROPERTY(BlueprintReadOnly, Category = "Leveling", ReplicatedUsing = OnRep_XPRequired)
	FGameplayAttributeData XPRequired; // XP required to level up
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, XPRequired)

	UPROPERTY(BlueprintReadOnly, Category = "Leveling", ReplicatedUsing = OnRep_CurrentXP)
	FGameplayAttributeData CurrentXP; // Current XP owned by the character
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentXP)


protected:
	// RepNotifies

	/** Health Attributes */
	UFUNCTION() // Current Health
	virtual void OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth);
	UFUNCTION() // Max Health
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	UFUNCTION() // Current Health1
	virtual void OnRep_CurrentHealth1(const FGameplayAttributeData& OldCurrentHealth1);
	UFUNCTION() // Max Health1
	virtual void OnRep_MaxHealth1(const FGameplayAttributeData& OldMaxHealth1);

	/** Shield Attributes */
	UFUNCTION() // Current Shield
	virtual void OnRep_CurrentShield(const FGameplayAttributeData& OldCurrentShield);
	UFUNCTION() // Max Shield
	virtual void OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield);
	UFUNCTION() // Current Health1
	virtual void OnRep_CurrentShield1(const FGameplayAttributeData& OldCurrentShield1);
	UFUNCTION() // Max Shield1
	virtual void OnRep_MaxShield1(const FGameplayAttributeData& OldMaxShield1);

	/** Overflow Attributes */
	UFUNCTION()
	virtual void OnRep_HealthOverflowPercent(const FGameplayAttributeData& OldHealthOverflowPercent);
	UFUNCTION()
	virtual void OnRep_ShieldOverflowPercent(const FGameplayAttributeData& OldShieldOverflowPercent);
	UFUNCTION()
	virtual void OnRep_Shield1OverflowPercent(const FGameplayAttributeData& OldShield1OverflowPercent);

	/** Regen Attributes */
	UFUNCTION() // Regen Health
	virtual void OnRep_RegenHealth(const FGameplayAttributeData& OldRegenHealth);
	UFUNCTION() // Regen Shield
	virtual void OnRep_RegenShield(const FGameplayAttributeData& OldRegenShield);

	/** Stamina Attributes */
	UFUNCTION() // Current Stamina
	virtual void OnRep_CurrentStamina(const FGameplayAttributeData& OldCurrentStamina);
	UFUNCTION() // Max Stamina
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);
	UFUNCTION() // Regen Stamina
	virtual void OnRep_RegenStamina(const FGameplayAttributeData& OldRegenStamina);

	/** Leveling Attributes */
	UFUNCTION() // Current Level
	virtual void OnRep_CurrentLevel(const FGameplayAttributeData& OldCurrentLevel);
	UFUNCTION() // XP required to level up
	virtual void OnRep_XPRequired(const FGameplayAttributeData& OldXPRequired);
	UFUNCTION() // Current XP owned by the character
	virtual void OnRep_CurrentXP(const FGameplayAttributeData& OldCurrentXP);

};
