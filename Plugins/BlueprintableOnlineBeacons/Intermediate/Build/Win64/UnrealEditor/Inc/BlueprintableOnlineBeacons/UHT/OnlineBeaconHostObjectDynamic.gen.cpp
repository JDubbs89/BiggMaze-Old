// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconHostObjectDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObjectDynamic() {}
// Cross Module References
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObjectDynamic();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References
	void AOnlineBeaconHostObjectDynamic::StaticRegisterNativesAOnlineBeaconHostObjectDynamic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconHostObjectDynamic);
	UClass* Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_NoRegister()
	{
		return AOnlineBeaconHostObjectDynamic::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Relay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Relay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes the Beacon Class for the Online Beacon Subsystem.\n */" },
		{ "IncludePath", "OnlineBeaconHostObjectDynamic.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObjectDynamic.h" },
		{ "ToolTip", "Exposes the Beacon Class for the Online Beacon Subsystem." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::NewProp_Relay_MetaData[] = {
		{ "Comment", "// The Current Online Beacon Blueprint used for Server-side events.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObjectDynamic.h" },
		{ "ToolTip", "The Current Online Beacon Blueprint used for Server-side events." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::NewProp_Relay = { "Relay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHostObjectDynamic, Relay), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::NewProp_Relay_MetaData), Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::NewProp_Relay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::NewProp_Relay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHostObjectDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::ClassParams = {
		&AOnlineBeaconHostObjectDynamic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOnlineBeaconHostObjectDynamic()
	{
		if (!Z_Registration_Info_UClass_AOnlineBeaconHostObjectDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconHostObjectDynamic.OuterSingleton, Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlineBeaconHostObjectDynamic.OuterSingleton;
	}
	template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<AOnlineBeaconHostObjectDynamic>()
	{
		return AOnlineBeaconHostObjectDynamic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHostObjectDynamic);
	AOnlineBeaconHostObjectDynamic::~AOnlineBeaconHostObjectDynamic() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostObjectDynamic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostObjectDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconHostObjectDynamic, AOnlineBeaconHostObjectDynamic::StaticClass, TEXT("AOnlineBeaconHostObjectDynamic"), &Z_Registration_Info_UClass_AOnlineBeaconHostObjectDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconHostObjectDynamic), 1162100845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostObjectDynamic_h_1781248266(TEXT("/Script/BlueprintableOnlineBeacons"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostObjectDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconHostObjectDynamic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
