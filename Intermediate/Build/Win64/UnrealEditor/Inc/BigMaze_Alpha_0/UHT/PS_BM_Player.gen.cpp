// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/PS_BM_Player.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS_BM_Player() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player_NoRegister();
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
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
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

// Begin Class APS_BM_Player Function OnDamageChanged
struct PS_BM_Player_eventOnDamageChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_APS_BM_Player_OnDamageChanged = FName(TEXT("OnDamageChanged"));
void APS_BM_Player::OnDamageChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	PS_BM_Player_eventOnDamageChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_APS_BM_Player_OnDamageChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage */" },
#endif
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnDamageChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PS_BM_Player_eventOnDamageChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APS_BM_Player, nullptr, "OnDamageChanged", nullptr, nullptr, Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::PropPointers), sizeof(PS_BM_Player_eventOnDamageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(PS_BM_Player_eventOnDamageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APS_BM_Player_OnDamageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APS_BM_Player_OnDamageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APS_BM_Player Function OnDamageChanged

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
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
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
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
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
		{ "IncludePath", "PS_BM_Player.h" },
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ASC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
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
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APS_BM_Player_OnCurrentHealthChanged, "OnCurrentHealthChanged" }, // 1074449395
		{ &Z_Construct_UFunction_APS_BM_Player_OnDamageChanged, "OnDamageChanged" }, // 1800166487
		{ &Z_Construct_UFunction_APS_BM_Player_OnMaxHealthChanged, "OnMaxHealthChanged" }, // 3741087320
		{ &Z_Construct_UFunction_APS_BM_Player_OnRegenHealthChanged, "OnRegenHealthChanged" }, // 2015947058
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APS_BM_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APS_BM_Player_Statics::NewProp_AttributeSet,
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
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_AttributeSet == ClassReps[(int32)ENetFields_Private::AttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APS_BM_Player"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APS_BM_Player);
APS_BM_Player::~APS_BM_Player() {}
// End Class APS_BM_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APS_BM_Player, APS_BM_Player::StaticClass, TEXT("APS_BM_Player"), &Z_Registration_Info_UClass_APS_BM_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APS_BM_Player), 1539836638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_2440564841(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
