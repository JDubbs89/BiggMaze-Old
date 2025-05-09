// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/Calculations/EC_ReloadWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEC_ReloadWeapon() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UEC_ReloadWeapon();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UEC_ReloadWeapon_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UEC_ReloadWeapon
void UEC_ReloadWeapon::StaticRegisterNativesUEC_ReloadWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEC_ReloadWeapon);
UClass* Z_Construct_UClass_UEC_ReloadWeapon_NoRegister()
{
	return UEC_ReloadWeapon::StaticClass();
}
struct Z_Construct_UClass_UEC_ReloadWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GASFramework/Calculations/EC_ReloadWeapon.h" },
		{ "ModuleRelativePath", "Public/GASFramework/Calculations/EC_ReloadWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEC_ReloadWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEC_ReloadWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEC_ReloadWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEC_ReloadWeapon_Statics::ClassParams = {
	&UEC_ReloadWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEC_ReloadWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UEC_ReloadWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEC_ReloadWeapon()
{
	if (!Z_Registration_Info_UClass_UEC_ReloadWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEC_ReloadWeapon.OuterSingleton, Z_Construct_UClass_UEC_ReloadWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEC_ReloadWeapon.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UEC_ReloadWeapon>()
{
	return UEC_ReloadWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEC_ReloadWeapon);
UEC_ReloadWeapon::~UEC_ReloadWeapon() {}
// End Class UEC_ReloadWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_ReloadWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEC_ReloadWeapon, UEC_ReloadWeapon::StaticClass, TEXT("UEC_ReloadWeapon"), &Z_Registration_Info_UClass_UEC_ReloadWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEC_ReloadWeapon), 1674965061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_ReloadWeapon_h_2871348641(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_ReloadWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_Calculations_EC_ReloadWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
