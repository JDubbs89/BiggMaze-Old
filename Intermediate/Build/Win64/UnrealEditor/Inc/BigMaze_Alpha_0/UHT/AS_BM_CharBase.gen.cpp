// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/AS_BM_CharBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAS_BM_CharBase() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UAS_BM_CharBase
void UAS_BM_CharBase::StaticRegisterNativesUAS_BM_CharBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAS_BM_CharBase);
UClass* Z_Construct_UClass_UAS_BM_CharBase_NoRegister()
{
	return UAS_BM_CharBase::StaticClass();
}
struct Z_Construct_UClass_UAS_BM_CharBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AS_BM_CharBase.h" },
		{ "ModuleRelativePath", "Public/AS_BM_CharBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAS_BM_CharBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAS_BM_CharBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAS_BM_CharBase_Statics::ClassParams = {
	&UAS_BM_CharBase::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAS_BM_CharBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAS_BM_CharBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAS_BM_CharBase()
{
	if (!Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton, Z_Construct_UClass_UAS_BM_CharBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAS_BM_CharBase.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UAS_BM_CharBase>()
{
	return UAS_BM_CharBase::StaticClass();
}
UAS_BM_CharBase::UAS_BM_CharBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAS_BM_CharBase);
UAS_BM_CharBase::~UAS_BM_CharBase() {}
// End Class UAS_BM_CharBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAS_BM_CharBase, UAS_BM_CharBase::StaticClass, TEXT("UAS_BM_CharBase"), &Z_Registration_Info_UClass_UAS_BM_CharBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAS_BM_CharBase), 3434006333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_3605459136(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
