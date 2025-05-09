// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/BiggMazeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazeCharacter() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeCharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeCharacter_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_EquippedItem_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UASC_BiggMaze_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazeCharacter Function InitializeAbilities
struct Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeCharacter, nullptr, "InitializeAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABiggMazeCharacter::execInitializeAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbilities();
	P_NATIVE_END;
}
// End Class ABiggMazeCharacter Function InitializeAbilities

// Begin Class ABiggMazeCharacter Function InitializeAttributes
struct Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABiggMazeCharacter, nullptr, "InitializeAttributes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABiggMazeCharacter::execInitializeAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAttributes();
	P_NATIVE_END;
}
// End Class ABiggMazeCharacter Function InitializeAttributes

// Begin Class ABiggMazeCharacter
void ABiggMazeCharacter::StaticRegisterNativesABiggMazeCharacter()
{
	UClass* Class = ABiggMazeCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAbilities", &ABiggMazeCharacter::execInitializeAbilities },
		{ "InitializeAttributes", &ABiggMazeCharacter::execInitializeAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazeCharacter);
UClass* Z_Construct_UClass_ABiggMazeCharacter_NoRegister()
{
	return ABiggMazeCharacter::StaticClass();
}
struct Z_Construct_UClass_ABiggMazeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "BiggMaze" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BiggMazeCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ASC\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ASC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Attribute Set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItemAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equipped Item Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equipped Item Attribute Set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default abilities for this Character. These will be removed on Character death and regiven if Character respawns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItemAttributeSet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABiggMazeCharacter_InitializeAbilities, "InitializeAbilities" }, // 1460449916
		{ &Z_Construct_UFunction_ABiggMazeCharacter_InitializeAttributes, "InitializeAttributes" }, // 3661743581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, AbilitySystemComponent), Z_Construct_UClass_UASC_BiggMaze_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharAttributeSet = { "CharAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, CharAttributeSet), Z_Construct_UClass_UAS_BM_CharBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAttributeSet_MetaData), NewProp_CharAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_EquippedItemAttributeSet = { "EquippedItemAttributeSet", nullptr, (EPropertyFlags)0x01240800000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, EquippedItemAttributeSet), Z_Construct_UClass_UAS_EquippedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItemAttributeSet_MetaData), NewProp_EquippedItemAttributeSet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAbilities_MetaData), NewProp_CharacterAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_EquippedItemAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharacterAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharacterAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABiggMazeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABiggMazeCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABiggMazeCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazeCharacter_Statics::ClassParams = {
	&ABiggMazeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazeCharacter()
{
	if (!Z_Registration_Info_UClass_ABiggMazeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazeCharacter.OuterSingleton, Z_Construct_UClass_ABiggMazeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazeCharacter.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazeCharacter>()
{
	return ABiggMazeCharacter::StaticClass();
}
void ABiggMazeCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AbilitySystemComponent(TEXT("AbilitySystemComponent"));
	static const FName Name_CharAttributeSet(TEXT("CharAttributeSet"));
	static const FName Name_EquippedItemAttributeSet(TEXT("EquippedItemAttributeSet"));
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_CharAttributeSet == ClassReps[(int32)ENetFields_Private::CharAttributeSet].Property->GetFName()
		&& Name_EquippedItemAttributeSet == ClassReps[(int32)ENetFields_Private::EquippedItemAttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABiggMazeCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazeCharacter);
ABiggMazeCharacter::~ABiggMazeCharacter() {}
// End Class ABiggMazeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazeCharacter, ABiggMazeCharacter::StaticClass, TEXT("ABiggMazeCharacter"), &Z_Registration_Info_UClass_ABiggMazeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazeCharacter), 3657450592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_3745514709(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
