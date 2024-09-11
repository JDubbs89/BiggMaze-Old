// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PreparedStatementManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDbStatement;
struct FQueryResult;
struct FQueryResultField;
#ifdef SQLITEGAMEDB_PreparedStatementManager_generated_h
#error "PreparedStatementManager.generated.h already included, missing '#pragma once' in PreparedStatementManager.h"
#endif
#define SQLITEGAMEDB_PreparedStatementManager_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_SPARSE_DATA
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRollbackTransaction); \
	DECLARE_FUNCTION(execCommitTransaction); \
	DECLARE_FUNCTION(execBeginTransaction); \
	DECLARE_FUNCTION(execRunTempActionQuery); \
	DECLARE_FUNCTION(execRunTempScalarQuery); \
	DECLARE_FUNCTION(execRunTempSelectQuery); \
	DECLARE_FUNCTION(execCreateStatementInGroup); \
	DECLARE_FUNCTION(execCreateStatement); \
	DECLARE_FUNCTION(execFindStatement); \
	DECLARE_FUNCTION(execFindStatementInGroup); \
	DECLARE_FUNCTION(execListAttachedSchemas); \
	DECLARE_FUNCTION(execIsSchemaAttached); \
	DECLARE_FUNCTION(execDetachDatabase); \
	DECLARE_FUNCTION(execAttachDatabase); \
	DECLARE_FUNCTION(execReconnectGroupStatements); \
	DECLARE_FUNCTION(execReconnectStatements); \
	DECLARE_FUNCTION(execDisconnectGroupStatements); \
	DECLARE_FUNCTION(execDisconnectStatements); \
	DECLARE_FUNCTION(execLoadStatementsIntoGroup); \
	DECLARE_FUNCTION(execLoadStatements);


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreparedStatementManager(); \
	friend struct Z_Construct_UClass_UPreparedStatementManager_Statics; \
public: \
	DECLARE_CLASS(UPreparedStatementManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SqliteGameDB"), NO_API) \
	DECLARE_SERIALIZER(UPreparedStatementManager)


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreparedStatementManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPreparedStatementManager(UPreparedStatementManager&&); \
	NO_API UPreparedStatementManager(const UPreparedStatementManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreparedStatementManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreparedStatementManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreparedStatementManager) \
	NO_API virtual ~UPreparedStatementManager();


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_14_PROLOG
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_SPARSE_DATA \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLITEGAMEDB_API UClass* StaticClass<class UPreparedStatementManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
