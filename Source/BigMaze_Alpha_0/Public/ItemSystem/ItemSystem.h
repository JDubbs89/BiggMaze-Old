
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DataAsset.h"
#include "ItemEnums.h"
#include "ItemSystem.generated.h"

// Forward declaration of AItemFunctionalityBase for struct dependencies.
class UItemDefault;

// Struct containing attribute data. Used for custom item data.

USTRUCT(BlueprintType)
struct FItemAttribute
{
    GENERATED_BODY()

public:
    // Unique Identifier for the Attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    int Id;

    // Name of the Attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    FString Name;

    // Description of the Attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    FString Description;

    // Current Value of the Attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    FString Value;

    // Maximum Value of the Attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    FString MaxValue;

    // The type of variable the Attribute can be parsed into
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    EAttributeReturnType Type;

    // Determines whether the Attribute is Visible
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    bool Visible;

    // Default Constructor
    FItemAttribute()
        : Id(0), Name(TEXT("")), Description(TEXT("")), Value(TEXT(""))
        , MaxValue(TEXT("")), Type(EAttributeReturnType::Int), Visible(false)
    {
    }
};

// FItem - A structure to represent an item with various properties and attributes.

USTRUCT(BlueprintType)
struct FItem
{
    GENERATED_BODY()

public:
    // Unique Identifier for the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int Id;

    // Name of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString Name;

    // Description of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString Description;

    // Current item level
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int Level;

    // Skeletal mesh soft object reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

    // Icon (Texture2D) soft object reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TSoftObjectPtr<UTexture2D> Icon;

    // Class enum
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    EItemClass Class;

    // The type of exclusive slot this item can slot into
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    EItemSlotCategory SlotType;

    // Value of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float Value;

    // Current Stack Size of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int Stack;

    // Maximum Stack Size Allowed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int MaxStack;

    // The weight of one item in this stack
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float Weight;

    // The amount of stacks this item counts for
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int StackWeight;

    // List of Attributes for the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TArray<FItemAttribute> Attributes;

    // Part data assets
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TArray<UItemDefault*> Parts;

    // Array of gameplay ability classes, one for each major item function
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TArray<TSubclassOf<UGameplayAbility>> GameplayAbilities; 

    // Default Constructor
    FItem()
        : Id(0), Name(TEXT("null")), Description(TEXT("null")), Level(1)
        , SkeletalMesh(nullptr), Icon(nullptr), Class(EItemClass::Weapon)
        , SlotType(EItemSlotCategory::Default), Value(0.0f), Stack(1)
        , MaxStack(1), Weight(1.0), StackWeight(1)
    {
    }
};

UCLASS(BlueprintType, Blueprintable)
class UItemDefault : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:

    // Default Item Variable
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FItem ItemDefault;

};