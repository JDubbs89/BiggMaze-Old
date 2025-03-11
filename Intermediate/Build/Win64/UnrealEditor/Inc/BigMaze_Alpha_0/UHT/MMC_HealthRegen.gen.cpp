// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/Calculations/MMC_HealthRegen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_HealthRegen() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UMMC_HealthRegen();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UMMC_HealthRegen_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UMMC_HealthRegen
void UMMC_HealthRegen::StaticRegisterNativesUMMC_HealthRegen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_HealthRegen);
UClass* Z_Construct_UClass_UMMC_HealthRegen_NoRegister()
{
	return UMMC_HealthRegen::StaticClass();
}
struct Z_Construct_UClass_UMMC_HealthRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/Calculations/MMC_HealthRegen.h" },
		{ "ModuleRelativePath", "Public/GASFramework/Calculations/MMC_HealthRegen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_HealthRegen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_HealthRegen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthRegen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_HealthRegen_Statics::ClassParams = {
	&UMMC_HealthRegen::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthRegen_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_HealthRegen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_HealthRegen()
{
	if (!Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton, Z_Construct_UClass_UMMC_HealthRegen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UMMC_HealthRegen>()
{
	return UMMC_HealthRegen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_HealthRegen);
UMMC_HealthRegen::~UMMC_HealthRegen() {}
// End Class UMMC_HealthRegen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_HealthRegen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_HealthRegen, UMMC_HealthRegen::StaticClass, TEXT("UMMC_HealthRegen"), &Z_Registration_Info_UClass_UMMC_HealthRegen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_HealthRegen), 3563442884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_HealthRegen_h_2298990261(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_HealthRegen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_HealthRegen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
