// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/Multiplayer/BMBeaconHostObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBMBeaconHostObject() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMBeaconHostObject();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABMBeaconHostObject_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Class ABMBeaconHostObject
void ABMBeaconHostObject::StaticRegisterNativesABMBeaconHostObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABMBeaconHostObject);
UClass* Z_Construct_UClass_ABMBeaconHostObject_NoRegister()
{
	return ABMBeaconHostObject::StaticClass();
}
struct Z_Construct_UClass_ABMBeaconHostObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Multiplayer/BMBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/Multiplayer/BMBeaconHostObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABMBeaconHostObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABMBeaconHostObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABMBeaconHostObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABMBeaconHostObject_Statics::ClassParams = {
	&ABMBeaconHostObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABMBeaconHostObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ABMBeaconHostObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABMBeaconHostObject()
{
	if (!Z_Registration_Info_UClass_ABMBeaconHostObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABMBeaconHostObject.OuterSingleton, Z_Construct_UClass_ABMBeaconHostObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABMBeaconHostObject.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABMBeaconHostObject>()
{
	return ABMBeaconHostObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABMBeaconHostObject);
ABMBeaconHostObject::~ABMBeaconHostObject() {}
// End Class ABMBeaconHostObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconHostObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABMBeaconHostObject, ABMBeaconHostObject::StaticClass, TEXT("ABMBeaconHostObject"), &Z_Registration_Info_UClass_ABMBeaconHostObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABMBeaconHostObject), 822440928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconHostObject_h_761408665(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconHostObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Multiplayer_BMBeaconHostObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
