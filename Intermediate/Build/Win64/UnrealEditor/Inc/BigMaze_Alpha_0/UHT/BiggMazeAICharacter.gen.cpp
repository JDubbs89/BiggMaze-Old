// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/AI/BiggMazeAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazeAICharacter() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAICharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAICharacter_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeCharacter();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazeAICharacter
void ABiggMazeAICharacter::StaticRegisterNativesABiggMazeAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazeAICharacter);
UClass* Z_Construct_UClass_ABiggMazeAICharacter_NoRegister()
{
	return ABiggMazeAICharacter::StaticClass();
}
struct Z_Construct_UClass_ABiggMazeAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AI/BiggMazeAICharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAICharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazeAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABiggMazeAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABiggMazeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazeAICharacter_Statics::ClassParams = {
	&ABiggMazeAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazeAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazeAICharacter()
{
	if (!Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton, Z_Construct_UClass_ABiggMazeAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazeAICharacter.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazeAICharacter>()
{
	return ABiggMazeAICharacter::StaticClass();
}
ABiggMazeAICharacter::ABiggMazeAICharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazeAICharacter);
ABiggMazeAICharacter::~ABiggMazeAICharacter() {}
// End Class ABiggMazeAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazeAICharacter, ABiggMazeAICharacter::StaticClass, TEXT("ABiggMazeAICharacter"), &Z_Registration_Info_UClass_ABiggMazeAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazeAICharacter), 2421132639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_3778630606(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
