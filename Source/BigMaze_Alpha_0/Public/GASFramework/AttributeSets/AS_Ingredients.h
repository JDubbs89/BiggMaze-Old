// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "AS_Ingredients.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

    UCLASS()
    class BIGMAZE_ALPHA_0_API UAS_Ingredients : public UAttributeSet // Attribute set for ingredient values
    {
    
        GENERATED_BODY()

    public:
        // Constructor
        UAS_Ingredients();

        // Parent Overrides

        // Pre Attribute Change
        virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

        // Post Gameplay Effect
        virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

        // Get Lifetime Replicated Props
        virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

        // Ingredient1 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 1", ReplicatedUsing = OnRep_CurrentIngredient1)
	    FGameplayAttributeData CurrentIngredient1; // Current ingredient 1 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient1)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 1", ReplicatedUsing = OnRep_MaxIngredient1)
	    FGameplayAttributeData MaxIngredient1; // Maximum ingredient 1 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient1)
        // Ingredient2 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 2", ReplicatedUsing = OnRep_CurrentIngredient2)
	    FGameplayAttributeData CurrentIngredient2; // Current ingredient 2 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient2)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 2", ReplicatedUsing = OnRep_MaxIngredient2)
	    FGameplayAttributeData MaxIngredient2; // Maximum ingredient 2 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient2)
        // Ingredient3 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 3", ReplicatedUsing = OnRep_CurrentIngredient3)
	    FGameplayAttributeData CurrentIngredient3; // Current ingredient 3 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient3)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 3", ReplicatedUsing = OnRep_MaxIngredient3)
	    FGameplayAttributeData MaxIngredient3; // Maximum ingredient 3 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient3)
        // Ingredient4 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 4", ReplicatedUsing = OnRep_CurrentIngredient4)
	    FGameplayAttributeData CurrentIngredient4; // Current ingredient 4 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient4)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 4", ReplicatedUsing = OnRep_MaxIngredient4)
	    FGameplayAttributeData MaxIngredient4; // Maximum ingredient 4 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient4)
        // Ingredient5 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 5", ReplicatedUsing = OnRep_CurrentIngredient5)
	    FGameplayAttributeData CurrentIngredient5; // Current ingredient 5 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient5)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 5", ReplicatedUsing = OnRep_MaxIngredient5)
	    FGameplayAttributeData MaxIngredient5; // Maximum ingredient 5 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient5)
        // Ingredient6 ------------------------------------------------------------------------------------
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 6", ReplicatedUsing = OnRep_CurrentIngredient6)
	    FGameplayAttributeData CurrentIngredient6; // Current ingredient 6 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, CurrentIngredient6)
        
        UPROPERTY(BlueprintReadOnly, Category = "Ingredient 6", ReplicatedUsing = OnRep_MaxIngredient6)
	    FGameplayAttributeData MaxIngredient6; // Maximum ingredient 6 value of an ASC
	    ATTRIBUTE_ACCESSORS(UAS_Ingredients, MaxIngredient6)

    protected:
        // RepNotifies

        // Ingredient 1
        UFUNCTION() // Current Ingredient 1
        virtual void OnRep_CurrentIngredient1(const FGameplayAttributeData& OldCurrentIngredient1);
        UFUNCTION() // Max Ingredient 1
        virtual void OnRep_MaxIngredient1(const FGameplayAttributeData& OldMaxIngredient1);

        // Ingredient 2
        UFUNCTION() // Current Ingredient 2
        virtual void OnRep_CurrentIngredient2(const FGameplayAttributeData& OldCurrentIngredient2);
        UFUNCTION() // Max Ingredient 2
        virtual void OnRep_MaxIngredient2(const FGameplayAttributeData& OldMaxIngredient2);

        // Ingredient 3
        UFUNCTION() // Current Ingredient 3
        virtual void OnRep_CurrentIngredient3(const FGameplayAttributeData& OldCurrentIngredient3);
        UFUNCTION() // Max Ingredient 3
        virtual void OnRep_MaxIngredient3(const FGameplayAttributeData& OldMaxIngredient3);

        // Ingredient 4
        UFUNCTION() // Current Ingredient 4
        virtual void OnRep_CurrentIngredient4(const FGameplayAttributeData& OldCurrentIngredient4);
        UFUNCTION() // Max Ingredient 4
        virtual void OnRep_MaxIngredient4(const FGameplayAttributeData& OldMaxIngredient4);

        // Ingredient 5
        UFUNCTION() // Current Ingredient 5
        virtual void OnRep_CurrentIngredient5(const FGameplayAttributeData& OldCurrentIngredient5);
        UFUNCTION() // Max Ingredient 5
        virtual void OnRep_MaxIngredient5(const FGameplayAttributeData& OldMaxIngredient5);

        // Ingredient 6
        UFUNCTION() // Current Ingredient 6
        virtual void OnRep_CurrentIngredient6(const FGameplayAttributeData& OldCurrentIngredient6);
        UFUNCTION() // Max Ingredient 6
        virtual void OnRep_MaxIngredient6(const FGameplayAttributeData& OldMaxIngredient6);

    };