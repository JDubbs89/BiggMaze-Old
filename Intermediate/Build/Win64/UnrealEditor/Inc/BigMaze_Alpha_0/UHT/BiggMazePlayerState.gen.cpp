// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/Player/BiggMazePlayerState.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazePlayerState() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerState();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerState_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ammunition_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_Ingredients_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UASC_BiggMaze_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazePlayerState Function OnCurrentHealthChanged
struct BiggMazePlayerState_eventOnCurrentHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentHealthChanged = FName(TEXT("OnCurrentHealthChanged"));
void ABiggMazePlayerState::OnCurrentHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Attributes */// CurrentHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentHealthChanged

// Begin Class ABiggMazePlayerState Function OnCurrentLevelChanged
struct BiggMazePlayerState_eventOnCurrentLevelChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentLevelChanged = FName(TEXT("OnCurrentLevelChanged"));
void ABiggMazePlayerState::OnCurrentLevelChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentLevelChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentLevelChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leveling Attributes */// CurrentLevel\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentLevelChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentLevelChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentLevelChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentLevelChanged

// Begin Class ABiggMazePlayerState Function OnCurrentPistolAmmoChanged
struct BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentPistolAmmoChanged = FName(TEXT("OnCurrentPistolAmmoChanged"));
void ABiggMazePlayerState::OnCurrentPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pistol Ammo Attributes */// Current Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentPistolAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentRifleAmmoChanged
struct BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentRifleAmmoChanged = FName(TEXT("OnCurrentRifleAmmoChanged"));
void ABiggMazePlayerState::OnCurrentRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rifle Ammo Attributes */// Current Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentRifleAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentRocketAmmoChanged
struct BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentRocketAmmoChanged = FName(TEXT("OnCurrentRocketAmmoChanged"));
void ABiggMazePlayerState::OnCurrentRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rocket Ammo Attributes */// Current Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentRocketAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentShotgunAmmoChanged
struct BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged = FName(TEXT("OnCurrentShotgunAmmoChanged"));
void ABiggMazePlayerState::OnCurrentShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shotgun Ammo Attributes */// Current Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentShotgunAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentSniperAmmoChanged
struct BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentSniperAmmoChanged = FName(TEXT("OnCurrentSniperAmmoChanged"));
void ABiggMazePlayerState::OnCurrentSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sniper Ammo Attributes */// Current Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentSniperAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentStaminaChanged
struct BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentStaminaChanged = FName(TEXT("OnCurrentStaminaChanged"));
void ABiggMazePlayerState::OnCurrentStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stamina Attributes */// CurrentStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentStaminaChanged

// Begin Class ABiggMazePlayerState Function OnCurrentUniversalAmmoChanged
struct BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged = FName(TEXT("OnCurrentUniversalAmmoChanged"));
void ABiggMazePlayerState::OnCurrentUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal Ammo Attributes */// Current Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentUniversalAmmoChanged

// Begin Class ABiggMazePlayerState Function OnCurrentXPChanged
struct BiggMazePlayerState_eventOnCurrentXPChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnCurrentXPChanged = FName(TEXT("OnCurrentXPChanged"));
void ABiggMazePlayerState::OnCurrentXPChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnCurrentXPChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnCurrentXPChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CurrentXP\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentXPChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnCurrentXPChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnCurrentXPChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnCurrentXPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnCurrentXPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnCurrentXPChanged

// Begin Class ABiggMazePlayerState Function OnMaxHealthChanged
struct BiggMazePlayerState_eventOnMaxHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxHealthChanged = FName(TEXT("OnMaxHealthChanged"));
void ABiggMazePlayerState::OnMaxHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxHealthChanged

// Begin Class ABiggMazePlayerState Function OnMaxPistolAmmoChanged
struct BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxPistolAmmoChanged = FName(TEXT("OnMaxPistolAmmoChanged"));
void ABiggMazePlayerState::OnMaxPistolAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxPistolAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pistol Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Pistol Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxPistolAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxPistolAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxPistolAmmoChanged

// Begin Class ABiggMazePlayerState Function OnMaxRifleAmmoChanged
struct BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxRifleAmmoChanged = FName(TEXT("OnMaxRifleAmmoChanged"));
void ABiggMazePlayerState::OnMaxRifleAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxRifleAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rifle Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rifle Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxRifleAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxRifleAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxRifleAmmoChanged

// Begin Class ABiggMazePlayerState Function OnMaxRocketAmmoChanged
struct BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxRocketAmmoChanged = FName(TEXT("OnMaxRocketAmmoChanged"));
void ABiggMazePlayerState::OnMaxRocketAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxRocketAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rocket Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Rocket Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxRocketAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxRocketAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxRocketAmmoChanged

// Begin Class ABiggMazePlayerState Function OnMaxShotgunAmmoChanged
struct BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxShotgunAmmoChanged = FName(TEXT("OnMaxShotgunAmmoChanged"));
void ABiggMazePlayerState::OnMaxShotgunAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxShotgunAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shotgun Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Shotgun Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxShotgunAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxShotgunAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxShotgunAmmoChanged

// Begin Class ABiggMazePlayerState Function OnMaxSniperAmmoChanged
struct BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxSniperAmmoChanged = FName(TEXT("OnMaxSniperAmmoChanged"));
void ABiggMazePlayerState::OnMaxSniperAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxSniperAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sniper Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Sniper Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxSniperAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxSniperAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxSniperAmmoChanged

// Begin Class ABiggMazePlayerState Function OnMaxStaminaChanged
struct BiggMazePlayerState_eventOnMaxStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxStaminaChanged = FName(TEXT("OnMaxStaminaChanged"));
void ABiggMazePlayerState::OnMaxStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxStaminaChanged

// Begin Class ABiggMazePlayerState Function OnMaxUniversalAmmoChanged
struct BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnMaxUniversalAmmoChanged = FName(TEXT("OnMaxUniversalAmmoChanged"));
void ABiggMazePlayerState::OnMaxUniversalAmmoChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnMaxUniversalAmmoChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Universal Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Universal Ammo\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnMaxUniversalAmmoChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnMaxUniversalAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnMaxUniversalAmmoChanged

// Begin Class ABiggMazePlayerState Function OnRegenHealthChanged
struct BiggMazePlayerState_eventOnRegenHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnRegenHealthChanged = FName(TEXT("OnRegenHealthChanged"));
void ABiggMazePlayerState::OnRegenHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnRegenHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnRegenHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnRegenHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnRegenHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnRegenHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnRegenHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnRegenHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnRegenHealthChanged

// Begin Class ABiggMazePlayerState Function OnRegenStaminaChanged
struct BiggMazePlayerState_eventOnRegenStaminaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnRegenStaminaChanged = FName(TEXT("OnRegenStaminaChanged"));
void ABiggMazePlayerState::OnRegenStaminaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnRegenStaminaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnRegenStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RegenStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnRegenStaminaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnRegenStaminaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnRegenStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnRegenStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnRegenStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnRegenStaminaChanged

// Begin Class ABiggMazePlayerState Function OnXPRequiredChanged
struct BiggMazePlayerState_eventOnXPRequiredChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ABiggMazePlayerState_OnXPRequiredChanged = FName(TEXT("OnXPRequiredChanged"));
void ABiggMazePlayerState::OnXPRequiredChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	BiggMazePlayerState_eventOnXPRequiredChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ABiggMazePlayerState_OnXPRequiredChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XPRequired\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnXPRequiredChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiggMazePlayerState_eventOnXPRequiredChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazePlayerState, nullptr, "OnXPRequiredChanged", nullptr, nullptr, Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::PropPointers), sizeof(BiggMazePlayerState_eventOnXPRequiredChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(BiggMazePlayerState_eventOnXPRequiredChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABiggMazePlayerState Function OnXPRequiredChanged

// Begin Class ABiggMazePlayerState
void ABiggMazePlayerState::StaticRegisterNativesABiggMazePlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazePlayerState);
UClass* Z_Construct_UClass_ABiggMazePlayerState_NoRegister()
{
	return ABiggMazePlayerState::StaticClass();
}
struct Z_Construct_UClass_ABiggMazePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/Player/BiggMazePlayerState.h" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ASC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ASC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IngredientAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IngredientAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentHealthChanged, "OnCurrentHealthChanged" }, // 2373994233
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentLevelChanged, "OnCurrentLevelChanged" }, // 3968438268
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentPistolAmmoChanged, "OnCurrentPistolAmmoChanged" }, // 2960105727
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRifleAmmoChanged, "OnCurrentRifleAmmoChanged" }, // 589069124
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentRocketAmmoChanged, "OnCurrentRocketAmmoChanged" }, // 1421733809
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentShotgunAmmoChanged, "OnCurrentShotgunAmmoChanged" }, // 2685725810
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentSniperAmmoChanged, "OnCurrentSniperAmmoChanged" }, // 1379736848
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentStaminaChanged, "OnCurrentStaminaChanged" }, // 1981986848
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentUniversalAmmoChanged, "OnCurrentUniversalAmmoChanged" }, // 4221130650
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnCurrentXPChanged, "OnCurrentXPChanged" }, // 1270865614
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxHealthChanged, "OnMaxHealthChanged" }, // 1118374484
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxPistolAmmoChanged, "OnMaxPistolAmmoChanged" }, // 1504529955
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRifleAmmoChanged, "OnMaxRifleAmmoChanged" }, // 3986816166
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxRocketAmmoChanged, "OnMaxRocketAmmoChanged" }, // 3364955087
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxShotgunAmmoChanged, "OnMaxShotgunAmmoChanged" }, // 2932389200
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxSniperAmmoChanged, "OnMaxSniperAmmoChanged" }, // 602926113
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxStaminaChanged, "OnMaxStaminaChanged" }, // 396277409
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnMaxUniversalAmmoChanged, "OnMaxUniversalAmmoChanged" }, // 1645755178
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnRegenHealthChanged, "OnRegenHealthChanged" }, // 3847552507
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnRegenStaminaChanged, "OnRegenStaminaChanged" }, // 2823198625
		{ &Z_Construct_UFunction_ABiggMazePlayerState_OnXPRequiredChanged, "OnXPRequiredChanged" }, // 931270528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazePlayerState, AbilitySystemComponent), Z_Construct_UClass_UASC_BiggMaze_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_AmmoAttributeSet = { "AmmoAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazePlayerState, AmmoAttributeSet), Z_Construct_UClass_UAS_Ammunition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoAttributeSet_MetaData), NewProp_AmmoAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_IngredientAttributeSet = { "IngredientAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazePlayerState, IngredientAttributeSet), Z_Construct_UClass_UAS_Ingredients_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IngredientAttributeSet_MetaData), NewProp_IngredientAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABiggMazePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_AmmoAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazePlayerState_Statics::NewProp_IngredientAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABiggMazePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABiggMazePlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABiggMazePlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazePlayerState_Statics::ClassParams = {
	&ABiggMazePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABiggMazePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazePlayerState()
{
	if (!Z_Registration_Info_UClass_ABiggMazePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazePlayerState.OuterSingleton, Z_Construct_UClass_ABiggMazePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazePlayerState.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazePlayerState>()
{
	return ABiggMazePlayerState::StaticClass();
}
void ABiggMazePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AbilitySystemComponent(TEXT("AbilitySystemComponent"));
	static const FName Name_AmmoAttributeSet(TEXT("AmmoAttributeSet"));
	static const FName Name_IngredientAttributeSet(TEXT("IngredientAttributeSet"));
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_AmmoAttributeSet == ClassReps[(int32)ENetFields_Private::AmmoAttributeSet].Property->GetFName()
		&& Name_IngredientAttributeSet == ClassReps[(int32)ENetFields_Private::IngredientAttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABiggMazePlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazePlayerState);
ABiggMazePlayerState::~ABiggMazePlayerState() {}
// End Class ABiggMazePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazePlayerState, ABiggMazePlayerState::StaticClass, TEXT("ABiggMazePlayerState"), &Z_Registration_Info_UClass_ABiggMazePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazePlayerState), 3911714539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_3915776422(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
