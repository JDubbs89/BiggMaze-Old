// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/Player/BiggMazePlayerState.h"
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
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

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
	nullptr,
	Z_Construct_UClass_ABiggMazePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ABiggMazePlayerState, ABiggMazePlayerState::StaticClass, TEXT("ABiggMazePlayerState"), &Z_Registration_Info_UClass_ABiggMazePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazePlayerState), 4026114490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_693802996(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
