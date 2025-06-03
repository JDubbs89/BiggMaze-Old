// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/AbilitySystem/AbilitySystem.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystem() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityRecipe();
BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FIngredientData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin ScriptStruct FIngredientData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IngredientData;
class UScriptStruct* FIngredientData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IngredientData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IngredientData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIngredientData, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("IngredientData"));
	}
	return Z_Registration_Info_UScriptStruct_IngredientData.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<FIngredientData>()
{
	return FIngredientData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIngredientData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IngredientName_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeModifiers_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingStyleTag_MetaData[] = {
		{ "Category", "IngredientData" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectTypeTag_MetaData[] = {
		{ "Category", "IngredientData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// e.g., Cast.Instant\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "e.g., Cast.Instant" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IngredientName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeModifiers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeModifiers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastingStyleTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTypeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIngredientData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_IngredientName = { "IngredientName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, IngredientName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IngredientName_MetaData), NewProp_IngredientName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers_ValueProp = { "AttributeModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers_Key_KeyProp = { "AttributeModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers = { "AttributeModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, AttributeModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeModifiers_MetaData), NewProp_AttributeModifiers_MetaData) }; // 2792951819
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_CastingStyleTag = { "CastingStyleTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, CastingStyleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingStyleTag_MetaData), NewProp_CastingStyleTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_EffectTypeTag = { "EffectTypeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIngredientData, EffectTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectTypeTag_MetaData), NewProp_EffectTypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIngredientData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_IngredientName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_AttributeModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_CastingStyleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIngredientData_Statics::NewProp_EffectTypeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIngredientData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIngredientData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	&NewStructOps,
	"IngredientData",
	Z_Construct_UScriptStruct_FIngredientData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIngredientData_Statics::PropPointers),
	sizeof(FIngredientData),
	alignof(FIngredientData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIngredientData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIngredientData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIngredientData()
{
	if (!Z_Registration_Info_UScriptStruct_IngredientData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IngredientData.InnerSingleton, Z_Construct_UScriptStruct_FIngredientData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IngredientData.InnerSingleton;
}
// End ScriptStruct FIngredientData

// Begin ScriptStruct FAbilityRecipe
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityRecipe;
class UScriptStruct* FAbilityRecipe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityRecipe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityRecipe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityRecipe, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("AbilityRecipe"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityRecipe.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<FAbilityRecipe>()
{
	return FAbilityRecipe::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ingredients_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingType_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalAttributeModifiers_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedEffect_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshID_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconID_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTag_MetaData[] = {
		{ "Category", "AbilityRecipe" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ingredients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ingredients;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalAttributeModifiers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalAttributeModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FinalAttributeModifiers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CombinedEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeshID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityRecipe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_Ingredients_Inner = { "Ingredients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIngredientData, METADATA_PARAMS(0, nullptr) }; // 530380593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_Ingredients = { "Ingredients", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, Ingredients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ingredients_MetaData), NewProp_Ingredients_MetaData) }; // 530380593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_CastingType = { "CastingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, CastingType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingType_MetaData), NewProp_CastingType_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, EffectType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectType_MetaData), NewProp_EffectType_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers_ValueProp = { "FinalAttributeModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers_Key_KeyProp = { "FinalAttributeModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers = { "FinalAttributeModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, FinalAttributeModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalAttributeModifiers_MetaData), NewProp_FinalAttributeModifiers_MetaData) }; // 2792951819
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_CombinedEffect = { "CombinedEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, CombinedEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedEffect_MetaData), NewProp_CombinedEffect_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_MeshID = { "MeshID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, MeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshID_MetaData), NewProp_MeshID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_IconID = { "IconID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, IconID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconID_MetaData), NewProp_IconID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_AnimationTag = { "AnimationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityRecipe, AnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTag_MetaData), NewProp_AnimationTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_Ingredients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_Ingredients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_CastingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_EffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_FinalAttributeModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_CombinedEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_MeshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_IconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewProp_AnimationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityRecipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityRecipe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	&NewStructOps,
	"AbilityRecipe",
	Z_Construct_UScriptStruct_FAbilityRecipe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityRecipe_Statics::PropPointers),
	sizeof(FAbilityRecipe),
	alignof(FAbilityRecipe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityRecipe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityRecipe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityRecipe()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityRecipe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityRecipe.InnerSingleton, Z_Construct_UScriptStruct_FAbilityRecipe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityRecipe.InnerSingleton;
}
// End ScriptStruct FAbilityRecipe

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AbilitySystem_AbilitySystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIngredientData::StaticStruct, Z_Construct_UScriptStruct_FIngredientData_Statics::NewStructOps, TEXT("IngredientData"), &Z_Registration_Info_UScriptStruct_IngredientData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIngredientData), 530380593U) },
		{ FAbilityRecipe::StaticStruct, Z_Construct_UScriptStruct_FAbilityRecipe_Statics::NewStructOps, TEXT("AbilityRecipe"), &Z_Registration_Info_UScriptStruct_AbilityRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityRecipe), 948039877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AbilitySystem_AbilitySystem_h_2915149441(TEXT("/Script/BigMaze_Alpha_0"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AbilitySystem_AbilitySystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AbilitySystem_AbilitySystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
