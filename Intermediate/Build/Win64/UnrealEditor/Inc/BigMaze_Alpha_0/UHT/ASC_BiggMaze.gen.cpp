// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/GASFramework/ASCs/ASC_BiggMaze.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASC_BiggMaze() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UASC_BiggMaze();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UASC_BiggMaze_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class UASC_BiggMaze
void UASC_BiggMaze::StaticRegisterNativesUASC_BiggMaze()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASC_BiggMaze);
UClass* Z_Construct_UClass_UASC_BiggMaze_NoRegister()
{
	return UASC_BiggMaze::StaticClass();
}
struct Z_Construct_UClass_UASC_BiggMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GASFramework/ASCs/ASC_BiggMaze.h" },
		{ "ModuleRelativePath", "Public/GASFramework/ASCs/ASC_BiggMaze.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASC_BiggMaze>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UASC_BiggMaze_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASC_BiggMaze_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASC_BiggMaze_Statics::ClassParams = {
	&UASC_BiggMaze::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASC_BiggMaze_Statics::Class_MetaDataParams), Z_Construct_UClass_UASC_BiggMaze_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASC_BiggMaze()
{
	if (!Z_Registration_Info_UClass_UASC_BiggMaze.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASC_BiggMaze.OuterSingleton, Z_Construct_UClass_UASC_BiggMaze_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASC_BiggMaze.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UASC_BiggMaze>()
{
	return UASC_BiggMaze::StaticClass();
}
UASC_BiggMaze::UASC_BiggMaze(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASC_BiggMaze);
UASC_BiggMaze::~UASC_BiggMaze() {}
// End Class UASC_BiggMaze

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_ASCs_ASC_BiggMaze_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASC_BiggMaze, UASC_BiggMaze::StaticClass, TEXT("UASC_BiggMaze"), &Z_Registration_Info_UClass_UASC_BiggMaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASC_BiggMaze), 3389467312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_ASCs_ASC_BiggMaze_h_332402404(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_ASCs_ASC_BiggMaze_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_ASCs_ASC_BiggMaze_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
