// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/AI/BiggMazeAICharacter.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazeAICharacter() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAICharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAICharacter_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeCharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ammunition_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ingredients_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazeAICharacter Function OnCurrentHealthChanged
struct BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentHealthChanged = FName(TEXT("OnCurrentHealthChanged"));
void ABiggMazeAICharacter::OnCurrentHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Attributes */// CurrentHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attributes // CurrentHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentHealthChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient1Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient1Changed = FName(TEXT("OnCurrentIngredient1Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient1Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient1Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient1 Attributes */// Current Ingredient1\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient1 Attributes // Current Ingredient1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient1Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient1Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient1Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient2Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient2Changed = FName(TEXT("OnCurrentIngredient2Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient2Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient2Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient2 Attributes */// Current Ingredient2\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient2 Attributes // Current Ingredient2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient2Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient2Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient2Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient3Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient3Changed = FName(TEXT("OnCurrentIngredient3Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient3Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient3Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient3 Attributes */// Current Ingredient3\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient3 Attributes // Current Ingredient3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient3Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient3Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient3Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient4Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient4Changed = FName(TEXT("OnCurrentIngredient4Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient4Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient4Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient4 Attributes */// Current Ingredient4\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient4 Attributes // Current Ingredient4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient4Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient4Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient4Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient5Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient5Changed = FName(TEXT("OnCurrentIngredient5Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient5Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient5Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient5 Attributes */// Current Ingredient5\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient5 Attributes // Current Ingredient5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient5Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient5Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient5Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentIngredient6Changed
struct BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentIngredient6Changed = FName(TEXT("OnCurrentIngredient6Changed"));
void ABiggMazeAICharacter::OnCurrentIngredient6Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentIngredient6Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ingredient6 Attributes */// Current Ingredient6\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient6 Attributes // Current Ingredient6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentIngredient6Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentIngredient6Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentIngredient6Changed

// Begin Class ABiggMazeAICharacter Function OnCurrentLevelChanged
struct BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentLevelChanged = FName(TEXT("OnCurrentLevelChanged"));
void ABiggMazeAICharacter::OnCurrentLevelChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentLevelChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leveling Attributes */// CurrentLevel\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leveling Attributes // CurrentLevel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentLevelChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentLevelChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentPistolAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged = FName(TEXT("OnCurrentPistolAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pistol Ammo Attributes */// Current Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pistol Ammo Attributes // Current Pistol Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentPistolAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentRifleAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged = FName(TEXT("OnCurrentRifleAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rifle Ammo Attributes */// Current Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rifle Ammo Attributes // Current Rifle Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentRifleAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentRocketAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged = FName(TEXT("OnCurrentRocketAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rocket Ammo Attributes */// Current Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rocket Ammo Attributes // Current Rocket Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentRocketAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentShotgunAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged = FName(TEXT("OnCurrentShotgunAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shotgun Ammo Attributes */// Current Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shotgun Ammo Attributes // Current Shotgun Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentShotgunAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentSniperAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged = FName(TEXT("OnCurrentSniperAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sniper Ammo Attributes */// Current Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sniper Ammo Attributes // Current Sniper Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentSniperAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentStaminaChanged
struct BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentStaminaChanged = FName(TEXT("OnCurrentStaminaChanged"));
void ABiggMazeAICharacter::OnCurrentStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stamina Attributes */// CurrentStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina Attributes // CurrentStamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentStaminaChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentUniversalAmmoChanged
struct BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged = FName(TEXT("OnCurrentUniversalAmmoChanged"));
void ABiggMazeAICharacter::OnCurrentUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal Ammo Attributes */// Current Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal Ammo Attributes // Current Universal Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentUniversalAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnCurrentXPChanged
struct BiggMazeAICharacter_eventOnCurrentXPChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnCurrentXPChanged = FName(TEXT("OnCurrentXPChanged"));
void ABiggMazeAICharacter::OnCurrentXPChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnCurrentXPChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnCurrentXPChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CurrentXP\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CurrentXP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentXPChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnCurrentXPChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnCurrentXPChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnCurrentXPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnCurrentXPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnCurrentXPChanged

// Begin Class ABiggMazeAICharacter Function OnMaxHealthChanged
struct BiggMazeAICharacter_eventOnMaxHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxHealthChanged = FName(TEXT("OnMaxHealthChanged"));
void ABiggMazeAICharacter::OnMaxHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxHealthChanged

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient1Changed
struct BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient1Changed = FName(TEXT("OnMaxIngredient1Changed"));
void ABiggMazeAICharacter::OnMaxIngredient1Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient1Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient1\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient1Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient1Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient1Changed

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient2Changed
struct BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient2Changed = FName(TEXT("OnMaxIngredient2Changed"));
void ABiggMazeAICharacter::OnMaxIngredient2Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient2Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient2\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient2Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient2Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient2Changed

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient3Changed
struct BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient3Changed = FName(TEXT("OnMaxIngredient3Changed"));
void ABiggMazeAICharacter::OnMaxIngredient3Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient3Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient3\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient3Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient3Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient3Changed

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient4Changed
struct BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient4Changed = FName(TEXT("OnMaxIngredient4Changed"));
void ABiggMazeAICharacter::OnMaxIngredient4Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient4Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient4\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient4Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient4Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient4Changed

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient5Changed
struct BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient5Changed = FName(TEXT("OnMaxIngredient5Changed"));
void ABiggMazeAICharacter::OnMaxIngredient5Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient5Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient5\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient5Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient5Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient5Changed

// Begin Class ABiggMazeAICharacter Function OnMaxIngredient6Changed
struct BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxIngredient6Changed = FName(TEXT("OnMaxIngredient6Changed"));
void ABiggMazeAICharacter::OnMaxIngredient6Changed(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxIngredient6Changed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ingredients" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient6\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxIngredient6Changed", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxIngredient6Changed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxIngredient6Changed

// Begin Class ABiggMazeAICharacter Function OnMaxPistolAmmoChanged
struct BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxPistolAmmoChanged = FName(TEXT("OnMaxPistolAmmoChanged"));
void ABiggMazeAICharacter::OnMaxPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Pistol Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxPistolAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnMaxRifleAmmoChanged
struct BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxRifleAmmoChanged = FName(TEXT("OnMaxRifleAmmoChanged"));
void ABiggMazeAICharacter::OnMaxRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Rifle Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxRifleAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnMaxRocketAmmoChanged
struct BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxRocketAmmoChanged = FName(TEXT("OnMaxRocketAmmoChanged"));
void ABiggMazeAICharacter::OnMaxRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Rocket Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxRocketAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnMaxShotgunAmmoChanged
struct BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged = FName(TEXT("OnMaxShotgunAmmoChanged"));
void ABiggMazeAICharacter::OnMaxShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Shotgun Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxShotgunAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnMaxSniperAmmoChanged
struct BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxSniperAmmoChanged = FName(TEXT("OnMaxSniperAmmoChanged"));
void ABiggMazeAICharacter::OnMaxSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Sniper Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxSniperAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnMaxStaminaChanged
struct BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxStaminaChanged = FName(TEXT("OnMaxStaminaChanged"));
void ABiggMazeAICharacter::OnMaxStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxStamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxStaminaChanged

// Begin Class ABiggMazeAICharacter Function OnMaxUniversalAmmoChanged
struct BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged = FName(TEXT("OnMaxUniversalAmmoChanged"));
void ABiggMazeAICharacter::OnMaxUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Universal Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnMaxUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnMaxUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnMaxUniversalAmmoChanged

// Begin Class ABiggMazeAICharacter Function OnRegenHealthChanged
struct BiggMazeAICharacter_eventOnRegenHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnRegenHealthChanged = FName(TEXT("OnRegenHealthChanged"));
void ABiggMazeAICharacter::OnRegenHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnRegenHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnRegenHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RegenHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnRegenHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnRegenHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnRegenHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnRegenHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnRegenHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnRegenHealthChanged

// Begin Class ABiggMazeAICharacter Function OnRegenStaminaChanged
struct BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnRegenStaminaChanged = FName(TEXT("OnRegenStaminaChanged"));
void ABiggMazeAICharacter::OnRegenStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnRegenStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RegenStamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnRegenStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnRegenStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnRegenStaminaChanged

// Begin Class ABiggMazeAICharacter Function OnXPRequiredChanged
struct BiggMazeAICharacter_eventOnXPRequiredChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazeAICharacter_OnXPRequiredChanged = FName(TEXT("OnXPRequiredChanged"));
void ABiggMazeAICharacter::OnXPRequiredChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazeAICharacter_eventOnXPRequiredChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazeAICharacter_OnXPRequiredChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XPRequired\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XPRequired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnXPRequiredChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazeAICharacter_eventOnXPRequiredChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeAICharacter, nullptr, "OnXPRequiredChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::PropPointers), sizeof(BiggMazeAICharacter_eventOnXPRequiredChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazeAICharacter_eventOnXPRequiredChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazeAICharacter Function OnXPRequiredChanged

// Begin Class ABiggMazeAICharacter
void ABiggMazeAICharacter::StaticRegisterNativesABiggMazeAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazeAICharacter);
UClass* Z_Construct_UClass_ABiggMazeAICharacter_NoRegister()
{
	return ABiggMazeAICharacter::StaticClass();
}
struct Z_Construct_UClass_ABiggMazeAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AI/BiggMazeAICharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IngredientAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IngredientAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentHealthChanged, "OnCurrentHealthChanged" }, // 3556872484
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient1Changed, "OnCurrentIngredient1Changed" }, // 3929130573
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient2Changed, "OnCurrentIngredient2Changed" }, // 3955184557
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient3Changed, "OnCurrentIngredient3Changed" }, // 1850136979
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient4Changed, "OnCurrentIngredient4Changed" }, // 675903548
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient5Changed, "OnCurrentIngredient5Changed" }, // 950608983
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentIngredient6Changed, "OnCurrentIngredient6Changed" }, // 3330195491
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentLevelChanged, "OnCurrentLevelChanged" }, // 1530184555
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentPistolAmmoChanged, "OnCurrentPistolAmmoChanged" }, // 1254800466
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRifleAmmoChanged, "OnCurrentRifleAmmoChanged" }, // 4252539461
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentRocketAmmoChanged, "OnCurrentRocketAmmoChanged" }, // 191351442
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentShotgunAmmoChanged, "OnCurrentShotgunAmmoChanged" }, // 2119687744
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentSniperAmmoChanged, "OnCurrentSniperAmmoChanged" }, // 2288656735
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentStaminaChanged, "OnCurrentStaminaChanged" }, // 3275998970
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentUniversalAmmoChanged, "OnCurrentUniversalAmmoChanged" }, // 3282954234
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnCurrentXPChanged, "OnCurrentXPChanged" }, // 3306702707
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxHealthChanged, "OnMaxHealthChanged" }, // 3554249664
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient1Changed, "OnMaxIngredient1Changed" }, // 1370597620
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient2Changed, "OnMaxIngredient2Changed" }, // 2324553808
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient3Changed, "OnMaxIngredient3Changed" }, // 3365227640
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient4Changed, "OnMaxIngredient4Changed" }, // 3494045458
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient5Changed, "OnMaxIngredient5Changed" }, // 2623338087
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxIngredient6Changed, "OnMaxIngredient6Changed" }, // 2552789673
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxPistolAmmoChanged, "OnMaxPistolAmmoChanged" }, // 4154614923
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRifleAmmoChanged, "OnMaxRifleAmmoChanged" }, // 920929424
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxRocketAmmoChanged, "OnMaxRocketAmmoChanged" }, // 4157684942
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxShotgunAmmoChanged, "OnMaxShotgunAmmoChanged" }, // 2213049011
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxSniperAmmoChanged, "OnMaxSniperAmmoChanged" }, // 3640314865
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxStaminaChanged, "OnMaxStaminaChanged" }, // 2694038149
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnMaxUniversalAmmoChanged, "OnMaxUniversalAmmoChanged" }, // 3083336194
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenHealthChanged, "OnRegenHealthChanged" }, // 93078075
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnRegenStaminaChanged, "OnRegenStaminaChanged" }, // 2839614109
		{ &Z_Construct_UFunction_ABiggMazeAICharacter_OnXPRequiredChanged, "OnXPRequiredChanged" }, // 1031590986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazeAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeAICharacter_Statics::NewProp_AmmoAttributeSet = { "AmmoAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeAICharacter, AmmoAttributeSet), Z_Construct_UClass_UAS_Ammunition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoAttributeSet_MetaData), NewProp_AmmoAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeAICharacter_Statics::NewProp_IngredientAttributeSet = { "IngredientAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeAICharacter, IngredientAttributeSet), Z_Construct_UClass_UAS_Ingredients_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IngredientAttributeSet_MetaData), NewProp_IngredientAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABiggMazeAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeAICharacter_Statics::NewProp_AmmoAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeAICharacter_Statics::NewProp_IngredientAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABiggMazeAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABiggMazeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazeAICharacter_Statics::ClassParams = {
	&ABiggMazeAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABiggMazeAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazeAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazeAICharacter()
{
	if (!Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton, Z_Construct_UClass_ABiggMazeAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazeAICharacter>()
{
	return ABiggMazeAICharacter::StaticClass();
}
void ABiggMazeAICharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AmmoAttributeSet(TEXT("AmmoAttributeSet"));
	static const FName Name_IngredientAttributeSet(TEXT("IngredientAttributeSet"));
	const bool bIsValid = true
		&& Name_AmmoAttributeSet == ClassReps[(int32)ENetFields_Private::AmmoAttributeSet].Property->GetFName()
		&& Name_IngredientAttributeSet == ClassReps[(int32)ENetFields_Private::IngredientAttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABiggMazeAICharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazeAICharacter);
ABiggMazeAICharacter::~ABiggMazeAICharacter() {}
// End Class ABiggMazeAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazeAICharacter, ABiggMazeAICharacter::StaticClass, TEXT("ABiggMazeAICharacter"), &Z_Registration_Info_UClass_ABiggMazeAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazeAICharacter), 1882259477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_662347418(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
