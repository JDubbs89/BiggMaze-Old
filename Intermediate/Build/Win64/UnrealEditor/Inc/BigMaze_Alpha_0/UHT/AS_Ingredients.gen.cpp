// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/AttributeSets/AS_Ingredients.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_Ingredients() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ingredients();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ingredients_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient1
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient1_Parms
	{
		FGameplayAttributeData OldCurrentIngredient1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 1\n// Current Ingredient 1\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 1\nCurrent Ingredient 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::NewProp_OldCurrentIngredient1 = { "OldCurrentIngredient1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient1_Parms, OldCurrentIngredient1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient1_MetaData), NewProp_OldCurrentIngredient1_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::NewProp_OldCurrentIngredient1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient1", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::AS_Ingredients_eventOnRep_CurrentIngredient1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::AS_Ingredients_eventOnRep_CurrentIngredient1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient1)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient1);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient1(Z_Param_Out_OldCurrentIngredient1);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient1

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient2
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient2_Parms
	{
		FGameplayAttributeData OldCurrentIngredient2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 2\n// Current Ingredient 2\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 2\nCurrent Ingredient 2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::NewProp_OldCurrentIngredient2 = { "OldCurrentIngredient2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient2_Parms, OldCurrentIngredient2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient2_MetaData), NewProp_OldCurrentIngredient2_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::NewProp_OldCurrentIngredient2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient2", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::AS_Ingredients_eventOnRep_CurrentIngredient2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::AS_Ingredients_eventOnRep_CurrentIngredient2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient2)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient2(Z_Param_Out_OldCurrentIngredient2);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient2

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient3
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient3_Parms
	{
		FGameplayAttributeData OldCurrentIngredient3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 3\n// Current Ingredient 3\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 3\nCurrent Ingredient 3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::NewProp_OldCurrentIngredient3 = { "OldCurrentIngredient3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient3_Parms, OldCurrentIngredient3), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient3_MetaData), NewProp_OldCurrentIngredient3_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::NewProp_OldCurrentIngredient3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient3", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::AS_Ingredients_eventOnRep_CurrentIngredient3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::AS_Ingredients_eventOnRep_CurrentIngredient3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient3)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient3);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient3(Z_Param_Out_OldCurrentIngredient3);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient3

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient4
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient4_Parms
	{
		FGameplayAttributeData OldCurrentIngredient4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 4\n// Current Ingredient 4\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 4\nCurrent Ingredient 4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::NewProp_OldCurrentIngredient4 = { "OldCurrentIngredient4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient4_Parms, OldCurrentIngredient4), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient4_MetaData), NewProp_OldCurrentIngredient4_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::NewProp_OldCurrentIngredient4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient4", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::AS_Ingredients_eventOnRep_CurrentIngredient4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::AS_Ingredients_eventOnRep_CurrentIngredient4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient4)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient4);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient4(Z_Param_Out_OldCurrentIngredient4);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient4

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient5
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient5_Parms
	{
		FGameplayAttributeData OldCurrentIngredient5;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 5\n// Current Ingredient 5\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 5\nCurrent Ingredient 5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient5_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient5;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::NewProp_OldCurrentIngredient5 = { "OldCurrentIngredient5", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient5_Parms, OldCurrentIngredient5), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient5_MetaData), NewProp_OldCurrentIngredient5_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::NewProp_OldCurrentIngredient5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient5", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::AS_Ingredients_eventOnRep_CurrentIngredient5_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::AS_Ingredients_eventOnRep_CurrentIngredient5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient5)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient5);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient5(Z_Param_Out_OldCurrentIngredient5);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient5

// Begin Class UAS_Ingredients Function OnRep_CurrentIngredient6
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics
{
	struct AS_Ingredients_eventOnRep_CurrentIngredient6_Parms
	{
		FGameplayAttributeData OldCurrentIngredient6;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient 6\n// Current Ingredient 6\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient 6\nCurrent Ingredient 6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentIngredient6_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentIngredient6;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::NewProp_OldCurrentIngredient6 = { "OldCurrentIngredient6", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_CurrentIngredient6_Parms, OldCurrentIngredient6), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentIngredient6_MetaData), NewProp_OldCurrentIngredient6_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::NewProp_OldCurrentIngredient6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_CurrentIngredient6", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::AS_Ingredients_eventOnRep_CurrentIngredient6_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::AS_Ingredients_eventOnRep_CurrentIngredient6_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_CurrentIngredient6)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentIngredient6);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentIngredient6(Z_Param_Out_OldCurrentIngredient6);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_CurrentIngredient6

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient1
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient1_Parms
	{
		FGameplayAttributeData OldMaxIngredient1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 1\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::NewProp_OldMaxIngredient1 = { "OldMaxIngredient1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient1_Parms, OldMaxIngredient1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient1_MetaData), NewProp_OldMaxIngredient1_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::NewProp_OldMaxIngredient1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient1", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::AS_Ingredients_eventOnRep_MaxIngredient1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::AS_Ingredients_eventOnRep_MaxIngredient1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient1)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient1);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient1(Z_Param_Out_OldMaxIngredient1);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient1

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient2
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient2_Parms
	{
		FGameplayAttributeData OldMaxIngredient2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 2\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::NewProp_OldMaxIngredient2 = { "OldMaxIngredient2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient2_Parms, OldMaxIngredient2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient2_MetaData), NewProp_OldMaxIngredient2_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::NewProp_OldMaxIngredient2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient2", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::AS_Ingredients_eventOnRep_MaxIngredient2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::AS_Ingredients_eventOnRep_MaxIngredient2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient2)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient2(Z_Param_Out_OldMaxIngredient2);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient2

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient3
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient3_Parms
	{
		FGameplayAttributeData OldMaxIngredient3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 3\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::NewProp_OldMaxIngredient3 = { "OldMaxIngredient3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient3_Parms, OldMaxIngredient3), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient3_MetaData), NewProp_OldMaxIngredient3_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::NewProp_OldMaxIngredient3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient3", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::AS_Ingredients_eventOnRep_MaxIngredient3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::AS_Ingredients_eventOnRep_MaxIngredient3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient3)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient3);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient3(Z_Param_Out_OldMaxIngredient3);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient3

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient4
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient4_Parms
	{
		FGameplayAttributeData OldMaxIngredient4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 4\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::NewProp_OldMaxIngredient4 = { "OldMaxIngredient4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient4_Parms, OldMaxIngredient4), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient4_MetaData), NewProp_OldMaxIngredient4_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::NewProp_OldMaxIngredient4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient4", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::AS_Ingredients_eventOnRep_MaxIngredient4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::AS_Ingredients_eventOnRep_MaxIngredient4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient4)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient4);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient4(Z_Param_Out_OldMaxIngredient4);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient4

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient5
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient5_Parms
	{
		FGameplayAttributeData OldMaxIngredient5;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 5\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient5_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient5;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::NewProp_OldMaxIngredient5 = { "OldMaxIngredient5", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient5_Parms, OldMaxIngredient5), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient5_MetaData), NewProp_OldMaxIngredient5_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::NewProp_OldMaxIngredient5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient5", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::AS_Ingredients_eventOnRep_MaxIngredient5_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::AS_Ingredients_eventOnRep_MaxIngredient5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient5)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient5);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient5(Z_Param_Out_OldMaxIngredient5);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient5

// Begin Class UAS_Ingredients Function OnRep_MaxIngredient6
struct Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics
{
	struct AS_Ingredients_eventOnRep_MaxIngredient6_Parms
	{
		FGameplayAttributeData OldMaxIngredient6;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Ingredient 6\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Ingredient 6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxIngredient6_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxIngredient6;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::NewProp_OldMaxIngredient6 = { "OldMaxIngredient6", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ingredients_eventOnRep_MaxIngredient6_Parms, OldMaxIngredient6), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxIngredient6_MetaData), NewProp_OldMaxIngredient6_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::NewProp_OldMaxIngredient6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ingredients, nullptr, "OnRep_MaxIngredient6", nullptr, nullptr, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::AS_Ingredients_eventOnRep_MaxIngredient6_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::AS_Ingredients_eventOnRep_MaxIngredient6_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ingredients::execOnRep_MaxIngredient6)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxIngredient6);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxIngredient6(Z_Param_Out_OldMaxIngredient6);
	P_NATIVE_END;
}
// End Class UAS_Ingredients Function OnRep_MaxIngredient6

// Begin Class UAS_Ingredients
void UAS_Ingredients::StaticRegisterNativesUAS_Ingredients()
{
	UClass* Class = UAS_Ingredients::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentIngredient1", &UAS_Ingredients::execOnRep_CurrentIngredient1 },
		{ "OnRep_CurrentIngredient2", &UAS_Ingredients::execOnRep_CurrentIngredient2 },
		{ "OnRep_CurrentIngredient3", &UAS_Ingredients::execOnRep_CurrentIngredient3 },
		{ "OnRep_CurrentIngredient4", &UAS_Ingredients::execOnRep_CurrentIngredient4 },
		{ "OnRep_CurrentIngredient5", &UAS_Ingredients::execOnRep_CurrentIngredient5 },
		{ "OnRep_CurrentIngredient6", &UAS_Ingredients::execOnRep_CurrentIngredient6 },
		{ "OnRep_MaxIngredient1", &UAS_Ingredients::execOnRep_MaxIngredient1 },
		{ "OnRep_MaxIngredient2", &UAS_Ingredients::execOnRep_MaxIngredient2 },
		{ "OnRep_MaxIngredient3", &UAS_Ingredients::execOnRep_MaxIngredient3 },
		{ "OnRep_MaxIngredient4", &UAS_Ingredients::execOnRep_MaxIngredient4 },
		{ "OnRep_MaxIngredient5", &UAS_Ingredients::execOnRep_MaxIngredient5 },
		{ "OnRep_MaxIngredient6", &UAS_Ingredients::execOnRep_MaxIngredient6 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_Ingredients);
UClass* Z_Construct_UClass_UAS_Ingredients_NoRegister()
{
	return UAS_Ingredients::StaticClass();
}
struct Z_Construct_UClass_UAS_Ingredients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GASFramework/AttributeSets/AS_Ingredients.h" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient1_MetaData[] = {
		{ "Category", "Ingredient 1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient1 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient1 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient1_MetaData[] = {
		{ "Category", "Ingredient 1" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient2_MetaData[] = {
		{ "Category", "Ingredient 2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient2 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient2 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient2_MetaData[] = {
		{ "Category", "Ingredient 2" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient3_MetaData[] = {
		{ "Category", "Ingredient 3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient3 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient3 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient3_MetaData[] = {
		{ "Category", "Ingredient 3" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient4_MetaData[] = {
		{ "Category", "Ingredient 4" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient4 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient4 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient4_MetaData[] = {
		{ "Category", "Ingredient 4" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient5_MetaData[] = {
		{ "Category", "Ingredient 5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient5 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient5 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient5_MetaData[] = {
		{ "Category", "Ingredient 5" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIngredient6_MetaData[] = {
		{ "Category", "Ingredient 6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ingredient6 ------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ingredient6 ------------------------------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIngredient6_MetaData[] = {
		{ "Category", "Ingredient 6" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ingredients.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient5;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient5;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIngredient6;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxIngredient6;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient1, "OnRep_CurrentIngredient1" }, // 1813227184
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient2, "OnRep_CurrentIngredient2" }, // 75520097
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient3, "OnRep_CurrentIngredient3" }, // 2578439988
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient4, "OnRep_CurrentIngredient4" }, // 2926675109
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient5, "OnRep_CurrentIngredient5" }, // 1218119291
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_CurrentIngredient6, "OnRep_CurrentIngredient6" }, // 173029752
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient1, "OnRep_MaxIngredient1" }, // 2648081716
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient2, "OnRep_MaxIngredient2" }, // 3650912600
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient3, "OnRep_MaxIngredient3" }, // 516171909
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient4, "OnRep_MaxIngredient4" }, // 1799629719
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient5, "OnRep_MaxIngredient5" }, // 2979209493
		{ &Z_Construct_UFunction_UAS_Ingredients_OnRep_MaxIngredient6, "OnRep_MaxIngredient6" }, // 719992787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_Ingredients>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient1 = { "CurrentIngredient1", "OnRep_CurrentIngredient1", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient1_MetaData), NewProp_CurrentIngredient1_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient1 = { "MaxIngredient1", "OnRep_MaxIngredient1", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient1_MetaData), NewProp_MaxIngredient1_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient2 = { "CurrentIngredient2", "OnRep_CurrentIngredient2", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient2_MetaData), NewProp_CurrentIngredient2_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient2 = { "MaxIngredient2", "OnRep_MaxIngredient2", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient2_MetaData), NewProp_MaxIngredient2_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient3 = { "CurrentIngredient3", "OnRep_CurrentIngredient3", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient3), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient3_MetaData), NewProp_CurrentIngredient3_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient3 = { "MaxIngredient3", "OnRep_MaxIngredient3", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient3), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient3_MetaData), NewProp_MaxIngredient3_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient4 = { "CurrentIngredient4", "OnRep_CurrentIngredient4", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient4), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient4_MetaData), NewProp_CurrentIngredient4_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient4 = { "MaxIngredient4", "OnRep_MaxIngredient4", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient4), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient4_MetaData), NewProp_MaxIngredient4_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient5 = { "CurrentIngredient5", "OnRep_CurrentIngredient5", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient5), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient5_MetaData), NewProp_CurrentIngredient5_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient5 = { "MaxIngredient5", "OnRep_MaxIngredient5", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient5), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient5_MetaData), NewProp_MaxIngredient5_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient6 = { "CurrentIngredient6", "OnRep_CurrentIngredient6", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, CurrentIngredient6), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIngredient6_MetaData), NewProp_CurrentIngredient6_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient6 = { "MaxIngredient6", "OnRep_MaxIngredient6", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ingredients, MaxIngredient6), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIngredient6_MetaData), NewProp_MaxIngredient6_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_Ingredients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_CurrentIngredient6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ingredients_Statics::NewProp_MaxIngredient6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ingredients_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAS_Ingredients_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ingredients_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_Ingredients_Statics::ClassParams = {
	&UAS_Ingredients::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAS_Ingredients_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ingredients_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ingredients_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_Ingredients_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_Ingredients()
{
	if (!Z_Registration_Info_UClass_UAS_Ingredients.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_Ingredients.OuterSingleton, Z_Construct_UClass_UAS_Ingredients_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_Ingredients.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UAS_Ingredients>()
{
	return UAS_Ingredients::StaticClass();
}
void UAS_Ingredients::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentIngredient1(TEXT("CurrentIngredient1"));
	static const FName Name_MaxIngredient1(TEXT("MaxIngredient1"));
	static const FName Name_CurrentIngredient2(TEXT("CurrentIngredient2"));
	static const FName Name_MaxIngredient2(TEXT("MaxIngredient2"));
	static const FName Name_CurrentIngredient3(TEXT("CurrentIngredient3"));
	static const FName Name_MaxIngredient3(TEXT("MaxIngredient3"));
	static const FName Name_CurrentIngredient4(TEXT("CurrentIngredient4"));
	static const FName Name_MaxIngredient4(TEXT("MaxIngredient4"));
	static const FName Name_CurrentIngredient5(TEXT("CurrentIngredient5"));
	static const FName Name_MaxIngredient5(TEXT("MaxIngredient5"));
	static const FName Name_CurrentIngredient6(TEXT("CurrentIngredient6"));
	static const FName Name_MaxIngredient6(TEXT("MaxIngredient6"));
	const bool bIsValid = true
		&& Name_CurrentIngredient1 == ClassReps[(int32)ENetFields_Private::CurrentIngredient1].Property->GetFName()
		&& Name_MaxIngredient1 == ClassReps[(int32)ENetFields_Private::MaxIngredient1].Property->GetFName()
		&& Name_CurrentIngredient2 == ClassReps[(int32)ENetFields_Private::CurrentIngredient2].Property->GetFName()
		&& Name_MaxIngredient2 == ClassReps[(int32)ENetFields_Private::MaxIngredient2].Property->GetFName()
		&& Name_CurrentIngredient3 == ClassReps[(int32)ENetFields_Private::CurrentIngredient3].Property->GetFName()
		&& Name_MaxIngredient3 == ClassReps[(int32)ENetFields_Private::MaxIngredient3].Property->GetFName()
		&& Name_CurrentIngredient4 == ClassReps[(int32)ENetFields_Private::CurrentIngredient4].Property->GetFName()
		&& Name_MaxIngredient4 == ClassReps[(int32)ENetFields_Private::MaxIngredient4].Property->GetFName()
		&& Name_CurrentIngredient5 == ClassReps[(int32)ENetFields_Private::CurrentIngredient5].Property->GetFName()
		&& Name_MaxIngredient5 == ClassReps[(int32)ENetFields_Private::MaxIngredient5].Property->GetFName()
		&& Name_CurrentIngredient6 == ClassReps[(int32)ENetFields_Private::CurrentIngredient6].Property->GetFName()
		&& Name_MaxIngredient6 == ClassReps[(int32)ENetFields_Private::MaxIngredient6].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_Ingredients"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_Ingredients);
UAS_Ingredients::~UAS_Ingredients() {}
// End Class UAS_Ingredients

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_Ingredients, UAS_Ingredients::StaticClass, TEXT("UAS_Ingredients"), &Z_Registration_Info_UClass_UAS_Ingredients, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_Ingredients), 875233467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_480017817(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
