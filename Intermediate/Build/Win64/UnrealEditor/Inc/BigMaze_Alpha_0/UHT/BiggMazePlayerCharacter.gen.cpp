// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/Player/BiggMazePlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazePlayerCharacter() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeCharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerCharacter();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazePlayerCharacter
void ABiggMazePlayerCharacter::StaticRegisterNativesABiggMazePlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazePlayerCharacter);
UClass* Z_Construct_UClass_ABiggMazePlayerCharacter_NoRegister()
{
	return ABiggMazePlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ABiggMazePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/BiggMazePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABiggMazeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::ClassParams = {
	&ABiggMazePlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ABiggMazePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazePlayerCharacter.OuterSingleton, Z_Construct_UClass_ABiggMazePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazePlayerCharacter.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazePlayerCharacter>()
{
	return ABiggMazePlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazePlayerCharacter);
ABiggMazePlayerCharacter::~ABiggMazePlayerCharacter() {}
// End Class ABiggMazePlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazePlayerCharacter, ABiggMazePlayerCharacter::StaticClass, TEXT("ABiggMazePlayerCharacter"), &Z_Registration_Info_UClass_ABiggMazePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazePlayerCharacter), 3132775246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerCharacter_h_2168382363(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
