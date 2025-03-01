// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/Player/PS_BM_Player.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS_BM_Player() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ammunition_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class APS_BM_Player Function OnCurrentHealthChanged
struct PS_BM_Player_eventOnCurrentHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentHealthChanged = FName(TEXT("OnCurrentHealthChanged"));
void APS_BM_Player::OnCurrentHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Attributes */// CurrentHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentHealthChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentHealthChanged

// Begin Class APS_BM_Player Function OnCurrentLevelChanged
struct PS_BM_Player_eventOnCurrentLevelChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentLevelChanged = FName(TEXT("OnCurrentLevelChanged"));
void APS_BM_Player::OnCurrentLevelChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentLevelChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentLevelChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leveling Attributes */// CurrentLevel\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentLevelChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentLevelChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentLevelChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentLevelChanged

// Begin Class APS_BM_Player Function OnCurrentPistolAmmoChanged
struct PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentPistolAmmoChanged = FName(TEXT("OnCurrentPistolAmmoChanged"));
void APS_BM_Player::OnCurrentPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pistol Ammo Attributes */// Current Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentPistolAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentRifleAmmoChanged
struct PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentRifleAmmoChanged = FName(TEXT("OnCurrentRifleAmmoChanged"));
void APS_BM_Player::OnCurrentRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rifle Ammo Attributes */// Current Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentRifleAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentRocketAmmoChanged
struct PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentRocketAmmoChanged = FName(TEXT("OnCurrentRocketAmmoChanged"));
void APS_BM_Player::OnCurrentRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rocket Ammo Attributes */// Current Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentRocketAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentShotgunAmmoChanged
struct PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentShotgunAmmoChanged = FName(TEXT("OnCurrentShotgunAmmoChanged"));
void APS_BM_Player::OnCurrentShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shotgun Ammo Attributes */// Current Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentShotgunAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentSniperAmmoChanged
struct PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentSniperAmmoChanged = FName(TEXT("OnCurrentSniperAmmoChanged"));
void APS_BM_Player::OnCurrentSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sniper Ammo Attributes */// Current Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentSniperAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentStaminaChanged
struct PS_BM_Player_eventOnCurrentStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentStaminaChanged = FName(TEXT("OnCurrentStaminaChanged"));
void APS_BM_Player::OnCurrentStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stamina Attributes */// CurrentStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentStaminaChanged

// Begin Class APS_BM_Player Function OnCurrentUniversalAmmoChanged
struct PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentUniversalAmmoChanged = FName(TEXT("OnCurrentUniversalAmmoChanged"));
void APS_BM_Player::OnCurrentUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal Ammo Attributes */// Current Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentUniversalAmmoChanged

// Begin Class APS_BM_Player Function OnCurrentXPChanged
struct PS_BM_Player_eventOnCurrentXPChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnCurrentXPChanged = FName(TEXT("OnCurrentXPChanged"));
void APS_BM_Player::OnCurrentXPChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnCurrentXPChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnCurrentXPChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CurrentXP\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentXPChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnCurrentXPChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnCurrentXPChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnCurrentXPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnCurrentXPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnCurrentXPChanged

// Begin Class APS_BM_Player Function OnMaxHealthChanged
struct PS_BM_Player_eventOnMaxHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxHealthChanged = FName(TEXT("OnMaxHealthChanged"));
void APS_BM_Player::OnMaxHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxHealthChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxHealthChanged

// Begin Class APS_BM_Player Function OnMaxPistolAmmoChanged
struct PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxPistolAmmoChanged = FName(TEXT("OnMaxPistolAmmoChanged"));
void APS_BM_Player::OnMaxPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxPistolAmmoChanged

// Begin Class APS_BM_Player Function OnMaxRifleAmmoChanged
struct PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxRifleAmmoChanged = FName(TEXT("OnMaxRifleAmmoChanged"));
void APS_BM_Player::OnMaxRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxRifleAmmoChanged

// Begin Class APS_BM_Player Function OnMaxRocketAmmoChanged
struct PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxRocketAmmoChanged = FName(TEXT("OnMaxRocketAmmoChanged"));
void APS_BM_Player::OnMaxRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxRocketAmmoChanged

// Begin Class APS_BM_Player Function OnMaxShotgunAmmoChanged
struct PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxShotgunAmmoChanged = FName(TEXT("OnMaxShotgunAmmoChanged"));
void APS_BM_Player::OnMaxShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxShotgunAmmoChanged

// Begin Class APS_BM_Player Function OnMaxSniperAmmoChanged
struct PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxSniperAmmoChanged = FName(TEXT("OnMaxSniperAmmoChanged"));
void APS_BM_Player::OnMaxSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxSniperAmmoChanged

// Begin Class APS_BM_Player Function OnMaxStaminaChanged
struct PS_BM_Player_eventOnMaxStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxStaminaChanged = FName(TEXT("OnMaxStaminaChanged"));
void APS_BM_Player::OnMaxStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxStaminaChanged

// Begin Class APS_BM_Player Function OnMaxUniversalAmmoChanged
struct PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnMaxUniversalAmmoChanged = FName(TEXT("OnMaxUniversalAmmoChanged"));
void APS_BM_Player::OnMaxUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnMaxUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnMaxUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnMaxUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnMaxUniversalAmmoChanged

// Begin Class APS_BM_Player Function OnRegenHealthChanged
struct PS_BM_Player_eventOnRegenHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnRegenHealthChanged = FName(TEXT("OnRegenHealthChanged"));
void APS_BM_Player::OnRegenHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnRegenHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnRegenHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnRegenHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnRegenHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnRegenHealthChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnRegenHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnRegenHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnRegenHealthChanged

// Begin Class APS_BM_Player Function OnRegenStaminaChanged
struct PS_BM_Player_eventOnRegenStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnRegenStaminaChanged = FName(TEXT("OnRegenStaminaChanged"));
void APS_BM_Player::OnRegenStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnRegenStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnRegenStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnRegenStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnRegenStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnRegenStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnRegenStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnRegenStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnRegenStaminaChanged

// Begin Class APS_BM_Player Function OnXPRequiredChanged
struct PS_BM_Player_eventOnXPRequiredChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnXPRequiredChanged = FName(TEXT("OnXPRequiredChanged"));
void APS_BM_Player::OnXPRequiredChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnXPRequiredChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnXPRequiredChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XPRequired\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnXPRequiredChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnXPRequiredChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnXPRequiredChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnXPRequiredChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnXPRequiredChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnXPRequiredChanged

// Begin Class APS_BM_Player
void APS_BM_Player::StaticRegisterNativesAPS_BM_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APS_BM_Player);
UClass* Z_Construct_UClass_APS_BM_Player_NoRegister()
{
	return APS_BM_Player::StaticClass();
}
struct Z_Construct_UClass_APS_BM_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GASFramework/Player/PS_BM_Player.h" },
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ASC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ASC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GASFramework/Player/PS_BM_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged, "OnCurrentHealthChanged" }, // 2406269892
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentLevelChanged, "OnCurrentLevelChanged" }, // 2005892375
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentPistolAmmoChanged, "OnCurrentPistolAmmoChanged" }, // 2297839896
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentRifleAmmoChanged, "OnCurrentRifleAmmoChanged" }, // 2016628796
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentRocketAmmoChanged, "OnCurrentRocketAmmoChanged" }, // 4006078332
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentShotgunAmmoChanged, "OnCurrentShotgunAmmoChanged" }, // 2600456633
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentSniperAmmoChanged, "OnCurrentSniperAmmoChanged" }, // 1095347568
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentStaminaChanged, "OnCurrentStaminaChanged" }, // 1149543601
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentUniversalAmmoChanged, "OnCurrentUniversalAmmoChanged" }, // 2878278389
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentXPChanged, "OnCurrentXPChanged" }, // 769158684
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged, "OnMaxHealthChanged" }, // 2349713711
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxPistolAmmoChanged, "OnMaxPistolAmmoChanged" }, // 1242849948
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxRifleAmmoChanged, "OnMaxRifleAmmoChanged" }, // 1506836035
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxRocketAmmoChanged, "OnMaxRocketAmmoChanged" }, // 2435336584
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxShotgunAmmoChanged, "OnMaxShotgunAmmoChanged" }, // 3705721439
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxSniperAmmoChanged, "OnMaxSniperAmmoChanged" }, // 1619438916
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxStaminaChanged, "OnMaxStaminaChanged" }, // 2049454513
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxUniversalAmmoChanged, "OnMaxUniversalAmmoChanged" }, // 367079487
		{ &Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged, "OnRegenHealthChanged" }, // 3470008681
		{ &Z_Construct_UFunction_APS_BM_Player_OnRegenStaminaChanged, "OnRegenStaminaChanged" }, // 3389960391
		{ &Z_Construct_UFunction_APS_BM_Player_OnXPRequiredChanged, "OnXPRequiredChanged" }, // 3107774642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APS_BM_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APS_BM_Player, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APS_BM_Player, AttributeSet), Z_Construct_UClass_UAS_BM_CharBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AmmoAttributeSet = { "AmmoAttributeSet", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APS_BM_Player, AmmoAttributeSet), Z_Construct_UClass_UAS_Ammunition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoAttributeSet_MetaData), NewProp_AmmoAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APS_BM_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AmmoAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APS_BM_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APS_BM_Player_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APS_BM_Player, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APS_BM_Player_Statics::ClassParams = {
	&APS_BM_Player::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APS_BM_Player_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_APS_BM_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APS_BM_Player()
{
	if (!Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton, Z_Construct_UClass_APS_BM_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<APS_BM_Player>()
{
	return APS_BM_Player::StaticClass();
}
void APS_BM_Player::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AbilitySystemComponent(TEXT("AbilitySystemComponent"));
	static const FName Name_AttributeSet(TEXT("AttributeSet"));
	static const FName Name_AmmoAttributeSet(TEXT("AmmoAttributeSet"));
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_AttributeSet == ClassReps[(int32)ENetFields_Private::AttributeSet].Property->GetFName()
		&& Name_AmmoAttributeSet == ClassReps[(int32)ENetFields_Private::AmmoAttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APS_BM_Player"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APS_BM_Player);
APS_BM_Player::~APS_BM_Player() {}
// End Class APS_BM_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Player_PS_BM_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APS_BM_Player, APS_BM_Player::StaticClass, TEXT("APS_BM_Player"), &Z_Registration_Info_UClass_APS_BM_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APS_BM_Player), 3715161899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Player_PS_BM_Player_h_3841356978(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Player_PS_BM_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Player_PS_BM_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
