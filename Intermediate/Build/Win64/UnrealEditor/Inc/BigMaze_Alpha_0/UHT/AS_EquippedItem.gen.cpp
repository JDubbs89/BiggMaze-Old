// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/AttributeSets/AS_EquippedItem.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_EquippedItem() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_EquippedItem();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_EquippedItem_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UAS_EquippedItem Function OnRep_AmmoType
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics
{
	struct AS_EquippedItem_eventOnRep_AmmoType_Parms
	{
		FGameplayAttributeData OldAmmoType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AmmoType\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AmmoType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAmmoType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAmmoType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::NewProp_OldAmmoType = { "OldAmmoType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_AmmoType_Parms, OldAmmoType), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAmmoType_MetaData), NewProp_OldAmmoType_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::NewProp_OldAmmoType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_AmmoType", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::AS_EquippedItem_eventOnRep_AmmoType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::AS_EquippedItem_eventOnRep_AmmoType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_AmmoType)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAmmoType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AmmoType(Z_Param_Out_OldAmmoType);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_AmmoType

// Begin Class UAS_EquippedItem Function OnRep_CritMultiplier
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics
{
	struct AS_EquippedItem_eventOnRep_CritMultiplier_Parms
	{
		FGameplayAttributeData OldCritMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritMultiplier\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritMultiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::NewProp_OldCritMultiplier = { "OldCritMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_CritMultiplier_Parms, OldCritMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritMultiplier_MetaData), NewProp_OldCritMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::NewProp_OldCritMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_CritMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::AS_EquippedItem_eventOnRep_CritMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::AS_EquippedItem_eventOnRep_CritMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_CritMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritMultiplier(Z_Param_Out_OldCritMultiplier);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_CritMultiplier

// Begin Class UAS_EquippedItem Function OnRep_Damage
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics
{
	struct AS_EquippedItem_eventOnRep_Damage_Parms
	{
		FGameplayAttributeData OldDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage */// Damage\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage // Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::NewProp_OldDamage = { "OldDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_Damage_Parms, OldDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDamage_MetaData), NewProp_OldDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::NewProp_OldDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_Damage", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::AS_EquippedItem_eventOnRep_Damage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::AS_EquippedItem_eventOnRep_Damage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_Damage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Damage(Z_Param_Out_OldDamage);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_Damage

// Begin Class UAS_EquippedItem Function OnRep_FireRate
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics
{
	struct AS_EquippedItem_eventOnRep_FireRate_Parms
	{
		FGameplayAttributeData OldFireRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FireRate */// FireRate\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FireRate // FireRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFireRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::NewProp_OldFireRate = { "OldFireRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_FireRate_Parms, OldFireRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFireRate_MetaData), NewProp_OldFireRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::NewProp_OldFireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_FireRate", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::AS_EquippedItem_eventOnRep_FireRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::AS_EquippedItem_eventOnRep_FireRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_FireRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFireRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FireRate(Z_Param_Out_OldFireRate);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_FireRate

// Begin Class UAS_EquippedItem Function OnRep_Handling
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics
{
	struct AS_EquippedItem_eventOnRep_Handling_Parms
	{
		FGameplayAttributeData OldHandling;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handling */// Handling\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handling // Handling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHandling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHandling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::NewProp_OldHandling = { "OldHandling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_Handling_Parms, OldHandling), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHandling_MetaData), NewProp_OldHandling_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::NewProp_OldHandling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_Handling", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::AS_EquippedItem_eventOnRep_Handling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::AS_EquippedItem_eventOnRep_Handling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_Handling)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHandling);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Handling(Z_Param_Out_OldHandling);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_Handling

// Begin Class UAS_EquippedItem Function OnRep_Level
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics
{
	struct AS_EquippedItem_eventOnRep_Level_Parms
	{
		FGameplayAttributeData OldLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Level */// Level\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level // Level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_Level_Parms, OldLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldLevel_MetaData), NewProp_OldLevel_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::NewProp_OldLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_Level", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::AS_EquippedItem_eventOnRep_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::AS_EquippedItem_eventOnRep_Level_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_Level)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Level(Z_Param_Out_OldLevel);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_Level

// Begin Class UAS_EquippedItem Function OnRep_MagCount
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics
{
	struct AS_EquippedItem_eventOnRep_MagCount_Parms
	{
		FGameplayAttributeData OldMagCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magazine */// MagCount\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magazine // MagCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMagCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::NewProp_OldMagCount = { "OldMagCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_MagCount_Parms, OldMagCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMagCount_MetaData), NewProp_OldMagCount_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::NewProp_OldMagCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_MagCount", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::AS_EquippedItem_eventOnRep_MagCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::AS_EquippedItem_eventOnRep_MagCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_MagCount)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MagCount(Z_Param_Out_OldMagCount);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_MagCount

// Begin Class UAS_EquippedItem Function OnRep_MaxLevel
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics
{
	struct AS_EquippedItem_eventOnRep_MaxLevel_Parms
	{
		FGameplayAttributeData OldMaxLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxLevel\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxLevel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::NewProp_OldMaxLevel = { "OldMaxLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_MaxLevel_Parms, OldMaxLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxLevel_MetaData), NewProp_OldMaxLevel_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::NewProp_OldMaxLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_MaxLevel", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::AS_EquippedItem_eventOnRep_MaxLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::AS_EquippedItem_eventOnRep_MaxLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_MaxLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxLevel(Z_Param_Out_OldMaxLevel);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_MaxLevel

// Begin Class UAS_EquippedItem Function OnRep_MaxMagCount
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics
{
	struct AS_EquippedItem_eventOnRep_MaxMagCount_Parms
	{
		FGameplayAttributeData OldMaxMagCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxMagCount\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxMagCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMagCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMagCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::NewProp_OldMaxMagCount = { "OldMaxMagCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_MaxMagCount_Parms, OldMaxMagCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMagCount_MetaData), NewProp_OldMaxMagCount_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::NewProp_OldMaxMagCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_MaxMagCount", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::AS_EquippedItem_eventOnRep_MaxMagCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::AS_EquippedItem_eventOnRep_MaxMagCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_MaxMagCount)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMagCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMagCount(Z_Param_Out_OldMaxMagCount);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_MaxMagCount

// Begin Class UAS_EquippedItem Function OnRep_MaxStackCount
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics
{
	struct AS_EquippedItem_eventOnRep_MaxStackCount_Parms
	{
		FGameplayAttributeData OldMaxStackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxStackCount\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxStackCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStackCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::NewProp_OldMaxStackCount = { "OldMaxStackCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_MaxStackCount_Parms, OldMaxStackCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStackCount_MetaData), NewProp_OldMaxStackCount_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::NewProp_OldMaxStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_MaxStackCount", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::AS_EquippedItem_eventOnRep_MaxStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::AS_EquippedItem_eventOnRep_MaxStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_MaxStackCount)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStackCount(Z_Param_Out_OldMaxStackCount);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_MaxStackCount

// Begin Class UAS_EquippedItem Function OnRep_Range
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics
{
	struct AS_EquippedItem_eventOnRep_Range_Parms
	{
		FGameplayAttributeData OldRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Range */// Range\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range // Range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::NewProp_OldRange = { "OldRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_Range_Parms, OldRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRange_MetaData), NewProp_OldRange_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::NewProp_OldRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_Range", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::AS_EquippedItem_eventOnRep_Range_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::AS_EquippedItem_eventOnRep_Range_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_Range)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Range(Z_Param_Out_OldRange);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_Range

// Begin Class UAS_EquippedItem Function OnRep_ReloadAmt
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics
{
	struct AS_EquippedItem_eventOnRep_ReloadAmt_Parms
	{
		FGameplayAttributeData OldReloadAmt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ReloadAmt\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReloadAmt" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldReloadAmt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldReloadAmt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::NewProp_OldReloadAmt = { "OldReloadAmt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_ReloadAmt_Parms, OldReloadAmt), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldReloadAmt_MetaData), NewProp_OldReloadAmt_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::NewProp_OldReloadAmt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_ReloadAmt", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::AS_EquippedItem_eventOnRep_ReloadAmt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::AS_EquippedItem_eventOnRep_ReloadAmt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_ReloadAmt)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldReloadAmt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReloadAmt(Z_Param_Out_OldReloadAmt);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_ReloadAmt

// Begin Class UAS_EquippedItem Function OnRep_ScopedSpread
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics
{
	struct AS_EquippedItem_eventOnRep_ScopedSpread_Parms
	{
		FGameplayAttributeData OldScopedSpread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ScopedSpread\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ScopedSpread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldScopedSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldScopedSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::NewProp_OldScopedSpread = { "OldScopedSpread", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_ScopedSpread_Parms, OldScopedSpread), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldScopedSpread_MetaData), NewProp_OldScopedSpread_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::NewProp_OldScopedSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_ScopedSpread", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::AS_EquippedItem_eventOnRep_ScopedSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::AS_EquippedItem_eventOnRep_ScopedSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_ScopedSpread)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldScopedSpread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ScopedSpread(Z_Param_Out_OldScopedSpread);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_ScopedSpread

// Begin Class UAS_EquippedItem Function OnRep_Spread
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics
{
	struct AS_EquippedItem_eventOnRep_Spread_Parms
	{
		FGameplayAttributeData OldSpread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spread */// Spread\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spread // Spread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::NewProp_OldSpread = { "OldSpread", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_Spread_Parms, OldSpread), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpread_MetaData), NewProp_OldSpread_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::NewProp_OldSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_Spread", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::AS_EquippedItem_eventOnRep_Spread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::AS_EquippedItem_eventOnRep_Spread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_Spread)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Spread(Z_Param_Out_OldSpread);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_Spread

// Begin Class UAS_EquippedItem Function OnRep_StackCount
struct Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics
{
	struct AS_EquippedItem_eventOnRep_StackCount_Parms
	{
		FGameplayAttributeData OldStackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** StackCount */// StackCount\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StackCount // StackCount" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStackCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_EquippedItem_eventOnRep_StackCount_Parms, OldStackCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStackCount_MetaData), NewProp_OldStackCount_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::NewProp_OldStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_EquippedItem, nullptr, "OnRep_StackCount", nullptr, nullptr, Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::AS_EquippedItem_eventOnRep_StackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::AS_EquippedItem_eventOnRep_StackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_EquippedItem::execOnRep_StackCount)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StackCount(Z_Param_Out_OldStackCount);
	P_NATIVE_END;
}
// End Class UAS_EquippedItem Function OnRep_StackCount

// Begin Class UAS_EquippedItem
void UAS_EquippedItem::StaticRegisterNativesUAS_EquippedItem()
{
	UClass* Class = UAS_EquippedItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AmmoType", &UAS_EquippedItem::execOnRep_AmmoType },
		{ "OnRep_CritMultiplier", &UAS_EquippedItem::execOnRep_CritMultiplier },
		{ "OnRep_Damage", &UAS_EquippedItem::execOnRep_Damage },
		{ "OnRep_FireRate", &UAS_EquippedItem::execOnRep_FireRate },
		{ "OnRep_Handling", &UAS_EquippedItem::execOnRep_Handling },
		{ "OnRep_Level", &UAS_EquippedItem::execOnRep_Level },
		{ "OnRep_MagCount", &UAS_EquippedItem::execOnRep_MagCount },
		{ "OnRep_MaxLevel", &UAS_EquippedItem::execOnRep_MaxLevel },
		{ "OnRep_MaxMagCount", &UAS_EquippedItem::execOnRep_MaxMagCount },
		{ "OnRep_MaxStackCount", &UAS_EquippedItem::execOnRep_MaxStackCount },
		{ "OnRep_Range", &UAS_EquippedItem::execOnRep_Range },
		{ "OnRep_ReloadAmt", &UAS_EquippedItem::execOnRep_ReloadAmt },
		{ "OnRep_ScopedSpread", &UAS_EquippedItem::execOnRep_ScopedSpread },
		{ "OnRep_Spread", &UAS_EquippedItem::execOnRep_Spread },
		{ "OnRep_StackCount", &UAS_EquippedItem::execOnRep_StackCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_EquippedItem);
UClass* Z_Construct_UClass_UAS_EquippedItem_NoRegister()
{
	return UAS_EquippedItem::StaticClass();
}
struct Z_Construct_UClass_UAS_EquippedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GASFramework/AttributeSets/AS_EquippedItem.h" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "Category", "Stack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stack Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackCount_MetaData[] = {
		{ "Category", "Stack" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagCount_MetaData[] = {
		{ "Category", "Magazine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mag Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mag Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagCount_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAmt_MetaData[] = {
		{ "Category", "Magazine" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Level Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Range" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Range */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "Spread" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spread */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spread" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedSpread_MetaData[] = {
		{ "Category", "Spread" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handling_MetaData[] = {
		{ "Category", "Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handling */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "FireRate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FireRate */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_EquippedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FireRate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStackCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadAmt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScopedSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_AmmoType, "OnRep_AmmoType" }, // 796607717
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_CritMultiplier, "OnRep_CritMultiplier" }, // 1306559762
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_Damage, "OnRep_Damage" }, // 3927168899
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_FireRate, "OnRep_FireRate" }, // 3234575905
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_Handling, "OnRep_Handling" }, // 2944806945
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_Level, "OnRep_Level" }, // 1827183657
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_MagCount, "OnRep_MagCount" }, // 2385409305
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxLevel, "OnRep_MaxLevel" }, // 1641859134
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxMagCount, "OnRep_MaxMagCount" }, // 2571391041
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_MaxStackCount, "OnRep_MaxStackCount" }, // 54725971
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_Range, "OnRep_Range" }, // 2641817062
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_ReloadAmt, "OnRep_ReloadAmt" }, // 2745661776
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_ScopedSpread, "OnRep_ScopedSpread" }, // 378141837
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_Spread, "OnRep_Spread" }, // 221309192
		{ &Z_Construct_UFunction_UAS_EquippedItem_OnRep_StackCount, "OnRep_StackCount" }, // 2283411285
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_EquippedItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_StackCount = { "StackCount", "OnRep_StackCount", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, StackCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxStackCount = { "MaxStackCount", "OnRep_MaxStackCount", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, MaxStackCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackCount_MetaData), NewProp_MaxStackCount_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MagCount = { "MagCount", "OnRep_MagCount", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, MagCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagCount_MetaData), NewProp_MagCount_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxMagCount = { "MaxMagCount", "OnRep_MaxMagCount", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, MaxMagCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagCount_MetaData), NewProp_MaxMagCount_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_AmmoType = { "AmmoType", "OnRep_AmmoType", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, AmmoType), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoType_MetaData), NewProp_AmmoType_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_ReloadAmt = { "ReloadAmt", "OnRep_ReloadAmt", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, ReloadAmt), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAmt_MetaData), NewProp_ReloadAmt_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, Level), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxLevel = { "MaxLevel", "OnRep_MaxLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, MaxLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Range = { "Range", "OnRep_Range", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, Range), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Spread = { "Spread", "OnRep_Spread", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, Spread), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_ScopedSpread = { "ScopedSpread", "OnRep_ScopedSpread", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, ScopedSpread), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedSpread_MetaData), NewProp_ScopedSpread_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Damage = { "Damage", "OnRep_Damage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_CritMultiplier = { "CritMultiplier", "OnRep_CritMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, CritMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritMultiplier_MetaData), NewProp_CritMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Handling = { "Handling", "OnRep_Handling", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, Handling), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handling_MetaData), NewProp_Handling_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_FireRate = { "FireRate", "OnRep_FireRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_EquippedItem, FireRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_EquippedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MagCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxMagCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_AmmoType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_ReloadAmt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_ScopedSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_CritMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_Handling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_EquippedItem_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_EquippedItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAS_EquippedItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_EquippedItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_EquippedItem_Statics::ClassParams = {
	&UAS_EquippedItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAS_EquippedItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAS_EquippedItem_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_EquippedItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_EquippedItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_EquippedItem()
{
	if (!Z_Registration_Info_UClass_UAS_EquippedItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_EquippedItem.OuterSingleton, Z_Construct_UClass_UAS_EquippedItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_EquippedItem.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UAS_EquippedItem>()
{
	return UAS_EquippedItem::StaticClass();
}
void UAS_EquippedItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StackCount(TEXT("StackCount"));
	static const FName Name_MaxStackCount(TEXT("MaxStackCount"));
	static const FName Name_MagCount(TEXT("MagCount"));
	static const FName Name_MaxMagCount(TEXT("MaxMagCount"));
	static const FName Name_AmmoType(TEXT("AmmoType"));
	static const FName Name_ReloadAmt(TEXT("ReloadAmt"));
	static const FName Name_Level(TEXT("Level"));
	static const FName Name_MaxLevel(TEXT("MaxLevel"));
	static const FName Name_Range(TEXT("Range"));
	static const FName Name_Spread(TEXT("Spread"));
	static const FName Name_ScopedSpread(TEXT("ScopedSpread"));
	static const FName Name_Damage(TEXT("Damage"));
	static const FName Name_CritMultiplier(TEXT("CritMultiplier"));
	static const FName Name_Handling(TEXT("Handling"));
	static const FName Name_FireRate(TEXT("FireRate"));
	const bool bIsValid = true
		&& Name_StackCount == ClassReps[(int32)ENetFields_Private::StackCount].Property->GetFName()
		&& Name_MaxStackCount == ClassReps[(int32)ENetFields_Private::MaxStackCount].Property->GetFName()
		&& Name_MagCount == ClassReps[(int32)ENetFields_Private::MagCount].Property->GetFName()
		&& Name_MaxMagCount == ClassReps[(int32)ENetFields_Private::MaxMagCount].Property->GetFName()
		&& Name_AmmoType == ClassReps[(int32)ENetFields_Private::AmmoType].Property->GetFName()
		&& Name_ReloadAmt == ClassReps[(int32)ENetFields_Private::ReloadAmt].Property->GetFName()
		&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName()
		&& Name_MaxLevel == ClassReps[(int32)ENetFields_Private::MaxLevel].Property->GetFName()
		&& Name_Range == ClassReps[(int32)ENetFields_Private::Range].Property->GetFName()
		&& Name_Spread == ClassReps[(int32)ENetFields_Private::Spread].Property->GetFName()
		&& Name_ScopedSpread == ClassReps[(int32)ENetFields_Private::ScopedSpread].Property->GetFName()
		&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName()
		&& Name_CritMultiplier == ClassReps[(int32)ENetFields_Private::CritMultiplier].Property->GetFName()
		&& Name_Handling == ClassReps[(int32)ENetFields_Private::Handling].Property->GetFName()
		&& Name_FireRate == ClassReps[(int32)ENetFields_Private::FireRate].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_EquippedItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_EquippedItem);
UAS_EquippedItem::~UAS_EquippedItem() {}
// End Class UAS_EquippedItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_EquippedItem, UAS_EquippedItem::StaticClass, TEXT("UAS_EquippedItem"), &Z_Registration_Info_UClass_UAS_EquippedItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_EquippedItem), 2668404266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_2949995174(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
