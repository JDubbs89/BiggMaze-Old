// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_BM_CharBase() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UAS_BM_CharBase Function OnRep_CurrentHealth
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics
{
	struct AS_BM_CharBase_eventOnRep_CurrentHealth_Parms
	{
		FGameplayAttributeData OldCurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Attributes */// Current Health\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attributes // Current Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::NewProp_OldCurrentHealth = { "OldCurrentHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_CurrentHealth_Parms, OldCurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentHealth_MetaData), NewProp_OldCurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::NewProp_OldCurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::AS_BM_CharBase_eventOnRep_CurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::AS_BM_CharBase_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_CurrentHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_Out_OldCurrentHealth);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_CurrentHealth

// Begin Class UAS_BM_CharBase Function OnRep_MaxHealth
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics
{
	struct AS_BM_CharBase_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Health\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::AS_BM_CharBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::AS_BM_CharBase_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_MaxHealth

// Begin Class UAS_BM_CharBase Function OnRep_RegenHealth
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics
{
	struct AS_BM_CharBase_eventOnRep_RegenHealth_Parms
	{
		FGameplayAttributeData OldRegenHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Regen Health\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regen Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRegenHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldRegenHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::NewProp_OldRegenHealth = { "OldRegenHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_RegenHealth_Parms, OldRegenHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRegenHealth_MetaData), NewProp_OldRegenHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::NewProp_OldRegenHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_RegenHealth", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::AS_BM_CharBase_eventOnRep_RegenHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::AS_BM_CharBase_eventOnRep_RegenHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_RegenHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRegenHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RegenHealth(Z_Param_Out_OldRegenHealth);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_RegenHealth

// Begin Class UAS_BM_CharBase
void UAS_BM_CharBase::StaticRegisterNativesUAS_BM_CharBase()
{
	UClass* Class = UAS_BM_CharBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentHealth", &UAS_BM_CharBase::execOnRep_CurrentHealth },
		{ "OnRep_MaxHealth", &UAS_BM_CharBase::execOnRep_MaxHealth },
		{ "OnRep_RegenHealth", &UAS_BM_CharBase::execOnRep_RegenHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_BM_CharBase);
UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister()
{
	return UAS_BM_CharBase::StaticClass();
}
struct Z_Construct_UClass_UAS_BM_CharBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/AttributeSets/AS_BM_CharBase.h" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage */// Damage is a meta attribute used by the damage execution to calculate final damage\n// This value only exists on the server\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage // Damage is a meta attribute used by the damage execution to calculate final damage\n// This value only exists on the server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegenHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 870166351
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1995616932
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth, "OnRep_RegenHealth" }, // 1063913235
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_BM_CharBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_RegenHealth = { "RegenHealth", "OnRep_RegenHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, RegenHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenHealth_MetaData), NewProp_RegenHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_BM_CharBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_RegenHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAS_BM_CharBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_BM_CharBase_Statics::ClassParams = {
	&UAS_BM_CharBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAS_BM_CharBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_BM_CharBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_BM_CharBase()
{
	if (!Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton, Z_Construct_UClass_UAS_BM_CharBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UAS_BM_CharBase>()
{
	return UAS_BM_CharBase::StaticClass();
}
void UAS_BM_CharBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_RegenHealth(TEXT("RegenHealth"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_RegenHealth == ClassReps[(int32)ENetFields_Private::RegenHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_BM_CharBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_BM_CharBase);
UAS_BM_CharBase::~UAS_BM_CharBase() {}
// End Class UAS_BM_CharBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_BM_CharBase, UAS_BM_CharBase::StaticClass, TEXT("UAS_BM_CharBase"), &Z_Registration_Info_UClass_UAS_BM_CharBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_BM_CharBase), 1713343427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_264304707(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
