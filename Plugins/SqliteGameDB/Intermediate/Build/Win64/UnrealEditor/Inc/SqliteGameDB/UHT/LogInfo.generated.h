// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLITEGAMEDB_LogInfo_generated_h
#error "LogInfo.generated.h already included, missing '#pragma once' in LogInfo.h"
#endif
#define SQLITEGAMEDB_LogInfo_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLogInfo_Statics; \
	SQLITEGAMEDB_API static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FLogInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h


#define FOREACH_ENUM_EPLAYDBPURPOSE(op) \
	op(EPlayDbPurpose::None) \
	op(EPlayDbPurpose::NewGame) \
	op(EPlayDbPurpose::AutoSave) \
	op(EPlayDbPurpose::QuickSave) \
	op(EPlayDbPurpose::ManualSave) 

enum class EPlayDbPurpose : uint8;
template<> struct TIsUEnumClass<EPlayDbPurpose> { enum { Value = true }; };
template<> SQLITEGAMEDB_API UEnum* StaticEnum<EPlayDbPurpose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
