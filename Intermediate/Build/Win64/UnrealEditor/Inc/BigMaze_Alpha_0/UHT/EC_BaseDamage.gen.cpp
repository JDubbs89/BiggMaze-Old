// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/Calculations/EC_BaseDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEC_BaseDamage() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UEC_BaseDamage();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UEC_BaseDamage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UEC_BaseDamage
void UEC_BaseDamage::StaticRegisterNativesUEC_BaseDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEC_BaseDamage);
UClass* Z_Construct_UClass_UEC_BaseDamage_NoRegister()
{
	return UEC_BaseDamage::StaticClass();
}
struct Z_Construct_UClass_UEC_BaseDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/Calculations/EC_BaseDamage.h" },
		{ "ModuleRelativePath", "Public/GASFramework/Calculations/EC_BaseDamage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEC_BaseDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEC_BaseDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEC_BaseDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEC_BaseDamage_Statics::ClassParams = {
	&UEC_BaseDamage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEC_BaseDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UEC_BaseDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEC_BaseDamage()
{
	if (!Z_Registration_Info_UClass_UEC_BaseDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEC_BaseDamage.OuterSingleton, Z_Construct_UClass_UEC_BaseDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEC_BaseDamage.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UEC_BaseDamage>()
{
	return UEC_BaseDamage::StaticClass();
}
UEC_BaseDamage::UEC_BaseDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEC_BaseDamage);
UEC_BaseDamage::~UEC_BaseDamage() {}
// End Class UEC_BaseDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_BaseDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEC_BaseDamage, UEC_BaseDamage::StaticClass, TEXT("UEC_BaseDamage"), &Z_Registration_Info_UClass_UEC_BaseDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEC_BaseDamage), 986945733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_BaseDamage_h_2553167904(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_BaseDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_BaseDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
