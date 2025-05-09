// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintableOnlineBeacons/Public/OnlineBeaconConnectProxy.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconConnectProxy() {}

// Begin Cross Module References
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister();
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconConnectProxy();
BLUEPRINTABLEONLINEBEACONS_API UClass* Z_Construct_UClass_UOnlineBeaconConnectProxy_NoRegister();
BLUEPRINTABLEONLINEBEACONS_API UFunction* Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons();
// End Cross Module References

// Begin Delegate FOnlineBeaconConnectDelegate
struct Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our Callback for this Connect By IP Proxy.\n" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our Callback for this Connect By IP Proxy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons, nullptr, "OnlineBeaconConnectDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnlineBeaconConnectDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnlineBeaconConnectDelegate)
{
	OnlineBeaconConnectDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnlineBeaconConnectDelegate

// Begin Class UOnlineBeaconConnectProxy Function ConnectByIPAsync
struct Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics
{
	struct OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms
	{
		AOnlineBeaconBlueprint* Target;
		FString Address;
		int32 Port;
		UOnlineBeaconConnectProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * Call this function to begin connecting to a server, given an Address.\n\x09     * - Returns if the connection progress has started.\n\x09     * - Additional 'On Success' and 'On Failure' branches for additional functionality without using\n\x09     * internal Beacon Blueprint events.\n\x09\x09 * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n\x09\x09 */" },
#endif
		{ "CPP_Default_Port", "-1" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Connect By IP (Async)" },
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to begin connecting to a server, given an Address.\n- Returns if the connection progress has started.\n- Additional 'On Success' and 'On Failure' branches for additional functionality without using\ninternal Beacon Blueprint events.\n- If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms, Target), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms, Address), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms, ReturnValue), Z_Construct_UClass_UOnlineBeaconConnectProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconConnectProxy, nullptr, "ConnectByIPAsync", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::OnlineBeaconConnectProxy_eventConnectByIPAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnlineBeaconConnectProxy::execConnectByIPAsync)
{
	P_GET_OBJECT(AOnlineBeaconBlueprint,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnlineBeaconConnectProxy**)Z_Param__Result=UOnlineBeaconConnectProxy::ConnectByIPAsync(Z_Param_Target,Z_Param_Address,Z_Param_Port);
	P_NATIVE_END;
}
// End Class UOnlineBeaconConnectProxy Function ConnectByIPAsync

// Begin Class UOnlineBeaconConnectProxy Function ConnectBySessionAsync
struct Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics
{
	struct OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms
	{
		AOnlineBeaconBlueprint* Target;
		FBlueprintSessionResult Session;
		int32 Port;
		UOnlineBeaconConnectProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OnlineBeacon|Connection|Client" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09 * Call this function to begin connecting to a server, given a Session.\n\x09\x09 * - Returns if the connection progress has started.\n\x09\x09 * - Additional 'On Success' and 'On Failure' branches for additional functionality without using\n\x09\x09 * internal Beacon Blueprint events.\n\x09\x09 * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.\n\x09\x09 */" },
#endif
		{ "CPP_Default_Port", "-1" },
		{ "DefaultToSelf", "Target" },
		{ "DisplayName", "Connect By Session (Async)" },
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to begin connecting to a server, given a Session.\n- Returns if the connection progress has started.\n- Additional 'On Success' and 'On Failure' branches for additional functionality without using\ninternal Beacon Blueprint events.\n- If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms, Target), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms, Session), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 1307808723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms, ReturnValue), Z_Construct_UClass_UOnlineBeaconConnectProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBeaconConnectProxy, nullptr, "ConnectBySessionAsync", nullptr, nullptr, Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::OnlineBeaconConnectProxy_eventConnectBySessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnlineBeaconConnectProxy::execConnectBySessionAsync)
{
	P_GET_OBJECT(AOnlineBeaconBlueprint,Z_Param_Target);
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Session);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnlineBeaconConnectProxy**)Z_Param__Result=UOnlineBeaconConnectProxy::ConnectBySessionAsync(Z_Param_Target,Z_Param_Out_Session,Z_Param_Port);
	P_NATIVE_END;
}
// End Class UOnlineBeaconConnectProxy Function ConnectBySessionAsync

// Begin Class UOnlineBeaconConnectProxy
void UOnlineBeaconConnectProxy::StaticRegisterNativesUOnlineBeaconConnectProxy()
{
	UClass* Class = UOnlineBeaconConnectProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectByIPAsync", &UOnlineBeaconConnectProxy::execConnectByIPAsync },
		{ "ConnectBySessionAsync", &UOnlineBeaconConnectProxy::execConnectBySessionAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconConnectProxy);
UClass* Z_Construct_UClass_UOnlineBeaconConnectProxy_NoRegister()
{
	return UOnlineBeaconConnectProxy::StaticClass();
}
struct Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Online Beacon Connect by IP Callback Proxy.\n * Used for the Async Node to Connect a Beacon By IP with callbacks for Success and Failure.\n */" },
#endif
		{ "IncludePath", "OnlineBeaconConnectProxy.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Online Beacon Connect by IP Callback Proxy.\nUsed for the Async Node to Connect a Beacon By IP with callbacks for Success and Failure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the Connection was a Success.\n" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the Connection was a Success." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the Connection has failed.\n" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the Connection has failed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Beacon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Reference to the Beacon.\n" },
#endif
		{ "ModuleRelativePath", "Public/OnlineBeaconConnectProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Reference to the Beacon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Beacon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectByIPAsync, "ConnectByIPAsync" }, // 655136516
		{ &Z_Construct_UFunction_UOnlineBeaconConnectProxy_ConnectBySessionAsync, "ConnectBySessionAsync" }, // 1100643536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconConnectProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconConnectProxy, OnSuccess), Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 24282184
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconConnectProxy, OnFailure), Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 24282184
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_Beacon = { "Beacon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineBeaconConnectProxy, Beacon), Z_Construct_UClass_AOnlineBeaconBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Beacon_MetaData), NewProp_Beacon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::NewProp_Beacon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintableOnlineBeacons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::ClassParams = {
	&UOnlineBeaconConnectProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineBeaconConnectProxy()
{
	if (!Z_Registration_Info_UClass_UOnlineBeaconConnectProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBeaconConnectProxy.OuterSingleton, Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineBeaconConnectProxy.OuterSingleton;
}
template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<UOnlineBeaconConnectProxy>()
{
	return UOnlineBeaconConnectProxy::StaticClass();
}
UOnlineBeaconConnectProxy::UOnlineBeaconConnectProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBeaconConnectProxy);
UOnlineBeaconConnectProxy::~UOnlineBeaconConnectProxy() {}
// End Class UOnlineBeaconConnectProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconConnectProxy, UOnlineBeaconConnectProxy::StaticClass, TEXT("UOnlineBeaconConnectProxy"), &Z_Registration_Info_UClass_UOnlineBeaconConnectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconConnectProxy), 974029979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_3343798281(TEXT("/Script/BlueprintableOnlineBeacons"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
