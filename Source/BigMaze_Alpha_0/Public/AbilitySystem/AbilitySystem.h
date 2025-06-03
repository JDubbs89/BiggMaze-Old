#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DataAsset.h"
#include "AbilitySystem.generated.h"

USTRUCT(BlueprintType)
struct FIngredientData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName IngredientName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer GameplayTags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FGameplayAttribute, float> AttributeModifiers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UGameplayEffect> EffectClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag CastingStyleTag; // e.g., Cast.Instant

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag EffectTypeTag;   // e.g., Effect.AOE, Effect.Spawn.GrenadeActor
};

USTRUCT(BlueprintType)
struct FAbilityRecipe
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FIngredientData> Ingredients;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag CastingType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag EffectType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FGameplayAttribute, float> FinalAttributeModifiers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UGameplayEffect> CombinedEffect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MeshID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName IconID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag AnimationTag;
};