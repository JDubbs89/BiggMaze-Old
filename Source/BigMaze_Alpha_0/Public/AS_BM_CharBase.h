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
class BIGMAZE_ALPHA_0_API UAS_BM_CharBase : public UAttributeSet
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
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, CurrentHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, MaxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_RegenHealth)
	FGameplayAttributeData RegenHealth;
	ATTRIBUTE_ACCESSORS(UAS_BM_CharBase, RegenHealth)

protected:
	// RepNotifies

	/** Health Attributes */
	UFUNCTION() // Current Health
	virtual void OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth);
	UFUNCTION() // Max Health
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	UFUNCTION() // Regen Health
	virtual void OnRep_RegenHealth(const FGameplayAttributeData& OldRegenHealth);

};
