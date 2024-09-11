// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayDb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayDbPurpose : uint8;
struct FLogInfo;
#ifdef SQLITEGAMEDB_PlayDb_generated_h
#error "PlayDb.generated.h already included, missing '#pragma once' in PlayDb.h"
#endif
#define SQLITEGAMEDB_PlayDb_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_SPARSE_DATA
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectResumePlayDb); \
	DECLARE_FUNCTION(execCreateQuickSavePlayDb); \
	DECLARE_FUNCTION(execCreatePlayDbFromTemplate); \
	DECLARE_FUNCTION(execConnectPlayDb); \
	DECLARE_FUNCTION(execGetCurrentPlayDbPath); \
	DECLARE_FUNCTION(execGetCurrentLogDbPath); \
	DECLARE_FUNCTION(execListLogEntriesPaged); \
	DECLARE_FUNCTION(execListLogEntries);


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplitDbBase(); \
	friend struct Z_Construct_UClass_USplitDbBase_Statics; \
public: \
	DECLARE_CLASS(USplitDbBase, UDbBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SqliteGameDB"), NO_API) \
	DECLARE_SERIALIZER(USplitDbBase)


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplitDbBase(USplitDbBase&&); \
	NO_API USplitDbBase(const USplitDbBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplitDbBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplitDbBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplitDbBase) \
	NO_API virtual ~USplitDbBase();


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_21_PROLOG
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_SPARSE_DATA \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLITEGAMEDB_API UClass* StaticClass<class USplitDbBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
