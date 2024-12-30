// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/PS_BiggMaze.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS_BiggMaze() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BiggMaze();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_APS_BiggMaze_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class APS_BiggMaze
void APS_BiggMaze::StaticRegisterNativesAPS_BiggMaze()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APS_BiggMaze);
UClass* Z_Construct_UClass_APS_BiggMaze_NoRegister()
{
	return APS_BiggMaze::StaticClass();
}
struct Z_Construct_UClass_APS_BiggMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PS_BiggMaze.h" },
		{ "ModuleRelativePath", "Public/PS_BiggMaze.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APS_BiggMaze>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APS_BiggMaze_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BiggMaze_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APS_BiggMaze_Statics::ClassParams = {
	&APS_BiggMaze::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APS_BiggMaze_Statics::Class_MetaDataParams), Z_Construct_UClass_APS_BiggMaze_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APS_BiggMaze()
{
	if (!Z_Registration_Info_UClass_APS_BiggMaze.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APS_BiggMaze.OuterSingleton, Z_Construct_UClass_APS_BiggMaze_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APS_BiggMaze.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<APS_BiggMaze>()
{
	return APS_BiggMaze::StaticClass();
}
APS_BiggMaze::APS_BiggMaze(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APS_BiggMaze);
APS_BiggMaze::~APS_BiggMaze() {}
// End Class APS_BiggMaze

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BiggMaze_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APS_BiggMaze, APS_BiggMaze::StaticClass, TEXT("APS_BiggMaze"), &Z_Registration_Info_UClass_APS_BiggMaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APS_BiggMaze), 2451584149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BiggMaze_h_4188758090(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BiggMaze_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_PS_BiggMaze_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
