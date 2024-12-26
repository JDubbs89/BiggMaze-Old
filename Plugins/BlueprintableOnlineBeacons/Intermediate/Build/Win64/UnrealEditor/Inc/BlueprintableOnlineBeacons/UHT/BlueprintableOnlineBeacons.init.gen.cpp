// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintableOnlineBeacons_init() {}
	BLUEPRINTABLEONLINEBEACONS_API UFunction* Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintableOnlineBeacons;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintableOnlineBeacons()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintableOnlineBeacons.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintableOnlineBeacons_OnlineBeaconConnectDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintableOnlineBeacons",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5F016A2B,
				0xF1F2567D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintableOnlineBeacons.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintableOnlineBeacons.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintableOnlineBeacons(Z_Construct_UPackage__Script_BlueprintableOnlineBeacons, TEXT("/Script/BlueprintableOnlineBeacons"), Z_Registration_Info_UPackage__Script_BlueprintableOnlineBeacons, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F016A2B, 0xF1F2567D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
