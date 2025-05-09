// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Character/AI/BiggMazeAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazeAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAIController();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMazeAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABiggMazeAIController
void ABiggMazeAIController::StaticRegisterNativesABiggMazeAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMazeAIController);
UClass* Z_Construct_UClass_ABiggMazeAIController_NoRegister()
{
	return ABiggMazeAIController::StaticClass();
}
struct Z_Construct_UClass_ABiggMazeAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/AI/BiggMazeAIController.h" },
		{ "ModuleRelativePath", "Public/Character/AI/BiggMazeAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMazeAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABiggMazeAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMazeAIController_Statics::ClassParams = {
	&ABiggMazeAIController::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMazeAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMazeAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABiggMazeAIController()
{
	if (!Z_Registration_Info_UClass_ABiggMazeAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMazeAIController.OuterSingleton, Z_Construct_UClass_ABiggMazeAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABiggMazeAIController.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMazeAIController>()
{
	return ABiggMazeAIController::StaticClass();
}
ABiggMazeAIController::ABiggMazeAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMazeAIController);
ABiggMazeAIController::~ABiggMazeAIController() {}
// End Class ABiggMazeAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMazeAIController, ABiggMazeAIController::StaticClass, TEXT("ABiggMazeAIController"), &Z_Registration_Info_UClass_ABiggMazeAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMazeAIController), 1773703318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAIController_h_3814144116(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
