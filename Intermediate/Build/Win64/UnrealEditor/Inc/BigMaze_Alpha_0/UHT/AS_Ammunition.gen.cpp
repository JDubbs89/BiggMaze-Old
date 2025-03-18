// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/AttributeSets/AS_Ammunition.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_Ammunition() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ammunition();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ammunition_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UAS_Ammunition Function OnRep_CurrentPistolAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentPistolAmmo_Parms
	{
		FGameplayAttributeData OldCurrentPistolAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pistol Ammo Attributes */// Current PistolAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pistol Ammo Attributes // Current PistolAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentPistolAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentPistolAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::NewProp_OldCurrentPistolAmmo = { "OldCurrentPistolAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentPistolAmmo_Parms, OldCurrentPistolAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentPistolAmmo_MetaData), NewProp_OldCurrentPistolAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::NewProp_OldCurrentPistolAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentPistolAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::AS_Ammunition_eventOnRep_CurrentPistolAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::AS_Ammunition_eventOnRep_CurrentPistolAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentPistolAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentPistolAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentPistolAmmo(Z_Param_Out_OldCurrentPistolAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentPistolAmmo

// Begin Class UAS_Ammunition Function OnRep_CurrentRifleAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentRifleAmmo_Parms
	{
		FGameplayAttributeData OldCurrentRifleAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rifle Ammo Attributes */// Current RifleAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rifle Ammo Attributes // Current RifleAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentRifleAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentRifleAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::NewProp_OldCurrentRifleAmmo = { "OldCurrentRifleAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentRifleAmmo_Parms, OldCurrentRifleAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentRifleAmmo_MetaData), NewProp_OldCurrentRifleAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::NewProp_OldCurrentRifleAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentRifleAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::AS_Ammunition_eventOnRep_CurrentRifleAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::AS_Ammunition_eventOnRep_CurrentRifleAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentRifleAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentRifleAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentRifleAmmo(Z_Param_Out_OldCurrentRifleAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentRifleAmmo

// Begin Class UAS_Ammunition Function OnRep_CurrentRocketAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentRocketAmmo_Parms
	{
		FGameplayAttributeData OldCurrentRocketAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rocket Ammo Attributes */// Current RocketAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rocket Ammo Attributes // Current RocketAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentRocketAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentRocketAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::NewProp_OldCurrentRocketAmmo = { "OldCurrentRocketAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentRocketAmmo_Parms, OldCurrentRocketAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentRocketAmmo_MetaData), NewProp_OldCurrentRocketAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::NewProp_OldCurrentRocketAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentRocketAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::AS_Ammunition_eventOnRep_CurrentRocketAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::AS_Ammunition_eventOnRep_CurrentRocketAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentRocketAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentRocketAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentRocketAmmo(Z_Param_Out_OldCurrentRocketAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentRocketAmmo

// Begin Class UAS_Ammunition Function OnRep_CurrentShotgunAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentShotgunAmmo_Parms
	{
		FGameplayAttributeData OldCurrentShotgunAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shotgun Ammo Attributes */// Current ShotgunAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shotgun Ammo Attributes // Current ShotgunAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentShotgunAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentShotgunAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::NewProp_OldCurrentShotgunAmmo = { "OldCurrentShotgunAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentShotgunAmmo_Parms, OldCurrentShotgunAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentShotgunAmmo_MetaData), NewProp_OldCurrentShotgunAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::NewProp_OldCurrentShotgunAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentShotgunAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::AS_Ammunition_eventOnRep_CurrentShotgunAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::AS_Ammunition_eventOnRep_CurrentShotgunAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentShotgunAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentShotgunAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentShotgunAmmo(Z_Param_Out_OldCurrentShotgunAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentShotgunAmmo

// Begin Class UAS_Ammunition Function OnRep_CurrentSniperAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentSniperAmmo_Parms
	{
		FGameplayAttributeData OldCurrentSniperAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sniper Ammo Attributes */// Current SniperAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sniper Ammo Attributes // Current SniperAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentSniperAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentSniperAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::NewProp_OldCurrentSniperAmmo = { "OldCurrentSniperAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentSniperAmmo_Parms, OldCurrentSniperAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentSniperAmmo_MetaData), NewProp_OldCurrentSniperAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::NewProp_OldCurrentSniperAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentSniperAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::AS_Ammunition_eventOnRep_CurrentSniperAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::AS_Ammunition_eventOnRep_CurrentSniperAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentSniperAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentSniperAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentSniperAmmo(Z_Param_Out_OldCurrentSniperAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentSniperAmmo

// Begin Class UAS_Ammunition Function OnRep_CurrentUniversalAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_CurrentUniversalAmmo_Parms
	{
		FGameplayAttributeData OldCurrentUniversalAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal Ammo Attributes */// Current UniversalAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal Ammo Attributes // Current UniversalAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentUniversalAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentUniversalAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::NewProp_OldCurrentUniversalAmmo = { "OldCurrentUniversalAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_CurrentUniversalAmmo_Parms, OldCurrentUniversalAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentUniversalAmmo_MetaData), NewProp_OldCurrentUniversalAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::NewProp_OldCurrentUniversalAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_CurrentUniversalAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::AS_Ammunition_eventOnRep_CurrentUniversalAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::AS_Ammunition_eventOnRep_CurrentUniversalAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_CurrentUniversalAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentUniversalAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentUniversalAmmo(Z_Param_Out_OldCurrentUniversalAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_CurrentUniversalAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxPistolAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxPistolAmmo_Parms
	{
		FGameplayAttributeData OldMaxPistolAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max PistolAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max PistolAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxPistolAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxPistolAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::NewProp_OldMaxPistolAmmo = { "OldMaxPistolAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxPistolAmmo_Parms, OldMaxPistolAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxPistolAmmo_MetaData), NewProp_OldMaxPistolAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::NewProp_OldMaxPistolAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxPistolAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::AS_Ammunition_eventOnRep_MaxPistolAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::AS_Ammunition_eventOnRep_MaxPistolAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxPistolAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxPistolAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxPistolAmmo(Z_Param_Out_OldMaxPistolAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxPistolAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxRifleAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxRifleAmmo_Parms
	{
		FGameplayAttributeData OldMaxRifleAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max RifleAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max RifleAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxRifleAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxRifleAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::NewProp_OldMaxRifleAmmo = { "OldMaxRifleAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxRifleAmmo_Parms, OldMaxRifleAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxRifleAmmo_MetaData), NewProp_OldMaxRifleAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::NewProp_OldMaxRifleAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxRifleAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::AS_Ammunition_eventOnRep_MaxRifleAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::AS_Ammunition_eventOnRep_MaxRifleAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxRifleAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxRifleAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRifleAmmo(Z_Param_Out_OldMaxRifleAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxRifleAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxRocketAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxRocketAmmo_Parms
	{
		FGameplayAttributeData OldMaxRocketAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max RocketAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max RocketAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxRocketAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxRocketAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::NewProp_OldMaxRocketAmmo = { "OldMaxRocketAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxRocketAmmo_Parms, OldMaxRocketAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxRocketAmmo_MetaData), NewProp_OldMaxRocketAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::NewProp_OldMaxRocketAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxRocketAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::AS_Ammunition_eventOnRep_MaxRocketAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::AS_Ammunition_eventOnRep_MaxRocketAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxRocketAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxRocketAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRocketAmmo(Z_Param_Out_OldMaxRocketAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxRocketAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxShotgunAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxShotgunAmmo_Parms
	{
		FGameplayAttributeData OldMaxShotgunAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max ShotgunAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max ShotgunAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxShotgunAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxShotgunAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::NewProp_OldMaxShotgunAmmo = { "OldMaxShotgunAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxShotgunAmmo_Parms, OldMaxShotgunAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxShotgunAmmo_MetaData), NewProp_OldMaxShotgunAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::NewProp_OldMaxShotgunAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxShotgunAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::AS_Ammunition_eventOnRep_MaxShotgunAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::AS_Ammunition_eventOnRep_MaxShotgunAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxShotgunAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxShotgunAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxShotgunAmmo(Z_Param_Out_OldMaxShotgunAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxShotgunAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxSniperAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxSniperAmmo_Parms
	{
		FGameplayAttributeData OldMaxSniperAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max SniperAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max SniperAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxSniperAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxSniperAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::NewProp_OldMaxSniperAmmo = { "OldMaxSniperAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxSniperAmmo_Parms, OldMaxSniperAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxSniperAmmo_MetaData), NewProp_OldMaxSniperAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::NewProp_OldMaxSniperAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxSniperAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::AS_Ammunition_eventOnRep_MaxSniperAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::AS_Ammunition_eventOnRep_MaxSniperAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxSniperAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxSniperAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxSniperAmmo(Z_Param_Out_OldMaxSniperAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxSniperAmmo

// Begin Class UAS_Ammunition Function OnRep_MaxUniversalAmmo
struct Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics
{
	struct AS_Ammunition_eventOnRep_MaxUniversalAmmo_Parms
	{
		FGameplayAttributeData OldMaxUniversalAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max UniversalAmmo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max UniversalAmmo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxUniversalAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxUniversalAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::NewProp_OldMaxUniversalAmmo = { "OldMaxUniversalAmmo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_Ammunition_eventOnRep_MaxUniversalAmmo_Parms, OldMaxUniversalAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxUniversalAmmo_MetaData), NewProp_OldMaxUniversalAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::NewProp_OldMaxUniversalAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_Ammunition, nullptr, "OnRep_MaxUniversalAmmo", nullptr, nullptr, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::AS_Ammunition_eventOnRep_MaxUniversalAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::AS_Ammunition_eventOnRep_MaxUniversalAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_Ammunition::execOnRep_MaxUniversalAmmo)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxUniversalAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxUniversalAmmo(Z_Param_Out_OldMaxUniversalAmmo);
	P_NATIVE_END;
}
// End Class UAS_Ammunition Function OnRep_MaxUniversalAmmo

// Begin Class UAS_Ammunition
void UAS_Ammunition::StaticRegisterNativesUAS_Ammunition()
{
	UClass* Class = UAS_Ammunition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentPistolAmmo", &UAS_Ammunition::execOnRep_CurrentPistolAmmo },
		{ "OnRep_CurrentRifleAmmo", &UAS_Ammunition::execOnRep_CurrentRifleAmmo },
		{ "OnRep_CurrentRocketAmmo", &UAS_Ammunition::execOnRep_CurrentRocketAmmo },
		{ "OnRep_CurrentShotgunAmmo", &UAS_Ammunition::execOnRep_CurrentShotgunAmmo },
		{ "OnRep_CurrentSniperAmmo", &UAS_Ammunition::execOnRep_CurrentSniperAmmo },
		{ "OnRep_CurrentUniversalAmmo", &UAS_Ammunition::execOnRep_CurrentUniversalAmmo },
		{ "OnRep_MaxPistolAmmo", &UAS_Ammunition::execOnRep_MaxPistolAmmo },
		{ "OnRep_MaxRifleAmmo", &UAS_Ammunition::execOnRep_MaxRifleAmmo },
		{ "OnRep_MaxRocketAmmo", &UAS_Ammunition::execOnRep_MaxRocketAmmo },
		{ "OnRep_MaxShotgunAmmo", &UAS_Ammunition::execOnRep_MaxShotgunAmmo },
		{ "OnRep_MaxSniperAmmo", &UAS_Ammunition::execOnRep_MaxSniperAmmo },
		{ "OnRep_MaxUniversalAmmo", &UAS_Ammunition::execOnRep_MaxUniversalAmmo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_Ammunition);
UClass* Z_Construct_UClass_UAS_Ammunition_NoRegister()
{
	return UAS_Ammunition::StaticClass();
}
struct Z_Construct_UClass_UAS_Ammunition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/AttributeSets/AS_Ammunition.h" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "Cost" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cost */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPistolAmmo_MetaData[] = {
		{ "Category", "Pistol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pistol Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pistol Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPistolAmmo_MetaData[] = {
		{ "Category", "Pistol" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRifleAmmo_MetaData[] = {
		{ "Category", "Rifle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rifle Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rifle Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRifleAmmo_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSniperAmmo_MetaData[] = {
		{ "Category", "Sniper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sniper Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sniper Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSniperAmmo_MetaData[] = {
		{ "Category", "Sniper" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShotgunAmmo_MetaData[] = {
		{ "Category", "Shotgun" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shotgun Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shotgun Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShotgunAmmo_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRocketAmmo_MetaData[] = {
		{ "Category", "Rocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rocket Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rocket Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRocketAmmo_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUniversalAmmo_MetaData[] = {
		{ "Category", "Universal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal Ammo */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUniversalAmmo_MetaData[] = {
		{ "Category", "Universal" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_Ammunition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPistolAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPistolAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRifleAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRifleAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSniperAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSniperAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentShotgunAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxShotgunAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRocketAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRocketAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentUniversalAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxUniversalAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentPistolAmmo, "OnRep_CurrentPistolAmmo" }, // 544132177
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRifleAmmo, "OnRep_CurrentRifleAmmo" }, // 660654421
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentRocketAmmo, "OnRep_CurrentRocketAmmo" }, // 535808160
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentShotgunAmmo, "OnRep_CurrentShotgunAmmo" }, // 3028255062
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentSniperAmmo, "OnRep_CurrentSniperAmmo" }, // 2435470995
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_CurrentUniversalAmmo, "OnRep_CurrentUniversalAmmo" }, // 3684924873
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxPistolAmmo, "OnRep_MaxPistolAmmo" }, // 1351864709
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRifleAmmo, "OnRep_MaxRifleAmmo" }, // 2464092848
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxRocketAmmo, "OnRep_MaxRocketAmmo" }, // 856874226
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxShotgunAmmo, "OnRep_MaxShotgunAmmo" }, // 483493384
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxSniperAmmo, "OnRep_MaxSniperAmmo" }, // 3903557487
		{ &Z_Construct_UFunction_UAS_Ammunition_OnRep_MaxUniversalAmmo, "OnRep_MaxUniversalAmmo" }, // 4189731379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_Ammunition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, Cost), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentPistolAmmo = { "CurrentPistolAmmo", "OnRep_CurrentPistolAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentPistolAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPistolAmmo_MetaData), NewProp_CurrentPistolAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxPistolAmmo = { "MaxPistolAmmo", "OnRep_MaxPistolAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxPistolAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPistolAmmo_MetaData), NewProp_MaxPistolAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentRifleAmmo = { "CurrentRifleAmmo", "OnRep_CurrentRifleAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentRifleAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRifleAmmo_MetaData), NewProp_CurrentRifleAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxRifleAmmo = { "MaxRifleAmmo", "OnRep_MaxRifleAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxRifleAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRifleAmmo_MetaData), NewProp_MaxRifleAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentSniperAmmo = { "CurrentSniperAmmo", "OnRep_CurrentSniperAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentSniperAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSniperAmmo_MetaData), NewProp_CurrentSniperAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxSniperAmmo = { "MaxSniperAmmo", "OnRep_MaxSniperAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxSniperAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSniperAmmo_MetaData), NewProp_MaxSniperAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentShotgunAmmo = { "CurrentShotgunAmmo", "OnRep_CurrentShotgunAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentShotgunAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentShotgunAmmo_MetaData), NewProp_CurrentShotgunAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxShotgunAmmo = { "MaxShotgunAmmo", "OnRep_MaxShotgunAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxShotgunAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShotgunAmmo_MetaData), NewProp_MaxShotgunAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentRocketAmmo = { "CurrentRocketAmmo", "OnRep_CurrentRocketAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentRocketAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRocketAmmo_MetaData), NewProp_CurrentRocketAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxRocketAmmo = { "MaxRocketAmmo", "OnRep_MaxRocketAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxRocketAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRocketAmmo_MetaData), NewProp_MaxRocketAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentUniversalAmmo = { "CurrentUniversalAmmo", "OnRep_CurrentUniversalAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, CurrentUniversalAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUniversalAmmo_MetaData), NewProp_CurrentUniversalAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxUniversalAmmo = { "MaxUniversalAmmo", "OnRep_MaxUniversalAmmo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_Ammunition, MaxUniversalAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUniversalAmmo_MetaData), NewProp_MaxUniversalAmmo_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_Ammunition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentPistolAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxPistolAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentRifleAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxRifleAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentSniperAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxSniperAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentShotgunAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxShotgunAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentRocketAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxRocketAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_CurrentUniversalAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_Ammunition_Statics::NewProp_MaxUniversalAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ammunition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAS_Ammunition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ammunition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_Ammunition_Statics::ClassParams = {
	&UAS_Ammunition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAS_Ammunition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ammunition_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_Ammunition_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_Ammunition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_Ammunition()
{
	if (!Z_Registration_Info_UClass_UAS_Ammunition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_Ammunition.OuterSingleton, Z_Construct_UClass_UAS_Ammunition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_Ammunition.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UAS_Ammunition>()
{
	return UAS_Ammunition::StaticClass();
}
void UAS_Ammunition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentPistolAmmo(TEXT("CurrentPistolAmmo"));
	static const FName Name_MaxPistolAmmo(TEXT("MaxPistolAmmo"));
	static const FName Name_CurrentRifleAmmo(TEXT("CurrentRifleAmmo"));
	static const FName Name_MaxRifleAmmo(TEXT("MaxRifleAmmo"));
	static const FName Name_CurrentSniperAmmo(TEXT("CurrentSniperAmmo"));
	static const FName Name_MaxSniperAmmo(TEXT("MaxSniperAmmo"));
	static const FName Name_CurrentShotgunAmmo(TEXT("CurrentShotgunAmmo"));
	static const FName Name_MaxShotgunAmmo(TEXT("MaxShotgunAmmo"));
	static const FName Name_CurrentRocketAmmo(TEXT("CurrentRocketAmmo"));
	static const FName Name_MaxRocketAmmo(TEXT("MaxRocketAmmo"));
	static const FName Name_CurrentUniversalAmmo(TEXT("CurrentUniversalAmmo"));
	static const FName Name_MaxUniversalAmmo(TEXT("MaxUniversalAmmo"));
	const bool bIsValid = true
		&& Name_CurrentPistolAmmo == ClassReps[(int32)ENetFields_Private::CurrentPistolAmmo].Property->GetFName()
		&& Name_MaxPistolAmmo == ClassReps[(int32)ENetFields_Private::MaxPistolAmmo].Property->GetFName()
		&& Name_CurrentRifleAmmo == ClassReps[(int32)ENetFields_Private::CurrentRifleAmmo].Property->GetFName()
		&& Name_MaxRifleAmmo == ClassReps[(int32)ENetFields_Private::MaxRifleAmmo].Property->GetFName()
		&& Name_CurrentSniperAmmo == ClassReps[(int32)ENetFields_Private::CurrentSniperAmmo].Property->GetFName()
		&& Name_MaxSniperAmmo == ClassReps[(int32)ENetFields_Private::MaxSniperAmmo].Property->GetFName()
		&& Name_CurrentShotgunAmmo == ClassReps[(int32)ENetFields_Private::CurrentShotgunAmmo].Property->GetFName()
		&& Name_MaxShotgunAmmo == ClassReps[(int32)ENetFields_Private::MaxShotgunAmmo].Property->GetFName()
		&& Name_CurrentRocketAmmo == ClassReps[(int32)ENetFields_Private::CurrentRocketAmmo].Property->GetFName()
		&& Name_MaxRocketAmmo == ClassReps[(int32)ENetFields_Private::MaxRocketAmmo].Property->GetFName()
		&& Name_CurrentUniversalAmmo == ClassReps[(int32)ENetFields_Private::CurrentUniversalAmmo].Property->GetFName()
		&& Name_MaxUniversalAmmo == ClassReps[(int32)ENetFields_Private::MaxUniversalAmmo].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_Ammunition"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_Ammunition);
UAS_Ammunition::~UAS_Ammunition() {}
// End Class UAS_Ammunition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_Ammunition, UAS_Ammunition::StaticClass, TEXT("UAS_Ammunition"), &Z_Registration_Info_UClass_UAS_Ammunition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_Ammunition), 4070364656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_633362390(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
