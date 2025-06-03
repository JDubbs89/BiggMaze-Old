// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Multiplayer/BMLobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMLobbyGameMode() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMLobbyGameMode();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMLobbyGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABMLobbyGameMode
void ABMLobbyGameMode::StaticRegisterNativesABMLobbyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABMLobbyGameMode);
UClass* Z_Construct_UClass_ABMLobbyGameMode_NoRegister()
{
	return ABMLobbyGameMode::StaticClass();
}
struct Z_Construct_UClass_ABMLobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Multiplayer/BMLobbyGameMode.h" },
		{ "ModuleRelativePath", "Public/Multiplayer/BMLobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABMLobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABMLobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABMLobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABMLobbyGameMode_Statics::ClassParams = {
	&ABMLobbyGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABMLobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABMLobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABMLobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton, Z_Construct_UClass_ABMLobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABMLobbyGameMode>()
{
	return ABMLobbyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABMLobbyGameMode);
ABMLobbyGameMode::~ABMLobbyGameMode() {}
// End Class ABMLobbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABMLobbyGameMode, ABMLobbyGameMode::StaticClass, TEXT("ABMLobbyGameMode"), &Z_Registration_Info_UClass_ABMLobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMLobbyGameMode), 2390628366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_470197391(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
