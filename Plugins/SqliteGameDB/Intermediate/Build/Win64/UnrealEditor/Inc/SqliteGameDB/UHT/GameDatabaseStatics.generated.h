// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameDatabaseStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDbStatement;
struct FLinearColor;
struct FQueryResultRow;
#ifdef SQLITEGAMEDB_GameDatabaseStatics_generated_h
#error "GameDatabaseStatics.generated.h already included, missing '#pragma once' in GameDatabaseStatics.h"
#endif
#define SQLITEGAMEDB_GameDatabaseStatics_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_SPARSE_DATA
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryBindActorRotation); \
	DECLARE_FUNCTION(execTryBindActorLocation); \
	DECLARE_FUNCTION(execTryBindActorLocationRotation); \
	DECLARE_FUNCTION(execTrySetActorLocationRotation); \
	DECLARE_FUNCTION(execTryFillRotation); \
	DECLARE_FUNCTION(execTryFillColor); \
	DECLARE_FUNCTION(execTryFillVector);


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDatabaseStatics(); \
	friend struct Z_Construct_UClass_UGameDatabaseStatics_Statics; \
public: \
	DECLARE_CLASS(UGameDatabaseStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SqliteGameDB"), NO_API) \
	DECLARE_SERIALIZER(UGameDatabaseStatics)


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDatabaseStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDatabaseStatics(UGameDatabaseStatics&&); \
	NO_API UGameDatabaseStatics(const UGameDatabaseStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDatabaseStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDatabaseStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDatabaseStatics) \
	NO_API virtual ~UGameDatabaseStatics();


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_13_PROLOG
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_SPARSE_DATA \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLITEGAMEDB_API UClass* StaticClass<class UGameDatabaseStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
