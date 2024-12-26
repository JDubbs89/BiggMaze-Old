// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconsSettings() {}

// Begin Cross Module References
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconsSettings();
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References

// Begin Class UOnlineBeaconsSettings Function SaveBeaconSettings
struct Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics
{
	struct OnlineBeaconsSettings_eventSaveBeaconSettings_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * Saves the Beacon settings directly to .ini.\n\x09\x09 * If changes are made on this settings object and it isn't saved,\n\x09\x09 * when the subsystem is reset (changing world, game restart)\n\x09\x09 * all changed settings will be lost.\n\x09\x09 * - Returns True if the save process was completed successfully.\n\x09\x09 */" },
#endif
		{ "DisplayName", "Save Settings" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the Beacon settings directly to .ini.\nIf changes are made on this settings object and it isn't saved,\nwhen the subsystem is reset (changing world, game restart)\nall changed settings will be lost.\n- Returns True if the save process was completed successfully." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconsSettings, nullptr, "SaveBeaconSettings", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::OnlineBeaconsSettings_eventSaveBeaconSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(UOnlineBeaconsSettings::execSaveBeaconSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveBeaconSettings();
	P_NATIVE_END;
}
// End Class UOnlineBeaconsSettings Function SaveBeaconSettings

// Begin Class UOnlineBeaconsSettings
void UOnlineBeaconsSettings::StaticRegisterNativesUOnlineBeaconsSettings()
{
	UClass* Class = UOnlineBeaconsSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveBeaconSettings", &UOnlineBeaconsSettings::execSaveBeaconSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconsSettings);
UClass* Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister()
{
	return UOnlineBeaconsSettings::StaticClass();
}
struct Z_Construct_UClass_UOnlineBeaconsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Blueprintable Online Beacons" },
		{ "IncludePath", "OnlineBeaconsSettings.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Configure anything related to Online Beacons, without going into INI files." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[] = {
		{ "Category", "OnlineBeacons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * The port Beacons will try connecting to.\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09\x09 * normally by just hosting a beacon.\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The port Beacons will try connecting to.\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTimeout_MetaData[] = {
		{ "Category", "OnlineBeacons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * The initial timeout for Online Beacons (Value needs to be less than the Timeout).\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09\x09 * normally by just hosting a beacon.\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial timeout for Online Beacons (Value needs to be less than the Timeout).\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "OnlineBeacons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * The timeout for Online Beacons.\n\x09\x09 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\n\x09\x09 * to be applied.\n\x09\x09 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process\n\x09     * normally by just hosting a beacon.\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The timeout for Online Beacons.\n- If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem\nto be applied.\n- If no Beacons are currently being hosted, a reset is not required and you can continue the process\nnormally by just hosting a beacon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverClass_MetaData[] = {
		{ "Category", "OnlineBeacons|NetDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * Used by the Engine for the Beacon Net Driver.\n\x09\x09 * Some default values are:\n\x09\x09 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\n\x09\x09 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n\x09\x09 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used by the Engine for the Beacon Net Driver.\nSome default values are:\nOnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\nOnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n/Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverFallbackClass_MetaData[] = {
		{ "Category", "OnlineBeacons|NetDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * Used by the Engine for the Beacon Net Driver as Fallback on the case the first Driver fails to Initialize.\n\x09\x09 * Some default values are:\n\x09\x09 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\n\x09\x09 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n\x09\x09 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)\n\x09\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used by the Engine for the Beacon Net Driver as Fallback on the case the first Driver fails to Initialize.\nSome default values are:\nOnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)\nOnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)\n/Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListenPort;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverFallbackClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineBeaconsSettings_SaveBeaconSettings, "SaveBeaconSettings" }, // 3255717682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, ListenPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenPort_MetaData), NewProp_ListenPort_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout = { "InitialTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, InitialTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTimeout_MetaData), NewProp_InitialTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass = { "NetDriverClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, NetDriverClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverClass_MetaData), NewProp_NetDriverClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass = { "NetDriverFallbackClass", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconsSettings, NetDriverFallbackClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverFallbackClass_MetaData), NewProp_NetDriverFallbackClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_ListenPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_InitialTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconsSettings_Statics::NewProp_NetDriverFallbackClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlineBeaconsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconsSettings_Statics::DependentSingletons) < 16);
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
// End Class UOnlineBeaconsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconsSettings, UOnlineBeaconsSettings::StaticClass, TEXT("UOnlineBeaconsSettings"), &Z_Registration_Info_UClass_UOnlineBeaconsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconsSettings), 1706395735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_1259193590(TEXT("/Script/BlueprintableOnlineBeacons"),
	Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconsSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
