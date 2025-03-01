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
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UASC_BiggMaze_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazeCharacter
void ABiggMazeCharacter::StaticRegisterNativesABiggMazeCharacter()
{
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
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character Attribute Set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BiggMazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Attribute Set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, AbilitySystemComponent), Z_Construct_UClass_UASC_BiggMaze_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharAttributeSet = { "CharAttributeSet", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABiggMazeCharacter, CharAttributeSet), Z_Construct_UClass_UAS_BM_CharBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAttributeSet_MetaData), NewProp_CharAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABiggMazeCharacter_Statics::NewProp_CharAttributeSet,
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
	nullptr,
	Z_Construct_UClass_ABiggMazeCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_CharAttributeSet == ClassReps[(int32)ENetFields_Private::CharAttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABiggMazeCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazeCharacter);
ABiggMazeCharacter::~ABiggMazeCharacter() {}
// End Class ABiggMazeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazeCharacter, ABiggMazeCharacter::StaticClass, TEXT("ABiggMazeCharacter"), &Z_Registration_Info_UClass_ABiggMazeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazeCharacter), 2916323746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_2341759590(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
