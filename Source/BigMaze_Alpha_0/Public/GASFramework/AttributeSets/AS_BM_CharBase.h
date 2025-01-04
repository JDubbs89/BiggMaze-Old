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

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_RegenHealth)
	FGameplayAttributeData RegenHealth; // Current character health per second that regenerates when initiated
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, RegenHealth)

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
	UFUNCTION() // Regen Health
	virtual void OnRep_RegenHealth(const FGameplayAttributeData& OldRegenHealth);

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
