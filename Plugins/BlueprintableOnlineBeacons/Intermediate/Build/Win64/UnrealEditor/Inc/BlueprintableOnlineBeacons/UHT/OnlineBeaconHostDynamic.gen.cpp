// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconHostDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostDynamic() {}

// Begin Cross Module References
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostDynamic();
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostDynamic_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost();
UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References

// Begin Class AOnlineBeaconHostDynamic
void AOnlineBeaconHostDynamic::StaticRegisterNativesAOnlineBeaconHostDynamic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconHostDynamic);
UClass* Z_Construct_UClass_AOnlineBeaconHostDynamic_NoRegister()
{
	return AOnlineBeaconHostDynamic::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Online Beacon Host Dynamic Class.\n * Some properties we might want to change in\n * runtime are protected, so let's make them public.\n */" },
#endif
		{ "IncludePath", "OnlineBeaconHostDynamic.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostDynamic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Online Beacon Host Dynamic Class.\nSome properties we might want to change in\nruntime are protected, so let's make them public." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHostDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHost,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::ClassParams = {
	&AOnlineBeaconHostDynamic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconHostDynamic()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconHostDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconHostDynamic.OuterSingleton, Z_Construct_UClass_AOnlineBeaconHostDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconHostDynamic.OuterSingleton;
}
template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<AOnlineBeaconHostDynamic>()
{
	return AOnlineBeaconHostDynamic::StaticClass();
}
AOnlineBeaconHostDynamic::AOnlineBeaconHostDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHostDynamic);
AOnlineBeaconHostDynamic::~AOnlineBeaconHostDynamic() {}
// End Class AOnlineBeaconHostDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostDynamic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconHostDynamic, AOnlineBeaconHostDynamic::StaticClass, TEXT("AOnlineBeaconHostDynamic"), &Z_Registration_Info_UClass_AOnlineBeaconHostDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconHostDynamic), 4117342130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostDynamic_h_1048148045(TEXT("/Script/BlueprintableOnlineBeacons"),
	Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostDynamic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
