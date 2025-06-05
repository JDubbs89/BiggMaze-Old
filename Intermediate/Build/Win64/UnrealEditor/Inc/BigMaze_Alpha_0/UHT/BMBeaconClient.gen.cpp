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

// Begin Class ABMBeaconClient Function ConnectToServer
struct Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics
{
	struct BMBeaconClient_eventConnectToServer_Parms
	{
		FString Address;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Multiplayer/BMBeaconClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BMBeaconClient_eventConnectToServer_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
void Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BMBeaconClient_eventConnectToServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BMBeaconClient_eventConnectToServer_Parms), &Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABMBeaconClient, nullptr, "ConnectToServer", nullptr, nullptr, Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::BMBeaconClient_eventConnectToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::BMBeaconClient_eventConnectToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABMBeaconClient_ConnectToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABMBeaconClient_ConnectToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABMBeaconClient::execConnectToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToServer(Z_Param_Address);
	P_NATIVE_END;
}
// End Class ABMBeaconClient Function ConnectToServer

// Begin Class ABMBeaconClient
void ABMBeaconClient::StaticRegisterNativesABMBeaconClient()
{
	UClass* Class = ABMBeaconClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToServer", &ABMBeaconClient::execConnectToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABMBeaconClient_ConnectToServer, "ConnectToServer" }, // 1892672928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ABMBeaconClient);
ABMBeaconClient::~ABMBeaconClient() {}
// End Class ABMBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABMBeaconClient, ABMBeaconClient::StaticClass, TEXT("ABMBeaconClient"), &Z_Registration_Info_UClass_ABMBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMBeaconClient), 4282395486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_929653707(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
