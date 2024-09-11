// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DbStatement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDbBase;
struct FQueryResult;
struct FQueryResultField;
#ifdef SQLITEGAMEDB_DbStatement_generated_h
#error "DbStatement.generated.h already included, missing '#pragma once' in DbStatement.h"
#endif
#define SQLITEGAMEDB_DbStatement_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_SPARSE_DATA
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteSelect); \
	DECLARE_FUNCTION(execExecuteScalar); \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execSetStringParameterValue); \
	DECLARE_FUNCTION(execSetFloatParameterValue); \
	DECLARE_FUNCTION(execSetLongParameterValue); \
	DECLARE_FUNCTION(execSetIntParameterValue); \
	DECLARE_FUNCTION(execSetByteParameterValue); \
	DECLARE_FUNCTION(execSetBoolParameterValue); \
	DECLARE_FUNCTION(execInitStatement);


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDbStatement(); \
	friend struct Z_Construct_UClass_UDbStatement_Statics; \
public: \
	DECLARE_CLASS(UDbStatement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SqliteGameDB"), NO_API) \
	DECLARE_SERIALIZER(UDbStatement)


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDbStatement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDbStatement(UDbStatement&&); \
	NO_API UDbStatement(const UDbStatement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDbStatement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDbStatement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDbStatement) \
	NO_API virtual ~UDbStatement();


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_16_PROLOG
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_SPARSE_DATA \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLITEGAMEDB_API UClass* StaticClass<class UDbStatement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
