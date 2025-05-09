// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/Calculations/MMC_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_Damage() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UMMC_Damage();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UMMC_Damage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UMMC_Damage
void UMMC_Damage::StaticRegisterNativesUMMC_Damage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_Damage);
UClass* Z_Construct_UClass_UMMC_Damage_NoRegister()
{
	return UMMC_Damage::StaticClass();
}
struct Z_Construct_UClass_UMMC_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/Calculations/MMC_Damage.h" },
		{ "ModuleRelativePath", "Public/GASFramework/Calculations/MMC_Damage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_Damage_Statics::ClassParams = {
	&UMMC_Damage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_Damage()
{
	if (!Z_Registration_Info_UClass_UMMC_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_Damage.OuterSingleton, Z_Construct_UClass_UMMC_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_Damage.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UMMC_Damage>()
{
	return UMMC_Damage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_Damage);
UMMC_Damage::~UMMC_Damage() {}
// End Class UMMC_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_Damage, UMMC_Damage::StaticClass, TEXT("UMMC_Damage"), &Z_Registration_Info_UClass_UMMC_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_Damage), 4135820669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_Damage_h_323854430(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_MMC_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
