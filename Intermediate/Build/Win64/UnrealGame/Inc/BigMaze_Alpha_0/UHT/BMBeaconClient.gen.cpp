// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Multiplayer/BMBeaconClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMBeaconClient() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMBeaconClient();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABMBeaconClient
void ABMBeaconClient::StaticRegisterNativesABMBeaconClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABMBeaconClient);
UClass* Z_Construct_UClass_ABMBeaconClient_NoRegister()
{
	return ABMBeaconClient::StaticClass();
}
struct Z_Construct_UClass_ABMBeaconClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Multiplayer/BMBeaconClient.h" },
		{ "ModuleRelativePath", "Public/Multiplayer/BMBeaconClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABMBeaconClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABMBeaconClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABMBeaconClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABMBeaconClient_Statics::ClassParams = {
	&ABMBeaconClient::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABMBeaconClient_Statics::Class_MetaDataParams), Z_Construct_UClass_ABMBeaconClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABMBeaconClient()
{
	if (!Z_Registration_Info_UClass_ABMBeaconClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABMBeaconClient.OuterSingleton, Z_Construct_UClass_ABMBeaconClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABMBeaconClient.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABMBeaconClient>()
{
	return ABMBeaconClient::StaticClass();
}
ABMBeaconClient::ABMBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABMBeaconClient);
ABMBeaconClient::~ABMBeaconClient() {}
// End Class ABMBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABMBeaconClient, ABMBeaconClient::StaticClass, TEXT("ABMBeaconClient"), &Z_Registration_Info_UClass_ABMBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMBeaconClient), 2676065175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_1829134604(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
