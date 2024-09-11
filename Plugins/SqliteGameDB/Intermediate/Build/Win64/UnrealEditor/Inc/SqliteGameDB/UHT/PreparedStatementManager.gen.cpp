// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/PreparedStatementManager.h"
#include "SqliteGameDB/Public/DBSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreparedStatementManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbStatement_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementGroup_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementManager();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementManager_NoRegister();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResult();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultField();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(UPreparedStatementManager::execRollbackTransaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RollbackTransaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execCommitTransaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CommitTransaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execBeginTransaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTransaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execRunTempActionQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlToRun);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTempActionQuery(Z_Param_SqlToRun);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execRunTempScalarQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlToRun);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQueryResultField*)Z_Param__Result=P_THIS->RunTempScalarQuery(Z_Param_SqlToRun);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execRunTempSelectQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlToRun);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQueryResult*)Z_Param__Result=P_THIS->RunTempSelectQuery(Z_Param_SqlToRun);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execCreateStatementInGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StatementName);
		P_GET_PROPERTY(FStrProperty,Z_Param_QuerySql);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbStatement**)Z_Param__Result=P_THIS->CreateStatementInGroup(Z_Param_GroupName,Z_Param_StatementName,Z_Param_QuerySql);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execCreateStatement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatementName);
		P_GET_PROPERTY(FStrProperty,Z_Param_QuerySql);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbStatement**)Z_Param__Result=P_THIS->CreateStatement(Z_Param_StatementName,Z_Param_QuerySql);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execFindStatement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbStatement**)Z_Param__Result=P_THIS->FindStatement(Z_Param_StatementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execFindStatementInGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StatementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbStatement**)Z_Param__Result=P_THIS->FindStatementInGroup(Z_Param_GroupName,Z_Param_StatementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execListAttachedSchemas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ListAttachedSchemas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execIsSchemaAttached)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SchemaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSchemaAttached(Z_Param_SchemaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execDetachDatabase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SchemaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachDatabase(Z_Param_SchemaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execAttachDatabase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseFilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_SchemaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttachDatabase(Z_Param_DatabaseFilePath,Z_Param_SchemaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execReconnectGroupStatements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReconnectGroupStatements(Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execReconnectStatements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReconnectStatements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execDisconnectGroupStatements)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectGroupStatements(Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execDisconnectStatements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectStatements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execLoadStatementsIntoGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SchemaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LoadStatementsIntoGroup(Z_Param_SchemaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreparedStatementManager::execLoadStatements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LoadStatements();
		P_NATIVE_END;
	}
	void UPreparedStatementManager::StaticRegisterNativesUPreparedStatementManager()
	{
		UClass* Class = UPreparedStatementManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachDatabase", &UPreparedStatementManager::execAttachDatabase },
			{ "BeginTransaction", &UPreparedStatementManager::execBeginTransaction },
			{ "CommitTransaction", &UPreparedStatementManager::execCommitTransaction },
			{ "CreateStatement", &UPreparedStatementManager::execCreateStatement },
			{ "CreateStatementInGroup", &UPreparedStatementManager::execCreateStatementInGroup },
			{ "DetachDatabase", &UPreparedStatementManager::execDetachDatabase },
			{ "DisconnectGroupStatements", &UPreparedStatementManager::execDisconnectGroupStatements },
			{ "DisconnectStatements", &UPreparedStatementManager::execDisconnectStatements },
			{ "FindStatement", &UPreparedStatementManager::execFindStatement },
			{ "FindStatementInGroup", &UPreparedStatementManager::execFindStatementInGroup },
			{ "IsSchemaAttached", &UPreparedStatementManager::execIsSchemaAttached },
			{ "ListAttachedSchemas", &UPreparedStatementManager::execListAttachedSchemas },
			{ "LoadStatements", &UPreparedStatementManager::execLoadStatements },
			{ "LoadStatementsIntoGroup", &UPreparedStatementManager::execLoadStatementsIntoGroup },
			{ "ReconnectGroupStatements", &UPreparedStatementManager::execReconnectGroupStatements },
			{ "ReconnectStatements", &UPreparedStatementManager::execReconnectStatements },
			{ "RollbackTransaction", &UPreparedStatementManager::execRollbackTransaction },
			{ "RunTempActionQuery", &UPreparedStatementManager::execRunTempActionQuery },
			{ "RunTempScalarQuery", &UPreparedStatementManager::execRunTempScalarQuery },
			{ "RunTempSelectQuery", &UPreparedStatementManager::execRunTempSelectQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics
	{
		struct PreparedStatementManager_eventAttachDatabase_Parms
		{
			FString DatabaseFilePath;
			FString SchemaName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_DatabaseFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_DatabaseFilePath = { "DatabaseFilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventAttachDatabase_Parms, DatabaseFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_DatabaseFilePath_MetaData), Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_DatabaseFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_SchemaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_SchemaName = { "SchemaName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventAttachDatabase_Parms, SchemaName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_SchemaName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_SchemaName_MetaData) };
	void Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreparedStatementManager_eventAttachDatabase_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PreparedStatementManager_eventAttachDatabase_Parms), &Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_DatabaseFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_SchemaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Connect a separate database file to the main database.\n\x09 * Return value indicates if attachment was successful. */" },
#endif
		{ "DisplayName", "Attach Database" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect a separate database file to the main database.\n       * Return value indicates if attachment was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "AttachDatabase", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PreparedStatementManager_eventAttachDatabase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::PreparedStatementManager_eventAttachDatabase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Initiates a SQLite transaction. */" },
#endif
		{ "DisplayName", "Begin Transaction" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates a SQLite transaction." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "BeginTransaction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Commits a pending SQLite transaction. */" },
#endif
		{ "DisplayName", "Commit Transaction" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commits a pending SQLite transaction." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "CommitTransaction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics
	{
		struct PreparedStatementManager_eventCreateStatement_Parms
		{
			FString StatementName;
			FString QuerySql;
			UDbStatement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuerySql_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuerySql;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_StatementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_StatementName = { "StatementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatement_Parms, StatementName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_StatementName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_StatementName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_QuerySql_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_QuerySql = { "QuerySql", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatement_Parms, QuerySql), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_QuerySql_MetaData), Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_QuerySql_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatement_Parms, ReturnValue), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_StatementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_QuerySql,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates a new prepared statement (UDbStatement) and adds it to the default group. */" },
#endif
		{ "DisplayName", "Create Statement" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new prepared statement (UDbStatement) and adds it to the default group." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "CreateStatement", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PreparedStatementManager_eventCreateStatement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::PreparedStatementManager_eventCreateStatement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_CreateStatement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_CreateStatement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics
	{
		struct PreparedStatementManager_eventCreateStatementInGroup_Parms
		{
			FString GroupName;
			FString StatementName;
			FString QuerySql;
			UDbStatement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuerySql_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuerySql;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatementInGroup_Parms, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_GroupName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_GroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_StatementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_StatementName = { "StatementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatementInGroup_Parms, StatementName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_StatementName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_StatementName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_QuerySql_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_QuerySql = { "QuerySql", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatementInGroup_Parms, QuerySql), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_QuerySql_MetaData), Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_QuerySql_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventCreateStatementInGroup_Parms, ReturnValue), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_StatementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_QuerySql,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Creates a new prepared statement (UDbStatement) and adds it to the specified group,\n\x09 * creating a new group if it does not already exist. */" },
#endif
		{ "DisplayName", "Create Group Statement" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new prepared statement (UDbStatement) and adds it to the specified group,\n       * creating a new group if it does not already exist." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "CreateStatementInGroup", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PreparedStatementManager_eventCreateStatementInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::PreparedStatementManager_eventCreateStatementInGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics
	{
		struct PreparedStatementManager_eventDetachDatabase_Parms
		{
			FString SchemaName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_SchemaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_SchemaName = { "SchemaName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventDetachDatabase_Parms, SchemaName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_SchemaName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_SchemaName_MetaData) };
	void Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreparedStatementManager_eventDetachDatabase_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PreparedStatementManager_eventDetachDatabase_Parms), &Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_SchemaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Disconnect a previously connected database file. \n\x09 * Return value indicates if detachment was successful.\n\x09 * Ok to use if not attached, just returns 'true'. */" },
#endif
		{ "DisplayName", "Detach Database" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect a previously connected database file.\n       * Return value indicates if detachment was successful.\n       * Ok to use if not attached, just returns 'true'." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "DetachDatabase", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PreparedStatementManager_eventDetachDatabase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::PreparedStatementManager_eventDetachDatabase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics
	{
		struct PreparedStatementManager_eventDisconnectGroupStatements_Parms
		{
			FString GroupName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventDisconnectGroupStatements_Parms, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::NewProp_GroupName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::NewProp_GroupName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Destroys the underlying sqlite FSQLitePreparedStatement items\n\x09 * for all loaded statements in a named group.\n\x09 * This allows Attach/Detach operations to be done.\n\x09 * Use ReconnectGroupStatements() to recreate them. */" },
#endif
		{ "DisplayName", "Discard Group Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the underlying sqlite FSQLitePreparedStatement items\n       * for all loaded statements in a named group.\n       * This allows Attach/Detach operations to be done.\n       * Use ReconnectGroupStatements() to recreate them." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "DisconnectGroupStatements", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PreparedStatementManager_eventDisconnectGroupStatements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::PreparedStatementManager_eventDisconnectGroupStatements_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Destroys the underlying sqlite FSQLitePreparedStatement items\n\x09 * for all loaded statements. This allows Attach/Detach operations to be done.\n\x09 * Use ReconnectStatements() to recreate them. */" },
#endif
		{ "DisplayName", "Discard All Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the underlying sqlite FSQLitePreparedStatement items\n       * for all loaded statements. This allows Attach/Detach operations to be done.\n       * Use ReconnectStatements() to recreate them." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "DisconnectStatements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics
	{
		struct PreparedStatementManager_eventFindStatement_Parms
		{
			FString StatementName;
			UDbStatement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_StatementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_StatementName = { "StatementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventFindStatement_Parms, StatementName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_StatementName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_StatementName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventFindStatement_Parms, ReturnValue), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_StatementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Looks for the given statement key in all groups, and returns the first occurrence.\n\x09 * If the statement isn't found, nullptr is returned. */" },
#endif
		{ "DisplayName", "Find Statement" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Looks for the given statement key in all groups, and returns the first occurrence.\n       * If the statement isn't found, nullptr is returned." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "FindStatement", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PreparedStatementManager_eventFindStatement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::PreparedStatementManager_eventFindStatement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_FindStatement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_FindStatement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics
	{
		struct PreparedStatementManager_eventFindStatementInGroup_Parms
		{
			FString GroupName;
			FString StatementName;
			UDbStatement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventFindStatementInGroup_Parms, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_GroupName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_GroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_StatementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_StatementName = { "StatementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventFindStatementInGroup_Parms, StatementName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_StatementName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_StatementName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventFindStatementInGroup_Parms, ReturnValue), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_StatementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Looks for the given statement key in the specified group, and returns the statement.\n\x09 * If either the group does not exist, or the statement isn't found, nullptr is returned. */" },
#endif
		{ "DisplayName", "Find Group Statement" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Looks for the given statement key in the specified group, and returns the statement.\n       * If either the group does not exist, or the statement isn't found, nullptr is returned." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "FindStatementInGroup", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PreparedStatementManager_eventFindStatementInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::PreparedStatementManager_eventFindStatementInGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics
	{
		struct PreparedStatementManager_eventIsSchemaAttached_Parms
		{
			FString SchemaName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_SchemaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_SchemaName = { "SchemaName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventIsSchemaAttached_Parms, SchemaName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_SchemaName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_SchemaName_MetaData) };
	void Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreparedStatementManager_eventIsSchemaAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PreparedStatementManager_eventIsSchemaAttached_Parms), &Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_SchemaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if there is a database attached with the given schema name. */" },
#endif
		{ "DisplayName", "Is Schema Attached" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there is a database attached with the given schema name." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "IsSchemaAttached", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PreparedStatementManager_eventIsSchemaAttached_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::PreparedStatementManager_eventIsSchemaAttached_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics
	{
		struct PreparedStatementManager_eventListAttachedSchemas_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventListAttachedSchemas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns a list of schema names other than the default 'main' and 'temp' */" },
#endif
		{ "DisplayName", "List Attached Schemas" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of schema names other than the default 'main' and 'temp'" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "ListAttachedSchemas", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PreparedStatementManager_eventListAttachedSchemas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::PreparedStatementManager_eventListAttachedSchemas_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics
	{
		struct PreparedStatementManager_eventLoadStatements_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventLoadStatements_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attempt to load all queries from the database,\n\x09 * and store them in a default collection (named 'DEFAULT_QUERIES').\n\x09 * Return value is the number of statements loaded. */" },
#endif
		{ "DisplayName", "Load All Queries Into Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to load all queries from the database,\n       * and store them in a default collection (named 'DEFAULT_QUERIES').\n       * Return value is the number of statements loaded." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "LoadStatements", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PreparedStatementManager_eventLoadStatements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::PreparedStatementManager_eventLoadStatements_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_LoadStatements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_LoadStatements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics
	{
		struct PreparedStatementManager_eventLoadStatementsIntoGroup_Parms
		{
			FString SchemaName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_SchemaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_SchemaName = { "SchemaName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventLoadStatementsIntoGroup_Parms, SchemaName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_SchemaName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_SchemaName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventLoadStatementsIntoGroup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_SchemaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attempt to load queries from the database, and store them in a named collection.\n\x09 * QueryTag allows only queries who's KeyName either starts or ends\n\x09 * with the given string to be returned.\n\x09 * Return value is the number of statements loaded. */" },
#endif
		{ "DisplayName", "Load Group Queries Into Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to load queries from the database, and store them in a named collection.\n       * QueryTag allows only queries who's KeyName either starts or ends\n       * with the given string to be returned.\n       * Return value is the number of statements loaded." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "LoadStatementsIntoGroup", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PreparedStatementManager_eventLoadStatementsIntoGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::PreparedStatementManager_eventLoadStatementsIntoGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics
	{
		struct PreparedStatementManager_eventReconnectGroupStatements_Parms
		{
			FString GroupName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventReconnectGroupStatements_Parms, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::NewProp_GroupName_MetaData), Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::NewProp_GroupName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Once an 'attach/detach' operation is complete,\n\x09 * use this to regenerate the underlying FSQLitePreparedStatements for a named group. */" },
#endif
		{ "DisplayName", "Reconnect Group Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Once an 'attach/detach' operation is complete,\n       * use this to regenerate the underlying FSQLitePreparedStatements for a named group." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "ReconnectGroupStatements", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PreparedStatementManager_eventReconnectGroupStatements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::PreparedStatementManager_eventReconnectGroupStatements_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Once an 'attach/detach' operation is complete,\n\x09 * use this to regenerate the underlying FSQLitePreparedStatements. */" },
#endif
		{ "DisplayName", "Reconnect All Statements" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Once an 'attach/detach' operation is complete,\n       * use this to regenerate the underlying FSQLitePreparedStatements." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "ReconnectStatements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Rolls back a pending SQLite transaction */" },
#endif
		{ "DisplayName", "Rollback Transaction" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rolls back a pending SQLite transaction" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "RollbackTransaction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics
	{
		struct PreparedStatementManager_eventRunTempActionQuery_Parms
		{
			FString SqlToRun;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlToRun_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlToRun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::NewProp_SqlToRun_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::NewProp_SqlToRun = { "SqlToRun", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventRunTempActionQuery_Parms, SqlToRun), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::NewProp_SqlToRun_MetaData), Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::NewProp_SqlToRun_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::NewProp_SqlToRun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Execute an SQL statement, returning no data. */" },
#endif
		{ "DisplayName", "Execute Temporary Action Query" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an SQL statement, returning no data." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "RunTempActionQuery", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PreparedStatementManager_eventRunTempActionQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::PreparedStatementManager_eventRunTempActionQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics
	{
		struct PreparedStatementManager_eventRunTempScalarQuery_Parms
		{
			FString SqlToRun;
			FQueryResultField ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlToRun_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlToRun;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_SqlToRun_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_SqlToRun = { "SqlToRun", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventRunTempScalarQuery_Parms, SqlToRun), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_SqlToRun_MetaData), Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_SqlToRun_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventRunTempScalarQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FQueryResultField, METADATA_PARAMS(0, nullptr) }; // 3762466948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_SqlToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Executes an SQL select statement and returns the value contained\n\x09 * in the first field of the first row in the resultset.\n\x09 * To do this it creates a PreparedStatement which it disposes of immediately.\n\x09 * Any query 'parameter' values need to be included as literals in the SQL string. */" },
#endif
		{ "DisplayName", "Execute Temporary Scalar Query" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes an SQL select statement and returns the value contained\n       * in the first field of the first row in the resultset.\n       * To do this it creates a PreparedStatement which it disposes of immediately.\n       * Any query 'parameter' values need to be included as literals in the SQL string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "RunTempScalarQuery", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PreparedStatementManager_eventRunTempScalarQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::PreparedStatementManager_eventRunTempScalarQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics
	{
		struct PreparedStatementManager_eventRunTempSelectQuery_Parms
		{
			FString SqlToRun;
			FQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlToRun_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlToRun;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_SqlToRun_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_SqlToRun = { "SqlToRun", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventRunTempSelectQuery_Parms, SqlToRun), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_SqlToRun_MetaData), Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_SqlToRun_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PreparedStatementManager_eventRunTempSelectQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FQueryResult, METADATA_PARAMS(0, nullptr) }; // 4186344584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_SqlToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Statement Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Executes an SQL select string and returns any resultant data.\n\x09 * To do this it creates a PreparedStatement which it disposes of immediately.\n\x09 * Any query 'parameter' values need to be included as literals in the SQL string. */" },
#endif
		{ "DisplayName", "Execute Temporary Select Query" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes an SQL select string and returns any resultant data.\n       * To do this it creates a PreparedStatement which it disposes of immediately.\n       * Any query 'parameter' values need to be included as literals in the SQL string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreparedStatementManager, nullptr, "RunTempSelectQuery", nullptr, nullptr, Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PreparedStatementManager_eventRunTempSelectQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::PreparedStatementManager_eventRunTempSelectQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreparedStatementManager);
	UClass* Z_Construct_UClass_UPreparedStatementManager_NoRegister()
	{
		return UPreparedStatementManager::StaticClass();
	}
	struct Z_Construct_UClass_UPreparedStatementManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryGroups_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QueryGroups_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryGroups_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QueryGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreparedStatementManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPreparedStatementManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPreparedStatementManager_AttachDatabase, "AttachDatabase" }, // 4098996930
		{ &Z_Construct_UFunction_UPreparedStatementManager_BeginTransaction, "BeginTransaction" }, // 2152101498
		{ &Z_Construct_UFunction_UPreparedStatementManager_CommitTransaction, "CommitTransaction" }, // 2784216220
		{ &Z_Construct_UFunction_UPreparedStatementManager_CreateStatement, "CreateStatement" }, // 1558899960
		{ &Z_Construct_UFunction_UPreparedStatementManager_CreateStatementInGroup, "CreateStatementInGroup" }, // 3220265949
		{ &Z_Construct_UFunction_UPreparedStatementManager_DetachDatabase, "DetachDatabase" }, // 289375286
		{ &Z_Construct_UFunction_UPreparedStatementManager_DisconnectGroupStatements, "DisconnectGroupStatements" }, // 2763531494
		{ &Z_Construct_UFunction_UPreparedStatementManager_DisconnectStatements, "DisconnectStatements" }, // 427545761
		{ &Z_Construct_UFunction_UPreparedStatementManager_FindStatement, "FindStatement" }, // 2624073751
		{ &Z_Construct_UFunction_UPreparedStatementManager_FindStatementInGroup, "FindStatementInGroup" }, // 2285173787
		{ &Z_Construct_UFunction_UPreparedStatementManager_IsSchemaAttached, "IsSchemaAttached" }, // 597974471
		{ &Z_Construct_UFunction_UPreparedStatementManager_ListAttachedSchemas, "ListAttachedSchemas" }, // 426929986
		{ &Z_Construct_UFunction_UPreparedStatementManager_LoadStatements, "LoadStatements" }, // 547083266
		{ &Z_Construct_UFunction_UPreparedStatementManager_LoadStatementsIntoGroup, "LoadStatementsIntoGroup" }, // 1369887608
		{ &Z_Construct_UFunction_UPreparedStatementManager_ReconnectGroupStatements, "ReconnectGroupStatements" }, // 1517871202
		{ &Z_Construct_UFunction_UPreparedStatementManager_ReconnectStatements, "ReconnectStatements" }, // 2841748261
		{ &Z_Construct_UFunction_UPreparedStatementManager_RollbackTransaction, "RollbackTransaction" }, // 1170433571
		{ &Z_Construct_UFunction_UPreparedStatementManager_RunTempActionQuery, "RunTempActionQuery" }, // 108375610
		{ &Z_Construct_UFunction_UPreparedStatementManager_RunTempScalarQuery, "RunTempScalarQuery" }, // 3160786405
		{ &Z_Construct_UFunction_UPreparedStatementManager_RunTempSelectQuery, "RunTempSelectQuery" }, // 884740433
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreparedStatementManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Aggregates different collections of prepared statements under one collection. */" },
#endif
		{ "IncludePath", "PreparedStatementManager.h" },
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aggregates different collections of prepared statements under one collection." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_ValueProp = { "QueryGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPreparedStatementGroup_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_Key_KeyProp = { "QueryGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/PreparedStatementManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups = { "QueryGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreparedStatementManager, QueryGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_MetaData), Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreparedStatementManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementManager_Statics::NewProp_QueryGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreparedStatementManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreparedStatementManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreparedStatementManager_Statics::ClassParams = {
		&UPreparedStatementManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPreparedStatementManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreparedStatementManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPreparedStatementManager()
	{
		if (!Z_Registration_Info_UClass_UPreparedStatementManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreparedStatementManager.OuterSingleton, Z_Construct_UClass_UPreparedStatementManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPreparedStatementManager.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UPreparedStatementManager>()
	{
		return UPreparedStatementManager::StaticClass();
	}
	UPreparedStatementManager::UPreparedStatementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreparedStatementManager);
	UPreparedStatementManager::~UPreparedStatementManager() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPreparedStatementManager, UPreparedStatementManager::StaticClass, TEXT("UPreparedStatementManager"), &Z_Registration_Info_UClass_UPreparedStatementManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreparedStatementManager), 1460962598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_1063284831(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
