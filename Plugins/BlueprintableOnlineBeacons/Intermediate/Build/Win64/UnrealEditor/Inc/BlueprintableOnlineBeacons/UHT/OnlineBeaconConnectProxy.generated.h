// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconConnectProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOnlineBeaconBlueprint;
class UOnlineBeaconConnectProxy;
struct FBlueprintSessionResult;
#ifdef BLUEPRINTABLEONLINEBEACONS_OnlineBeaconConnectProxy_generated_h
#error "OnlineBeaconConnectProxy.generated.h already included, missing '#pragma once' in OnlineBeaconConnectProxy.h"
#endif
#define BLUEPRINTABLEONLINEBEACONS_OnlineBeaconConnectProxy_generated_h

#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_11_DELEGATE \
BLUEPRINTABLEONLINEBEACONS_API void FOnlineBeaconConnectDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnlineBeaconConnectDelegate);


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConnectBySessionAsync); \
	DECLARE_FUNCTION(execConnectByIPAsync);


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineBeaconConnectProxy(); \
	friend struct Z_Construct_UClass_UOnlineBeaconConnectProxy_Statics; \
public: \
	DECLARE_CLASS(UOnlineBeaconConnectProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintableOnlineBeacons"), NO_API) \
	DECLARE_SERIALIZER(UOnlineBeaconConnectProxy)


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineBeaconConnectProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnlineBeaconConnectProxy(UOnlineBeaconConnectProxy&&); \
	UOnlineBeaconConnectProxy(const UOnlineBeaconConnectProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineBeaconConnectProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBeaconConnectProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBeaconConnectProxy) \
	NO_API virtual ~UOnlineBeaconConnectProxy();


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_17_PROLOG
#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<class UOnlineBeaconConnectProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconConnectProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
