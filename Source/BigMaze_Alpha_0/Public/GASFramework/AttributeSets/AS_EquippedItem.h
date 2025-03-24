// Copyright of Jade Eye Studios 2025


#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "AS_EquippedItem.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

    UCLASS()
    class BIGMAZE_ALPHA_0_API UAS_EquippedItem : public UAttributeSet // Data for equipped items that we need to change and update through GE's
    {
        GENERATED_BODY()

    public:
        UAS_EquippedItem();

        /** Pre Attribute Change Override to allow for clamping attribute values */
	    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	    /** Post Gameplay Effect Override to allow for post attribute change logic */
	    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
        

        /** Stack Attributes */
	    UPROPERTY(BlueprintReadOnly, Category = "Stack", ReplicatedUsing = OnRep_StackCount)
	    FGameplayAttributeData StackCount; // The amount of items in a stack
	    ATTRIBUTE_ACCESSORS(UAS_EquippedItem, StackCount)

        UPROPERTY(BlueprintReadOnly, Category = "Stack", ReplicatedUsing = OnRep_MaxStackCount)
	    FGameplayAttributeData MaxStackCount; // The max amount of items in a stack
	    ATTRIBUTE_ACCESSORS(UAS_EquippedItem, MaxStackCount)


        /** Mag Attributes */
	    UPROPERTY(BlueprintReadOnly, Category = "Magazine", ReplicatedUsing = OnRep_MagCount)
	    FGameplayAttributeData MagCount; // The amount of items in a mag
	    ATTRIBUTE_ACCESSORS(UAS_EquippedItem, MagCount)

        UPROPERTY(BlueprintReadOnly, Category = "Magazine", ReplicatedUsing = OnRep_MaxMagCount)
	    FGameplayAttributeData MaxMagCount; // The max amount of items in a mag
	    ATTRIBUTE_ACCESSORS(UAS_EquippedItem, MaxMagCount)
        
        UPROPERTY(BlueprintReadOnly, Category = "Magazine", ReplicatedUsing = OnRep_AmmoType)
        FGameplayAttributeData AmmoType; // The type of ammo the weapon uses, 1-6
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, AmmoType)

        UPROPERTY(BlueprintReadOnly, Category = "Magazine", ReplicatedUsing = OnRep_ReloadAmt)
        FGameplayAttributeData ReloadAmt; // The Amount of Ammo that Can Be Replenished in a single reload instance
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, ReloadAmt)

        /** Level Attributes */
        UPROPERTY(BlueprintReadOnly, Category = "Level", ReplicatedUsing = OnRep_Level)
        FGameplayAttributeData Level; // Level
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, Level)

        UPROPERTY(BlueprintReadOnly, Category = "Level", ReplicatedUsing = OnRep_MaxLevel)
        FGameplayAttributeData MaxLevel; // MaxLevel
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, MaxLevel)
        

        /** Range */
        UPROPERTY(BlueprintReadOnly, Category = "Range", ReplicatedUsing = OnRep_Range)
        FGameplayAttributeData Range; // Range
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, Range)


        /** Spread */
        UPROPERTY(BlueprintReadOnly, Category = "Spread", ReplicatedUsing = OnRep_Spread)
        FGameplayAttributeData Spread; // Spread
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, Spread)

        UPROPERTY(BlueprintReadOnly, Category = "Spread", ReplicatedUsing = OnRep_ScopedSpread)
        FGameplayAttributeData ScopedSpread; // ScopedSpread
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, ScopedSpread)


        /** Damage */
        UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_Damage)
        FGameplayAttributeData Damage; // Damage
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, Damage)

        UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_CritMultiplier)
        FGameplayAttributeData CritMultiplier; // CritMultiplier
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, CritMultiplier)


        /** Handling */
        UPROPERTY(BlueprintReadOnly, Category = "Handling", ReplicatedUsing = OnRep_Handling)
        FGameplayAttributeData Handling; // Handling
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, Handling)


        /** FireRate */
        UPROPERTY(BlueprintReadOnly, Category = "FireRate", ReplicatedUsing = OnRep_FireRate)
        FGameplayAttributeData FireRate; // FireRate
        ATTRIBUTE_ACCESSORS(UAS_EquippedItem, FireRate)
        
    protected:
    
        /** StackCount */
        UFUNCTION() // StackCount
	    virtual void OnRep_StackCount(const FGameplayAttributeData& OldStackCount);    
        UFUNCTION() // MaxStackCount
	    virtual void OnRep_MaxStackCount(const FGameplayAttributeData& OldMaxStackCount);

        /** Magazine */
        UFUNCTION() // MagCount
	    virtual void OnRep_MagCount(const FGameplayAttributeData& OldMagCount);
        UFUNCTION() // MaxMagCount
	    virtual void OnRep_MaxMagCount(const FGameplayAttributeData& OldMaxMagCount);
        UFUNCTION() // AmmoType
        virtual void OnRep_AmmoType(const FGameplayAttributeData& OldAmmoType);
        UFUNCTION() // ReloadAmt
        virtual void OnRep_ReloadAmt(const FGameplayAttributeData& OldReloadAmt);

        /** Level */
        UFUNCTION() // Level
	    virtual void OnRep_Level(const FGameplayAttributeData& OldLevel);
        UFUNCTION() // MaxLevel
	    virtual void OnRep_MaxLevel(const FGameplayAttributeData& OldMaxLevel);

        /** Range */
        UFUNCTION() // Range
	    virtual void OnRep_Range(const FGameplayAttributeData& OldRange);

        /** Spread */
        UFUNCTION() // Spread
	    virtual void OnRep_Spread(const FGameplayAttributeData& OldSpread);
        UFUNCTION() // ScopedSpread
	    virtual void OnRep_ScopedSpread(const FGameplayAttributeData& OldScopedSpread);

        /** Damage */
        UFUNCTION() // Damage
	    virtual void OnRep_Damage(const FGameplayAttributeData& OldDamage);
        UFUNCTION() // CritMultiplier
	    virtual void OnRep_CritMultiplier(const FGameplayAttributeData& OldCritMultiplier);

        /** Handling */
        UFUNCTION() // Handling
	    virtual void OnRep_Handling(const FGameplayAttributeData& OldHandling);

        /** FireRate */
        UFUNCTION() // FireRate
	    virtual void OnRep_FireRate(const FGameplayAttributeData& OldFireRate);
        
    };