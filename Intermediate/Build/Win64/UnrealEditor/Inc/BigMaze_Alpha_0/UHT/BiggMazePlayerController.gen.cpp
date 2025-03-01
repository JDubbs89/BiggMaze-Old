// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/Player/BiggMazePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazePlayerController() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerController();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazePlayerController
void ABiggMazePlayerController::StaticRegisterNativesABiggMazePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazePlayerController);
UClass* Z_Construct_UClass_ABiggMazePlayerController_NoRegister()
{
	return ABiggMazePlayerController::StaticClass();
}
struct Z_Construct_UClass_ABiggMazePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/Player/BiggMazePlayerController.h" },
		{ "ModuleRelativePath", "Public/Character/Player/BiggMazePlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABiggMazePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazePlayerController_Statics::ClassParams = {
	&ABiggMazePlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazePlayerController()
{
	if (!Z_Registration_Info_UClass_ABiggMazePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazePlayerController.OuterSingleton, Z_Construct_UClass_ABiggMazePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazePlayerController.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazePlayerController>()
{
	return ABiggMazePlayerController::StaticClass();
}
ABiggMazePlayerController::ABiggMazePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazePlayerController);
ABiggMazePlayerController::~ABiggMazePlayerController() {}
// End Class ABiggMazePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazePlayerController, ABiggMazePlayerController::StaticClass, TEXT("ABiggMazePlayerController"), &Z_Registration_Info_UClass_ABiggMazePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazePlayerController), 2598296714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerController_h_3651876949(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
