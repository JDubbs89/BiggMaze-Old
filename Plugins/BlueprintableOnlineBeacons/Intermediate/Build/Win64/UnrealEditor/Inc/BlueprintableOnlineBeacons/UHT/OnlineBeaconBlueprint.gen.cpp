// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconBlueprint.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconBlueprint() {}

// Begin Cross Module References
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconBlueprint();
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister();
BLUEPRINTABLEONLINEBEACONS_API UEnum* Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint();
BLUEPRINTABLEONLINEBEACONS_API UEnum* Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason();
NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References

// Begin Enum EBeaconConnectionStateBlueprint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint;
static UEnum* EBeaconConnectionStateBlueprint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint, (UObject*)Z_Construct_UPackage__Script_BlueprintableOnlineBeacons(), TEXT("EBeaconConnectionStateBlueprint"));
	}
	return Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.OuterSingleton;
}
template<> BLUEPRINTABLEONLINEBEACONS_API UEnum* StaticEnum<EBeaconConnectionStateBlueprint>()
{
	return EBeaconConnectionStateBlueprint_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BCE_Closed.DisplayName", "Closed" },
		{ "BCE_Closed.Name", "EBeaconConnectionStateBlueprint::BCE_Closed" },
		{ "BCE_Closed.Tooltip", "Connection permanently closed." },
		{ "BCE_Invalid.DisplayName", "Invalid" },
		{ "BCE_Invalid.Name", "EBeaconConnectionStateBlueprint::BCE_Invalid" },
		{ "BCE_Invalid.Tooltip", "Connection is invalid, possibly uninitialized." },
		{ "BCE_Open.DisplayName", "Open" },
		{ "BCE_Open.Name", "EBeaconConnectionStateBlueprint::BCE_Open" },
		{ "BCE_Open.Tooltip", "Connection is open." },
		{ "BCE_Pending.DisplayName", "Pending" },
		{ "BCE_Pending.Name", "EBeaconConnectionStateBlueprint::BCE_Pending" },
		{ "BCE_Pending.Tooltip", "Connection is pending." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Reimplements the State of the Connection for Blueprint Use.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reimplements the State of the Connection for Blueprint Use." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBeaconConnectionStateBlueprint::BCE_Invalid", (int64)EBeaconConnectionStateBlueprint::BCE_Invalid },
		{ "EBeaconConnectionStateBlueprint::BCE_Closed", (int64)EBeaconConnectionStateBlueprint::BCE_Closed },
		{ "EBeaconConnectionStateBlueprint::BCE_Pending", (int64)EBeaconConnectionStateBlueprint::BCE_Pending },
		{ "EBeaconConnectionStateBlueprint::BCE_Open", (int64)EBeaconConnectionStateBlueprint::BCE_Open },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
	nullptr,
	"EBeaconConnectionStateBlueprint",
	"EBeaconConnectionStateBlueprint",
	Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint()
{
	if (!Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.InnerSingleton, Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint.InnerSingleton;
}
// End Enum EBeaconConnectionStateBlueprint

// Begin Enum EBeaconDisconnectReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBeaconDisconnectReason;
static UEnum* EBeaconDisconnectReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBeaconDisconnectReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBeaconDisconnectReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason, (UObject*)Z_Construct_UPackage__Script_BlueprintableOnlineBeacons(), TEXT("EBeaconDisconnectReason"));
	}
	return Z_Registration_Info_UEnum_EBeaconDisconnectReason.OuterSingleton;
}
template<> BLUEPRINTABLEONLINEBEACONS_API UEnum* StaticEnum<EBeaconDisconnectReason>()
{
	return EBeaconDisconnectReason_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BDR_Client.DisplayName", "Client" },
		{ "BDR_Client.Name", "EBeaconDisconnectReason::BDR_Client" },
		{ "BDR_Client.Tooltip", "This Beacon was disconnected by the Client at its own request." },
		{ "BDR_Server.DisplayName", "Server" },
		{ "BDR_Server.Name", "EBeaconDisconnectReason::BDR_Server" },
		{ "BDR_Server.Tooltip", "This Beacon was disconnected by the Server." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Reason for a Beacon getting Disconnected.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Reason for a Beacon getting Disconnected." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBeaconDisconnectReason::BDR_Client", (int64)EBeaconDisconnectReason::BDR_Client },
		{ "EBeaconDisconnectReason::BDR_Server", (int64)EBeaconDisconnectReason::BDR_Server },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
	nullptr,
	"EBeaconDisconnectReason",
	"EBeaconDisconnectReason",
	Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason()
{
	if (!Z_Registration_Info_UEnum_EBeaconDisconnectReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBeaconDisconnectReason.InnerSingleton, Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBeaconDisconnectReason.InnerSingleton;
}
// End Enum EBeaconDisconnectReason

// Begin Class AOnlineBeaconBlueprint Function ConnectByIP
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics
{
	struct OnlineBeaconBlueprint_eventConnectByIP_Parms
	{
		FString Address;
		int32 Port;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Call this function to begin connection to a server, given an Address.\n         * - Returns if the connection progress has started.\n         * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n         * - Beacons Connection is an Async Process, use the 'On Connected' or 'On Connection Failure' Events\n         * on the beacon's blueprint to handle connection failures or use the 'Connect By IP (Async)'\n         * Node to directly get the result on this blueprint.\n         */" },
#endif
		{ "CPP_Default_Port", "-1" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to begin connection to a server, given an Address.\n- Returns if the connection progress has started.\n- If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n- Beacons Connection is an Async Process, use the 'On Connected' or 'On Connection Failure' Events\non the beacon's blueprint to handle connection failures or use the 'Connect By IP (Async)'\nNode to directly get the result on this blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventConnectByIP_Parms, Address), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventConnectByIP_Parms, Port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnlineBeaconBlueprint_eventConnectByIP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnlineBeaconBlueprint_eventConnectByIP_Parms), &Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "ConnectByIP", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::OnlineBeaconBlueprint_eventConnectByIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::OnlineBeaconBlueprint_eventConnectByIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execConnectByIP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectByIP(Z_Param_Address,Z_Param_Port);
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function ConnectByIP

// Begin Class AOnlineBeaconBlueprint Function ConnectBySession
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics
{
	struct OnlineBeaconBlueprint_eventConnectBySession_Parms
	{
		FBlueprintSessionResult Session;
		int32 Port;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Call this function to begin connection to a server, given its Session Result.\n         * - Returns if the connection progress has started.\n         * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n         * - Beacon Connection is an Async Process, use the 'On Connected' or 'On Connection Failure' Events\n         * on the beacon's blueprint to handle connection failures or use the 'Connect By Session (Async)'\n         * Node to directly get the result on this blueprint.\n         */" },
#endif
		{ "CPP_Default_Port", "-1" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to begin connection to a server, given its Session Result.\n- Returns if the connection progress has started.\n- If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n- Beacon Connection is an Async Process, use the 'On Connected' or 'On Connection Failure' Events\non the beacon's blueprint to handle connection failures or use the 'Connect By Session (Async)'\nNode to directly get the result on this blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventConnectBySession_Parms, Session), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 1307808723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventConnectBySession_Parms, Port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnlineBeaconBlueprint_eventConnectBySession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnlineBeaconBlueprint_eventConnectBySession_Parms), &Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "ConnectBySession", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::OnlineBeaconBlueprint_eventConnectBySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::OnlineBeaconBlueprint_eventConnectBySession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execConnectBySession)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Session);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectBySession(Z_Param_Out_Session,Z_Param_Port);
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function ConnectBySession

// Begin Class AOnlineBeaconBlueprint Function Disconnect
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Call this function to disconnect this Beacon from a server.\n         * Be warned that calling this WILL destroy your Actor.\n         */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to disconnect this Beacon from a server.\nBe warned that calling this WILL destroy your Actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function Disconnect

// Begin Class AOnlineBeaconBlueprint Function DisconnectClient
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics
{
	struct OnlineBeaconBlueprint_eventDisconnectClient_Parms
	{
		AOnlineBeaconBlueprint* Client;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * This function disconnects a client from this beacon.\n         */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function disconnects a client from this beacon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventDisconnectClient_Parms, Client), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::NewProp_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "DisconnectClient", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::OnlineBeaconBlueprint_eventDisconnectClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::OnlineBeaconBlueprint_eventDisconnectClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execDisconnectClient)
{
	P_GET_OBJECT(AOnlineBeaconBlueprint,Z_Param_Client);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectClient(Z_Param_Client);
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function DisconnectClient

// Begin Class AOnlineBeaconBlueprint Function GetConnectedClients
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics
{
	struct OnlineBeaconBlueprint_eventGetConnectedClients_Parms
	{
		TArray<AOnlineBeaconBlueprint*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Utilities|Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * This function will return a list of all clients connected on this beacon.\n         */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return a list of all clients connected on this beacon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventGetConnectedClients_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "GetConnectedClients", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::OnlineBeaconBlueprint_eventGetConnectedClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::OnlineBeaconBlueprint_eventGetConnectedClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execGetConnectedClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AOnlineBeaconBlueprint*>*)Z_Param__Result=P_THIS->GetConnectedClients();
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function GetConnectedClients

// Begin Class AOnlineBeaconBlueprint Function GetConnectionStateBlueprint
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics
{
	struct OnlineBeaconBlueprint_eventGetConnectionStateBlueprint_Parms
	{
		EBeaconConnectionStateBlueprint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Utilities|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Gets the current state of the Beacon connection, for easy blueprint use.\n         */" },
#endif
		{ "DisplayName", "Get Connection State" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current state of the Beacon connection, for easy blueprint use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventGetConnectionStateBlueprint_Parms, ReturnValue), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint, METADATA_PARAMS(0, nullptr) }; // 253362165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "GetConnectionStateBlueprint", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::OnlineBeaconBlueprint_eventGetConnectionStateBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::OnlineBeaconBlueprint_eventGetConnectionStateBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOnlineBeaconBlueprint::execGetConnectionStateBlueprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBeaconConnectionStateBlueprint*)Z_Param__Result=P_THIS->GetConnectionStateBlueprint();
	P_NATIVE_END;
}
// End Class AOnlineBeaconBlueprint Function GetConnectionStateBlueprint

// Begin Class AOnlineBeaconBlueprint Function OnClientConnected
struct OnlineBeaconBlueprint_eventOnClientConnected_Parms
{
	AOnlineBeaconBlueprint* Client;
};
static const FName NAME_AOnlineBeaconBlueprint_OnClientConnected = FName(TEXT("OnClientConnected"));
void AOnlineBeaconBlueprint::OnClientConnected(AOnlineBeaconBlueprint* Client)
{
	OnlineBeaconBlueprint_eventOnClientConnected_Parms Parms;
	Parms.Client=Client;
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnClientConnected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * This event is called on the server when a new client connects.\n         */" },
#endif
		{ "DisplayName", "On Client Connected" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event is called on the server when a new client connects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnClientConnected_Parms, Client), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::NewProp_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnClientConnected", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::PropPointers), sizeof(OnlineBeaconBlueprint_eventOnClientConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnlineBeaconBlueprint_eventOnClientConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnClientConnected

// Begin Class AOnlineBeaconBlueprint Function OnClientDisconnected
struct OnlineBeaconBlueprint_eventOnClientDisconnected_Parms
{
	AOnlineBeaconBlueprint* Client;
};
static const FName NAME_AOnlineBeaconBlueprint_OnClientDisconnected = FName(TEXT("OnClientDisconnected"));
void AOnlineBeaconBlueprint::OnClientDisconnected(AOnlineBeaconBlueprint* Client)
{
	OnlineBeaconBlueprint_eventOnClientDisconnected_Parms Parms;
	Parms.Client=Client;
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnClientDisconnected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * This event is called on the server when a new client disconnects.\n         */" },
#endif
		{ "DisplayName", "On Client Disconnected" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event is called on the server when a new client disconnects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnClientDisconnected_Parms, Client), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::NewProp_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnClientDisconnected", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::PropPointers), sizeof(OnlineBeaconBlueprint_eventOnClientDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnlineBeaconBlueprint_eventOnClientDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnClientDisconnected

// Begin Class AOnlineBeaconBlueprint Function OnConnectedBlueprint
static const FName NAME_AOnlineBeaconBlueprint_OnConnectedBlueprint = FName(TEXT("OnConnectedBlueprint"));
void AOnlineBeaconBlueprint::OnConnectedBlueprint()
{
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnConnectedBlueprint);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Called when the Beacon has successfully connected.\n         */" },
#endif
		{ "DisplayName", "On Connected" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the Beacon has successfully connected." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnConnectedBlueprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnConnectedBlueprint

// Begin Class AOnlineBeaconBlueprint Function OnConnectionFailureBlueprint
static const FName NAME_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint = FName(TEXT("OnConnectionFailureBlueprint"));
void AOnlineBeaconBlueprint::OnConnectionFailureBlueprint()
{
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Called when the Beacon has failed its connection to the server.\n         */" },
#endif
		{ "DisplayName", "On Connection Failed" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the Beacon has failed its connection to the server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnConnectionFailureBlueprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnConnectionFailureBlueprint

// Begin Class AOnlineBeaconBlueprint Function OnConnectionStateChanged
struct OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms
{
	EBeaconConnectionStateBlueprint From;
	EBeaconConnectionStateBlueprint To;
};
static const FName NAME_AOnlineBeaconBlueprint_OnConnectionStateChanged = FName(TEXT("OnConnectionStateChanged"));
void AOnlineBeaconBlueprint::OnConnectionStateChanged(EBeaconConnectionStateBlueprint From, EBeaconConnectionStateBlueprint To)
{
	OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms Parms;
	Parms.From=From;
	Parms.To=To;
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnConnectionStateChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Called when the beacon connection state changes.\n         */" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the beacon connection state changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_From_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_From;
	static const UECodeGen_Private::FBytePropertyParams NewProp_To_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_To;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_From_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms, From), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint, METADATA_PARAMS(0, nullptr) }; // 253362165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_To_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms, To), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconConnectionStateBlueprint, METADATA_PARAMS(0, nullptr) }; // 253362165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_From_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_To_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::NewProp_To,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnConnectionStateChanged", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::PropPointers), sizeof(OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnlineBeaconBlueprint_eventOnConnectionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnConnectionStateChanged

// Begin Class AOnlineBeaconBlueprint Function OnDisconnected
struct OnlineBeaconBlueprint_eventOnDisconnected_Parms
{
	EBeaconDisconnectReason Reason;
};
static const FName NAME_AOnlineBeaconBlueprint_OnDisconnected = FName(TEXT("OnDisconnected"));
void AOnlineBeaconBlueprint::OnDisconnected(EBeaconDisconnectReason Reason)
{
	OnlineBeaconBlueprint_eventOnDisconnected_Parms Parms;
	Parms.Reason=Reason;
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnDisconnected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Called when the Beacon is disconnecting.\n         */" },
#endif
		{ "DisplayName", "On Disconnected" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the Beacon is disconnecting." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnDisconnected_Parms, Reason), Z_Construct_UEnum_BlueprintableOnlineBeacons_EBeaconDisconnectReason, METADATA_PARAMS(0, nullptr) }; // 3005061039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::NewProp_Reason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnDisconnected", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::PropPointers), sizeof(OnlineBeaconBlueprint_eventOnDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnlineBeaconBlueprint_eventOnDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnDisconnected

// Begin Class AOnlineBeaconBlueprint Function OnNetworkFailure
struct OnlineBeaconBlueprint_eventOnNetworkFailure_Parms
{
	TEnumAsByte<ENetworkFailure::Type> FailureType;
};
static const FName NAME_AOnlineBeaconBlueprint_OnNetworkFailure = FName(TEXT("OnNetworkFailure"));
void AOnlineBeaconBlueprint::OnNetworkFailure(ENetworkFailure::Type FailureType)
{
	OnlineBeaconBlueprint_eventOnNetworkFailure_Parms Parms;
	Parms.FailureType=FailureType;
	UFunction* Func = FindFunctionChecked(NAME_AOnlineBeaconBlueprint_OnNetworkFailure);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n         * Called when the beacon finds a network failure.\n         */" },
#endif
		{ "DisplayName", "On Network Failure" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the beacon finds a network failure." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconBlueprint_eventOnNetworkFailure_Parms, FailureType), Z_Construct_UEnum_NetCore_ENetworkFailure, METADATA_PARAMS(0, nullptr) }; // 1270560748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconBlueprint, nullptr, "OnNetworkFailure", nullptr, nullptr, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::PropPointers), sizeof(OnlineBeaconBlueprint_eventOnNetworkFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnlineBeaconBlueprint_eventOnNetworkFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOnlineBeaconBlueprint Function OnNetworkFailure

// Begin Class AOnlineBeaconBlueprint
void AOnlineBeaconBlueprint::StaticRegisterNativesAOnlineBeaconBlueprint()
{
	UClass* Class = AOnlineBeaconBlueprint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectByIP", &AOnlineBeaconBlueprint::execConnectByIP },
		{ "ConnectBySession", &AOnlineBeaconBlueprint::execConnectBySession },
		{ "Disconnect", &AOnlineBeaconBlueprint::execDisconnect },
		{ "DisconnectClient", &AOnlineBeaconBlueprint::execDisconnectClient },
		{ "GetConnectedClients", &AOnlineBeaconBlueprint::execGetConnectedClients },
		{ "GetConnectionStateBlueprint", &AOnlineBeaconBlueprint::execGetConnectionStateBlueprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconBlueprint);
UClass* Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister()
{
	return AOnlineBeaconBlueprint::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Allows Blueprint Implementation for a Online Beacon.\n * RPCs created on this Actor replicates between the Client/Server connection.\n */" },
#endif
		{ "IncludePath", "OnlineBeaconBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBeaconBlueprint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint Implementation for a Online Beacon.\nRPCs created on this Actor replicates between the Client/Server connection." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectByIP, "ConnectByIP" }, // 4005246879
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_ConnectBySession, "ConnectBySession" }, // 1451238902
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_Disconnect, "Disconnect" }, // 4267221644
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_DisconnectClient, "DisconnectClient" }, // 66625537
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectedClients, "GetConnectedClients" }, // 4199214744
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_GetConnectionStateBlueprint, "GetConnectionStateBlueprint" }, // 4158075978
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientConnected, "OnClientConnected" }, // 1306981921
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnClientDisconnected, "OnClientDisconnected" }, // 3106894517
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectedBlueprint, "OnConnectedBlueprint" }, // 640776411
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionFailureBlueprint, "OnConnectionFailureBlueprint" }, // 225795020
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnConnectionStateChanged, "OnConnectionStateChanged" }, // 1393399028
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnDisconnected, "OnDisconnected" }, // 3080585587
		{ &Z_Construct_UFunction_AOnlineBeaconBlueprint_OnNetworkFailure, "OnNetworkFailure" }, // 3277997321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::ClassParams = {
	&AOnlineBeaconBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconBlueprint()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconBlueprint.OuterSingleton, Z_Construct_UClass_AOnlineBeaconBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconBlueprint.OuterSingleton;
}
template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<AOnlineBeaconBlueprint>()
{
	return AOnlineBeaconBlueprint::StaticClass();
}
AOnlineBeaconBlueprint::AOnlineBeaconBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconBlueprint);
AOnlineBeaconBlueprint::~AOnlineBeaconBlueprint() {}
// End Class AOnlineBeaconBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBeaconConnectionStateBlueprint_StaticEnum, TEXT("EBeaconConnectionStateBlueprint"), &Z_Registration_Info_UEnum_EBeaconConnectionStateBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 253362165U) },
		{ EBeaconDisconnectReason_StaticEnum, TEXT("EBeaconDisconnectReason"), &Z_Registration_Info_UEnum_EBeaconDisconnectReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3005061039U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconBlueprint, AOnlineBeaconBlueprint::StaticClass, TEXT("AOnlineBeaconBlueprint"), &Z_Registration_Info_UClass_AOnlineBeaconBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconBlueprint), 1834048464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_4257315831(TEXT("/Script/BlueprintableOnlineBeacons"),
	Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
