// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameDbConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLITEGAMEDB_GameDbConfig_generated_h
#error "GameDbConfig.generated.h already included, missing '#pragma once' in GameDbConfig.h"
#endif
#define SQLITEGAMEDB_GameDbConfig_generated_h

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameDbAttachment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FGameDbAttachment>();

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameDbConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<struct FGameDbConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h


#define FOREACH_ENUM_EDBFILEPURPOSE(op) \
	op(EDbFilePurpose::None) \
	op(EDbFilePurpose::Custom) \
	op(EDbFilePurpose::Main) \
	op(EDbFilePurpose::LogTemplate) \
	op(EDbFilePurpose::PlayTemplate) 

enum class EDbFilePurpose : uint8;
template<> struct TIsUEnumClass<EDbFilePurpose> { enum { Value = true }; };
template<> SQLITEGAMEDB_API UEnum* StaticEnum<EDbFilePurpose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
