// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DBSupport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLITEGAMEDB_DBSupport_generated_h
#error "DBSupport.generated.h already included, missing '#pragma once' in DBSupport.h"
#endif
#define SQLITEGAMEDB_DBSupport_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultField_Statics; \
	SQLITEGAMEDB_API static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FQueryResultField>();

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRow_Statics; \
	SQLITEGAMEDB_API static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FQueryResultRow>();

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResult_Statics; \
	SQLITEGAMEDB_API static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FQueryResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h


#define FOREACH_ENUM_EDBVALUETYPE(op) \
	op(EDbValueType::Integer) \
	op(EDbValueType::Float) \
	op(EDbValueType::String) \
	op(EDbValueType::Blob) \
	op(EDbValueType::Null) 

enum class EDbValueType : uint8;
template<> struct TIsUEnumClass<EDbValueType> { enum { Value = true }; };
template<> SQLITEGAMEDB_API UEnum* StaticEnum<EDbValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
