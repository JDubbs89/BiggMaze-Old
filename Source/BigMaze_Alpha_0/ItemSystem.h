
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DataAsset.h"
#include "ItemSystem.generated.h"

/**
 * Enum to represent different item activation types.
 */
UENUM(BlueprintType)
enum class EItemActivationType : uint8
{
    Press UMETA(DisplayName = "Press"),
    Hold UMETA(DisplayName = "Hold"),
    Release UMETA(DisplayName = "Release")
};

/**
 * Forward declaration of AItemFunctionalityBase for struct dependencies.
 */
class AItemFunctionalityBase;

/**
 * FItemAttribute - A structure to hold attributes for an item.
 */
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

    // Determines whether the Attribute is Visible
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Attribute")
    bool Visible;

    // Default Constructor
    FItemAttribute()
        : Id(0), Name(TEXT("")), Description(TEXT("")), Value(TEXT("")), MaxValue(TEXT("")), Visible(false)
    {
    }
};

/**
 * FItem - A structure to represent an item with various properties and attributes.
 */
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

    // Value of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float Value;

    // Current Stack Size of the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int Stack;

    // Maximum Stack Size Allowed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int MaxStack;

    // List of Attributes for the Item
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TArray<FItemAttribute> Attributes;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TArray<TSoftObjectPtr<AItemFunctionalityBase>> Parts;

    // Associated Functionality Class (AItemFunctionalityBase)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    TSoftObjectPtr<AItemFunctionalityBase> Class;

    // Default Constructor
    FItem()
        : Id(0), Name(TEXT("")), Description(TEXT("")), Value(0.0f), Stack(0), MaxStack(1), Class(nullptr)
    {
    }
};

/**
 * Base class for item functionality within a UDataAsset.
 */
UCLASS(BlueprintType, Blueprintable)
class AItemFunctionalityBase : public AActor
{    
    GENERATED_BODY()

public:
    /** Variable to set the icon texture of an item to be displayed in widgets. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Defaults")
    UTexture2D *Icon;

    /** Variable to set the skeletal mesh of an item for in world display. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Defaults")
    USkeletalMesh *SkeletalMesh;

    /** Variable to give an item default values to pull from. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Defaults")
    FItem ItemDefault;

    /** Function called for the primary use of the item. */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item Functionality")
    void PrimaryUse(const FItem &Item, EItemActivationType ActivationType);

    /** Function called for the secondary use of the item. */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item Functionality")
    void SecondaryUse(const FItem &Item, EItemActivationType ActivationType);

    /** Function called for the tertiary use of the item. */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item Functionality")
    void TertiaryUse(const FItem &Item, EItemActivationType ActivationType);

    /** Function called for the quaternary use of the item. */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item Functionality")
    void QuaternaryUse(const FItem &Item, EItemActivationType ActivationType);

    /** Function called when the item is switched to or from */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item Functionality")
    void OnSwapItem(const FItem &Item, bool SwapTo);

    // Constructor
    AItemFunctionalityBase()
        : Icon(nullptr), SkeletalMesh(nullptr)
    {
    }
};