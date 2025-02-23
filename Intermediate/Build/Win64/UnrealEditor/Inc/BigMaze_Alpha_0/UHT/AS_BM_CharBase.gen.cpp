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

// Begin Class UAS_BM_CharBase Function OnRep_CurrentLevel
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics
{
	struct AS_BM_CharBase_eventOnRep_CurrentLevel_Parms
	{
		FGameplayAttributeData OldCurrentLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leveling Attributes */// Current Level\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leveling Attributes // Current Level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::NewProp_OldCurrentLevel = { "OldCurrentLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_CurrentLevel_Parms, OldCurrentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentLevel_MetaData), NewProp_OldCurrentLevel_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::NewProp_OldCurrentLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_CurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::AS_BM_CharBase_eventOnRep_CurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::AS_BM_CharBase_eventOnRep_CurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_CurrentLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentLevel(Z_Param_Out_OldCurrentLevel);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_CurrentLevel

// Begin Class UAS_BM_CharBase Function OnRep_CurrentStamina
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics
{
	struct AS_BM_CharBase_eventOnRep_CurrentStamina_Parms
	{
		FGameplayAttributeData OldCurrentStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stamina Attributes */// Current Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina Attributes // Current Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::NewProp_OldCurrentStamina = { "OldCurrentStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_CurrentStamina_Parms, OldCurrentStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentStamina_MetaData), NewProp_OldCurrentStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::NewProp_OldCurrentStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_CurrentStamina", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::AS_BM_CharBase_eventOnRep_CurrentStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::AS_BM_CharBase_eventOnRep_CurrentStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_CurrentStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentStamina(Z_Param_Out_OldCurrentStamina);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_CurrentStamina

// Begin Class UAS_BM_CharBase Function OnRep_CurrentXP
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics
{
	struct AS_BM_CharBase_eventOnRep_CurrentXP_Parms
	{
		FGameplayAttributeData OldCurrentXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current XP owned by the character\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current XP owned by the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentXP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::NewProp_OldCurrentXP = { "OldCurrentXP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_CurrentXP_Parms, OldCurrentXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentXP_MetaData), NewProp_OldCurrentXP_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::NewProp_OldCurrentXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_CurrentXP", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::AS_BM_CharBase_eventOnRep_CurrentXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::AS_BM_CharBase_eventOnRep_CurrentXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_CurrentXP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentXP(Z_Param_Out_OldCurrentXP);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_CurrentXP

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

// Begin Class UAS_BM_CharBase Function OnRep_MaxStamina
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics
{
	struct AS_BM_CharBase_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::AS_BM_CharBase_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::AS_BM_CharBase_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_MaxStamina

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

// Begin Class UAS_BM_CharBase Function OnRep_RegenStamina
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics
{
	struct AS_BM_CharBase_eventOnRep_RegenStamina_Parms
	{
		FGameplayAttributeData OldRegenStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Regen Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regen Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRegenStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldRegenStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::NewProp_OldRegenStamina = { "OldRegenStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_RegenStamina_Parms, OldRegenStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRegenStamina_MetaData), NewProp_OldRegenStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::NewProp_OldRegenStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_RegenStamina", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::AS_BM_CharBase_eventOnRep_RegenStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::AS_BM_CharBase_eventOnRep_RegenStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_RegenStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRegenStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RegenStamina(Z_Param_Out_OldRegenStamina);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_RegenStamina

// Begin Class UAS_BM_CharBase Function OnRep_XPRequired
struct Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics
{
	struct AS_BM_CharBase_eventOnRep_XPRequired_Parms
	{
		FGameplayAttributeData OldXPRequired;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XP required to level up\n" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XP required to level up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldXPRequired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldXPRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::NewProp_OldXPRequired = { "OldXPRequired", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_BM_CharBase_eventOnRep_XPRequired_Parms, OldXPRequired), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldXPRequired_MetaData), NewProp_OldXPRequired_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::NewProp_OldXPRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAS_BM_CharBase, nullptr, "OnRep_XPRequired", nullptr, nullptr, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::AS_BM_CharBase_eventOnRep_XPRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::AS_BM_CharBase_eventOnRep_XPRequired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAS_BM_CharBase::execOnRep_XPRequired)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldXPRequired);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_XPRequired(Z_Param_Out_OldXPRequired);
	P_NATIVE_END;
}
// End Class UAS_BM_CharBase Function OnRep_XPRequired

// Begin Class UAS_BM_CharBase
void UAS_BM_CharBase::StaticRegisterNativesUAS_BM_CharBase()
{
	UClass* Class = UAS_BM_CharBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentHealth", &UAS_BM_CharBase::execOnRep_CurrentHealth },
		{ "OnRep_CurrentLevel", &UAS_BM_CharBase::execOnRep_CurrentLevel },
		{ "OnRep_CurrentStamina", &UAS_BM_CharBase::execOnRep_CurrentStamina },
		{ "OnRep_CurrentXP", &UAS_BM_CharBase::execOnRep_CurrentXP },
		{ "OnRep_MaxHealth", &UAS_BM_CharBase::execOnRep_MaxHealth },
		{ "OnRep_MaxStamina", &UAS_BM_CharBase::execOnRep_MaxStamina },
		{ "OnRep_RegenHealth", &UAS_BM_CharBase::execOnRep_RegenHealth },
		{ "OnRep_RegenStamina", &UAS_BM_CharBase::execOnRep_RegenStamina },
		{ "OnRep_XPRequired", &UAS_BM_CharBase::execOnRep_XPRequired },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stamina Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Leveling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Leveling Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leveling Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XPRequired_MetaData[] = {
		{ "Category", "Leveling" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Leveling" },
		{ "ModuleRelativePath", "Public/GASFramework/AttributeSets/AS_BM_CharBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegenHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegenStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XPRequired;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 870166351
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentLevel, "OnRep_CurrentLevel" }, // 791291915
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentStamina, "OnRep_CurrentStamina" }, // 1381055949
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_CurrentXP, "OnRep_CurrentXP" }, // 1273463962
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1995616932
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 777141958
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenHealth, "OnRep_RegenHealth" }, // 1063913235
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_RegenStamina, "OnRep_RegenStamina" }, // 2187748297
		{ &Z_Construct_UFunction_UAS_BM_CharBase_OnRep_XPRequired, "OnRep_XPRequired" }, // 194785518
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentStamina = { "CurrentStamina", "OnRep_CurrentStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, CurrentStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_RegenStamina = { "RegenStamina", "OnRep_RegenStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, RegenStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenStamina_MetaData), NewProp_RegenStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentLevel = { "CurrentLevel", "OnRep_CurrentLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, CurrentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_XPRequired = { "XPRequired", "OnRep_XPRequired", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, XPRequired), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XPRequired_MetaData), NewProp_XPRequired_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentXP = { "CurrentXP", "OnRep_CurrentXP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAS_BM_CharBase, CurrentXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAS_BM_CharBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_RegenHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_RegenStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_XPRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAS_BM_CharBase_Statics::NewProp_CurrentXP,
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
	static const FName Name_CurrentStamina(TEXT("CurrentStamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_RegenStamina(TEXT("RegenStamina"));
	static const FName Name_CurrentLevel(TEXT("CurrentLevel"));
	static const FName Name_XPRequired(TEXT("XPRequired"));
	static const FName Name_CurrentXP(TEXT("CurrentXP"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_RegenHealth == ClassReps[(int32)ENetFields_Private::RegenHealth].Property->GetFName()
		&& Name_CurrentStamina == ClassReps[(int32)ENetFields_Private::CurrentStamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_RegenStamina == ClassReps[(int32)ENetFields_Private::RegenStamina].Property->GetFName()
		&& Name_CurrentLevel == ClassReps[(int32)ENetFields_Private::CurrentLevel].Property->GetFName()
		&& Name_XPRequired == ClassReps[(int32)ENetFields_Private::XPRequired].Property->GetFName()
		&& Name_CurrentXP == ClassReps[(int32)ENetFields_Private::CurrentXP].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAS_BM_CharBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_BM_CharBase);
UAS_BM_CharBase::~UAS_BM_CharBase() {}
// End Class UAS_BM_CharBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_BM_CharBase, UAS_BM_CharBase::StaticClass, TEXT("UAS_BM_CharBase"), &Z_Registration_Info_UClass_UAS_BM_CharBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_BM_CharBase), 2861602741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_712437909(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_BM_CharBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
