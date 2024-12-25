// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineBeaconBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOnlineBeaconBlueprint;
enum class EBeaconConnectionStateBlueprint : uint8;
enum class EBeaconDisconnectReason : uint8;
struct FBlueprintSessionResult;
#ifdef BLUEPRINTABLEONLINEBEACONS_OnlineBeaconBlueprint_generated_h
#error "OnlineBeaconBlueprint.generated.h already included, missing '#pragma once' in OnlineBeaconBlueprint.h"
#endif
#define BLUEPRINTABLEONLINEBEACONS_OnlineBeaconBlueprint_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectClient); \
	DECLARE_FUNCTION(execGetConnectedClients); \
	DECLARE_FUNCTION(execGetConnectionStateBlueprint); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnectBySession); \
	DECLARE_FUNCTION(execConnectByIP);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineBeaconBlueprint(); \
	friend struct Z_Construct_UClass_AOnlineBeaconBlueprint_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeaconBlueprint, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintableOnlineBeacons"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeaconBlueprint)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBeaconBlueprint(AOnlineBeaconBlueprint&&); \
	NO_API AOnlineBeaconBlueprint(const AOnlineBeaconBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconBlueprint) \
	NO_API virtual ~AOnlineBeaconBlueprint();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_37_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTABLEONLINEBEACONS_API UClass* StaticClass<class AOnlineBeaconBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintableOnlineBeacons_Source_BlueprintableOnlineBeacons_Public_OnlineBeaconBlueprint_h


#define FOREACH_ENUM_EBEACONCONNECTIONSTATEBLUEPRINT(op) \
	op(EBeaconConnectionStateBlueprint::BCE_Invalid) \
	op(EBeaconConnectionStateBlueprint::BCE_Closed) \
	op(EBeaconConnectionStateBlueprint::BCE_Pending) \
	op(EBeaconConnectionStateBlueprint::BCE_Open) 

enum class EBeaconConnectionStateBlueprint : uint8;
template<> struct TIsUEnumClass<EBeaconConnectionStateBlueprint> { enum { Value = true }; };
template<> BLUEPRINTABLEONLINEBEACONS_API UEnum* StaticEnum<EBeaconConnectionStateBlueprint>();

#define FOREACH_ENUM_EBEACONDISCONNECTREASON(op) \
	op(EBeaconDisconnectReason::BDR_Client) \
	op(EBeaconDisconnectReason::BDR_Server) 

enum class EBeaconDisconnectReason : uint8;
template<> struct TIsUEnumClass<EBeaconDisconnectReason> { enum { Value = true }; };
template<> BLUEPRINTABLEONLINEBEACONS_API UEnum* StaticEnum<EBeaconDisconnectReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
