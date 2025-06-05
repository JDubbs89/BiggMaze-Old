// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Multiplayer/BMLobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMLobbyGameMode() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMLobbyGameMode();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMLobbyGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABMLobbyGameMode Function CreateHostBeacon
struct Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics
{
	struct BMLobbyGameMode_eventCreateHostBeacon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Multiplayer/BMLobbyGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BMLobbyGameMode_eventCreateHostBeacon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BMLobbyGameMode_eventCreateHostBeacon_Parms), &Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABMLobbyGameMode, nullptr, "CreateHostBeacon", nullptr, nullptr, Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::BMLobbyGameMode_eventCreateHostBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::BMLobbyGameMode_eventCreateHostBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABMLobbyGameMode::execCreateHostBeacon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateHostBeacon();
	P_NATIVE_END;
}
// End Class ABMLobbyGameMode Function CreateHostBeacon

// Begin Class ABMLobbyGameMode
void ABMLobbyGameMode::StaticRegisterNativesABMLobbyGameMode()
{
	UClass* Class = ABMLobbyGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHostBeacon", &ABMLobbyGameMode::execCreateHostBeacon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABMLobbyGameMode);
UClass* Z_Construct_UClass_ABMLobbyGameMode_NoRegister()
{
	return ABMLobbyGameMode::StaticClass();
}
struct Z_Construct_UClass_ABMLobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Multiplayer/BMLobbyGameMode.h" },
		{ "ModuleRelativePath", "Public/Multiplayer/BMLobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABMLobbyGameMode_CreateHostBeacon, "CreateHostBeacon" }, // 166076034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABMLobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABMLobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABMLobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABMLobbyGameMode_Statics::ClassParams = {
	&ABMLobbyGameMode::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABMLobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABMLobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABMLobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton, Z_Construct_UClass_ABMLobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABMLobbyGameMode.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABMLobbyGameMode>()
{
	return ABMLobbyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABMLobbyGameMode);
ABMLobbyGameMode::~ABMLobbyGameMode() {}
// End Class ABMLobbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABMLobbyGameMode, ABMLobbyGameMode::StaticClass, TEXT("ABMLobbyGameMode"), &Z_Registration_Info_UClass_ABMLobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMLobbyGameMode), 2093940523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_444033594(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMLobbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
