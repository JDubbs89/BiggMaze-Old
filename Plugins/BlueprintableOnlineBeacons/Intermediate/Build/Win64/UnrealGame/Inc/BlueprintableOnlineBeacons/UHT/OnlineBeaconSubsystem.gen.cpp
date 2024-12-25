// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconSubsystem() {}
// Cross Module References
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostDynamic_NoRegister();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_NoRegister();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconSubsystem();
	BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconSubsystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOnlineBeaconsSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execGetHostingBeacon)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AOnlineBeaconClient**)Z_Param__Result=P_THIS->GetHostingBeacon(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execIsHostingBeacon)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHostingBeacon(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execStopHostingBeacons)
	{
		P_GET_TARRAY(TSubclassOf<AOnlineBeaconClient> ,Z_Param_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHostingBeacons(Z_Param_Classes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execStopHostingBeacon)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHostingBeacon(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execStartHostingBeacons)
	{
		P_GET_TARRAY(TSubclassOf<AOnlineBeaconClient> ,Z_Param_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHostingBeacons(Z_Param_Classes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineBeaconSubsystem::execStartHostingBeacon)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHostingBeacon(Z_Param_Class);
		P_NATIVE_END;
	}
	void UOnlineBeaconSubsystem::StaticRegisterNativesUOnlineBeaconSubsystem()
	{
		UClass* Class = UOnlineBeaconSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHostingBeacon", &UOnlineBeaconSubsystem::execGetHostingBeacon },
			{ "GetSettings", &UOnlineBeaconSubsystem::execGetSettings },
			{ "IsHostingBeacon", &UOnlineBeaconSubsystem::execIsHostingBeacon },
			{ "Reset", &UOnlineBeaconSubsystem::execReset },
			{ "StartHostingBeacon", &UOnlineBeaconSubsystem::execStartHostingBeacon },
			{ "StartHostingBeacons", &UOnlineBeaconSubsystem::execStartHostingBeacons },
			{ "StopHostingBeacon", &UOnlineBeaconSubsystem::execStopHostingBeacon },
			{ "StopHostingBeacons", &UOnlineBeaconSubsystem::execStopHostingBeacons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics
	{
		struct OnlineBeaconSubsystem_eventGetHostingBeacon_Parms
		{
			TSubclassOf<AOnlineBeaconClient>  Class;
			AOnlineBeaconClient* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventGetHostingBeacon_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventGetHostingBeacon_Parms, ReturnValue), Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Utilities" },
		{ "Comment", "/**\n         * Gets the Beacon Object of a beacon that is currently being hosted.\n         */" },
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Gets the Beacon Object of a beacon that is currently being hosted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "GetHostingBeacon", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::OnlineBeaconSubsystem_eventGetHostingBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::OnlineBeaconSubsystem_eventGetHostingBeacon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics
	{
		struct OnlineBeaconSubsystem_eventGetSettings_Parms
		{
			UOnlineBeaconsSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Settings" },
		{ "Comment", "/**\n         * Gets the Current Beacon Settings.\n         * - Once settings are changed, a Beacon Subsystem reset is required\n         * for changed to be applied.\n         * - If no Beacons are hosted, settings will be applied automatically\n         * on start of Beacon Hosting.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Gets the Current Beacon Settings.\n- Once settings are changed, a Beacon Subsystem reset is required\nfor changed to be applied.\n- If no Beacons are hosted, settings will be applied automatically\non start of Beacon Hosting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::OnlineBeaconSubsystem_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::OnlineBeaconSubsystem_eventGetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics
	{
		struct OnlineBeaconSubsystem_eventIsHostingBeacon_Parms
		{
			TSubclassOf<AOnlineBeaconClient>  Class;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventIsHostingBeacon_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlineBeaconSubsystem_eventIsHostingBeacon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnlineBeaconSubsystem_eventIsHostingBeacon_Parms), &Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Utilities" },
		{ "Comment", "/**\n         * Returns whether a specific beacon class is being hosted.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Returns whether a specific beacon class is being hosted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "IsHostingBeacon", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::OnlineBeaconSubsystem_eventIsHostingBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::OnlineBeaconSubsystem_eventIsHostingBeacon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Utilities" },
		{ "Comment", "/**\n         * Resets the Beacons Subsystem.\n         * - All Clients will be disconnected.\n         * - All Hosts will be stopped.\n         * - All Actors will be cleared.\n         * - All Active Hosts will be Restarted.\n         * - Changed settings will be applied.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Resets the Beacons Subsystem.\n- All Clients will be disconnected.\n- All Hosts will be stopped.\n- All Actors will be cleared.\n- All Active Hosts will be Restarted.\n- Changed settings will be applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics
	{
		struct OnlineBeaconSubsystem_eventStartHostingBeacon_Parms
		{
			TSubclassOf<AOnlineBeaconClient>  Class;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventStartHostingBeacon_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Hosting" },
		{ "Comment", "/**\n         * Starts hosting a Online Beacon.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Starts hosting a Online Beacon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "StartHostingBeacon", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::OnlineBeaconSubsystem_eventStartHostingBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::OnlineBeaconSubsystem_eventStartHostingBeacon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics
	{
		struct OnlineBeaconSubsystem_eventStartHostingBeacons_Parms
		{
			TArray<TSubclassOf<AOnlineBeaconClient> > Classes;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventStartHostingBeacons_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes_MetaData), Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::NewProp_Classes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Hosting" },
		{ "Comment", "/**\n         * Starts hosting multiple Online Beacons at once.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Starts hosting multiple Online Beacons at once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "StartHostingBeacons", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::OnlineBeaconSubsystem_eventStartHostingBeacons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::OnlineBeaconSubsystem_eventStartHostingBeacons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics
	{
		struct OnlineBeaconSubsystem_eventStopHostingBeacon_Parms
		{
			TSubclassOf<AOnlineBeaconClient>  Class;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventStopHostingBeacon_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Hosting" },
		{ "Comment", "/**\n         * Stops hosting a Online Beacon.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Stops hosting a Online Beacon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "StopHostingBeacon", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::OnlineBeaconSubsystem_eventStopHostingBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::OnlineBeaconSubsystem_eventStopHostingBeacon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics
	{
		struct OnlineBeaconSubsystem_eventStopHostingBeacons_Parms
		{
			TArray<TSubclassOf<AOnlineBeaconClient> > Classes;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconSubsystem_eventStopHostingBeacons_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes_MetaData), Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::NewProp_Classes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Subsystem|Hosting" },
		{ "Comment", "/**\n         * Stops hosting multiple Online Beacons at once.\n         */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "Stops hosting multiple Online Beacons at once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconSubsystem, nullptr, "StopHostingBeacons", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::OnlineBeaconSubsystem_eventStopHostingBeacons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::OnlineBeaconSubsystem_eventStopHostingBeacons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconSubsystem);
	UClass* Z_Construct_UClass_UOnlineBeaconSubsystem_NoRegister()
	{
		return UOnlineBeaconSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBeaconSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostingBeacons_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_HostingBeacons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostingBeacons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HostingBeacons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostBeacon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostBeacon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_GetHostingBeacon, "GetHostingBeacon" }, // 122618075
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_GetSettings, "GetSettings" }, // 3739538933
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_IsHostingBeacon, "IsHostingBeacon" }, // 3532628372
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_Reset, "Reset" }, // 1717189981
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacon, "StartHostingBeacon" }, // 2784399182
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_StartHostingBeacons, "StartHostingBeacons" }, // 2458571835
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacon, "StopHostingBeacon" }, // 281185860
		{ &Z_Construct_UFunction_UOnlineBeaconSubsystem_StopHostingBeacons, "StopHostingBeacons" }, // 3985254866
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This Subsystem automatically creates all necessary actors \n * and controls the hosting flow of the Beacons Subsystem.\n */" },
		{ "IncludePath", "OnlineBeaconSubsystem.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "This Subsystem automatically creates all necessary actors\nand controls the hosting flow of the Beacons Subsystem." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_ValueProp = { "HostingBeacons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AOnlineBeaconHostObjectDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_Key_KeyProp = { "HostingBeacons_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_MetaData[] = {
		{ "Comment", "// A Map of all Current Beacons that we are hosting, with their respective hosts.\n" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "A Map of all Current Beacons that we are hosting, with their respective hosts." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons = { "HostingBeacons", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconSubsystem, HostingBeacons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_MetaData), Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostBeacon_MetaData[] = {
		{ "Comment", "// The Current Host Beacon.\n" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "The Current Host Beacon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostBeacon = { "HostBeacon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconSubsystem, HostBeacon), Z_Construct_UClass_AOnlineBeaconHostDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostBeacon_MetaData), Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostBeacon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "// The Current Settings Object being used by this Subsystem.\n" },
		{ "ModuleRelativePath", "Public/OnlineBeaconSubsystem.h" },
		{ "ToolTip", "The Current Settings Object being used by this Subsystem." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconSubsystem, Settings), Z_Construct_UClass_UOnlineBeaconsSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostingBeacons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_HostBeacon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::ClassParams = {
		&UOnlineBeaconSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOnlineBeaconSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOnlineBeaconSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBeaconSubsystem.OuterSingleton, Z_Construct_UClass_UOnlineBeaconSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineBeaconSubsystem.OuterSingleton;
	}
	template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<UOnlineBeaconSubsystem>()
	{
		return UOnlineBeaconSubsystem::StaticClass();
	}
	UOnlineBeaconSubsystem::UOnlineBeaconSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBeaconSubsystem);
	UOnlineBeaconSubsystem::~UOnlineBeaconSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconSubsystem, UOnlineBeaconSubsystem::StaticClass, TEXT("UOnlineBeaconSubsystem"), &Z_Registration_Info_UClass_UOnlineBeaconSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconSubsystem), 824223040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconSubsystem_h_1077438046(TEXT("/Script/BlueprintableOnlineBeacons"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
