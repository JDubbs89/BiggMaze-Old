// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconsSettings() {}
// Cross Module References
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconsSettings();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineBeaconsSettings::execSaveBeaconSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveBeaconSettings();
		P_NATIVE_END;
	}
	void UOnlineBeaconsSettings::StaticRegisterNativesUOnlineBeaconsSettings()
	{
		UClass* Class = UOnlineBeaconsSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveBeaconSettings", &UOnlineBeaconsSettings::execSaveBeaconSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics
	{
		struct OnlineBeaconsSettings_eventSaveBeaconSettings_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineBeaconsSettings_eventSaveBeaconSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnlineBeaconsSettings_eventSaveBeaconSettings_Parms), &Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacons" },
		{ "Comment", "/**\n\x09\x09 * Saves the Beacon settings directly to .ini.\n\x09\x09 * If changes are made on this settings object and it isn't saved,\n\x09\x09 * when the subsystem is reset (changing world, game restart)\n\x09\x09 * all changed settings will be lost.\n\x09\x09 * - Returns True if the save process was completed successfully.\n\x09\x09 */" },
		{ "DisplayName", "Save Settings" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "Saves the Beacon settings directly to .ini.\nIf changes are made on this settings object and it isn't saved,\nwhen the subsystem is reset (changing world, game restart)\nall changed settings will be lost.\n- Returns True if the save process was completed successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconsSettings, nullptr, "SaveBeaconSettings", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::OnlineBeaconsSettings_eventSaveBeaconSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::OnlineBeaconsSettings_eventSaveBeaconSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconsSettings);
	UClass* Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister()
	{
		return UOnlineBeaconsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBeaconsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ListenPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverClass_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverFallbackClass_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverFallbackClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBeaconsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineBeaconsSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings, "SaveBeaconSettings" }, // 3459923148
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Blueprintable Online Beacons" },
		{ "IncludePath", "OnlineBeaconsSettings.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "Tooltip", "Configure anything related to Online Beacons, without going into INI files." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort_MetaData[] = {
		{ "Category", "OnlineBeacons" },
		{ "Comment", "/**\n\x09\x09 * The port Beacons will try connecting to.\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09\x09 * normally by just hosting a beacon.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "The port Beacons will try connecting to.\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, ListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort_MetaData), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout_MetaData[] = {
		{ "Category", "OnlineBeacons" },
		{ "Comment", "/**\n\x09\x09 * The initial timeout for Online Beacons (Value needs to be less than the Timeout).\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09\x09 * normally by just hosting a beacon.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "The initial timeout for Online Beacons (Value needs to be less than the Timeout).\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout = { "InitialTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, InitialTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout_MetaData), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "OnlineBeacons" },
		{ "Comment", "/**\n\x09\x09 * The timeout for Online Beacons.\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09     * normally by just hosting a beacon.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "The timeout for Online Beacons.\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout_MetaData), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass_MetaData[] = {
		{ "Category", "OnlineBeacons|NetDriver" },
		{ "Comment", "/**\n\x09\x09 * Used by the Engine for the Beacon Net Driver.\n\x09\x09 * Some default values are:\n\x09\x09 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\n\x09\x09 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n\x09\x09 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "Used by the Engine for the Beacon Net Driver.\nSome default values are:\nOnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\nOnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n/Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass = { "NetDriverClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, NetDriverClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass_MetaData), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass_MetaData[] = {
		{ "Category", "OnlineBeacons|NetDriver" },
		{ "Comment", "/**\n\x09\x09 * Used by the Engine for the Beacon Net Driver as Fallback on the case the first Driver fails to Initialize.\n\x09\x09 * Some default values are:\n\x09\x09 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\n\x09\x09 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n\x09\x09 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)\n\x09\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
		{ "ToolTip", "Used by the Engine for the Beacon Net Driver as Fallback on the case the first Driver fails to Initialize.\nSome default values are:\nOnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\nOnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n/Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass = { "NetDriverFallbackClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, NetDriverFallbackClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass_MetaData), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBeaconsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::ClassParams = {
		&UOnlineBeaconsSettings::StaticClass,
		"BlueprintableOnlineBeacons",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineBeaconsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOnlineBeaconsSettings()
	{
		if (!Z_Registration_Info_UClass_UOnlineBeaconsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBeaconsSettings.OuterSingleton, Z_Construct_UClass_UOnlineBeaconsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineBeaconsSettings.OuterSingleton;
	}
	template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<UOnlineBeaconsSettings>()
	{
		return UOnlineBeaconsSettings::StaticClass();
	}
	UOnlineBeaconsSettings::UOnlineBeaconsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBeaconsSettings);
	UOnlineBeaconsSettings::~UOnlineBeaconsSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconsSettings, UOnlineBeaconsSettings::StaticClass, TEXT("UOnlineBeaconsSettings"), &Z_Registration_Info_UClass_UOnlineBeaconsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconsSettings), 981689692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_1651858717(TEXT("/Script/BlueprintableOnlineBeacons"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
