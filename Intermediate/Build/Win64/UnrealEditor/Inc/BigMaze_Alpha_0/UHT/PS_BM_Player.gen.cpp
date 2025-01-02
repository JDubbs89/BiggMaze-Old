// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/PS_BM_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS_BM_Player() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BM_Player_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class APS_BM_Player
void APS_BM_Player::StaticRegisterNativesAPS_BM_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APS_BM_Player);
UClass* Z_Construct_UClass_APS_BM_Player_NoRegister()
{
	return APS_BM_Player::StaticClass();
}
struct Z_Construct_UClass_APS_BM_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PS_BM_Player.h" },
		{ "ModuleRelativePath", "Public/PS_BM_Player.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APS_BM_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APS_BM_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APS_BM_Player_Statics::ClassParams = {
	&APS_BM_Player::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BM_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_APS_BM_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APS_BM_Player()
{
	if (!Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton, Z_Construct_UClass_APS_BM_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APS_BM_Player.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<APS_BM_Player>()
{
	return APS_BM_Player::StaticClass();
}
APS_BM_Player::APS_BM_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APS_BM_Player);
APS_BM_Player::~APS_BM_Player() {}
// End Class APS_BM_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APS_BM_Player, APS_BM_Player::StaticClass, TEXT("APS_BM_Player"), &Z_Registration_Info_UClass_APS_BM_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APS_BM_Player), 1082776358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_3263079790(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BM_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
