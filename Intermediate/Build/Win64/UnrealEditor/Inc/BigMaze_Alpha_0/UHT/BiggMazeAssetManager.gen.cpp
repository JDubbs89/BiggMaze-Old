// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/AssetManager/BiggMazeAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMazeAssetManager() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UBiggMazeAssetManager();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UBiggMazeAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UBiggMazeAssetManager
void UBiggMazeAssetManager::StaticRegisterNativesUBiggMazeAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBiggMazeAssetManager);
UClass* Z_Construct_UClass_UBiggMazeAssetManager_NoRegister()
{
	return UBiggMazeAssetManager::StaticClass();
}
struct Z_Construct_UClass_UBiggMazeAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManager/BiggMazeAssetManager.h" },
		{ "ModuleRelativePath", "Public/AssetManager/BiggMazeAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBiggMazeAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBiggMazeAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBiggMazeAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBiggMazeAssetManager_Statics::ClassParams = {
	&UBiggMazeAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiggMazeAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBiggMazeAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBiggMazeAssetManager()
{
	if (!Z_Registration_Info_UClass_UBiggMazeAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBiggMazeAssetManager.OuterSingleton, Z_Construct_UClass_UBiggMazeAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBiggMazeAssetManager.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UBiggMazeAssetManager>()
{
	return UBiggMazeAssetManager::StaticClass();
}
UBiggMazeAssetManager::UBiggMazeAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBiggMazeAssetManager);
UBiggMazeAssetManager::~UBiggMazeAssetManager() {}
// End Class UBiggMazeAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AssetManager_BiggMazeAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBiggMazeAssetManager, UBiggMazeAssetManager::StaticClass, TEXT("UBiggMazeAssetManager"), &Z_Registration_Info_UClass_UBiggMazeAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBiggMazeAssetManager), 2320822697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AssetManager_BiggMazeAssetManager_h_148748182(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AssetManager_BiggMazeAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AssetManager_BiggMazeAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
