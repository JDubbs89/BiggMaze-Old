// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/DbStatement.h"
#include "SqliteGameDB/Public/DBSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDbStatement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbStatement();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbStatement_NoRegister();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResult();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultField();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(UDbStatement::execExecuteSelect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQueryResult*)Z_Param__Result=P_THIS->ExecuteSelect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execExecuteScalar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQueryResultField*)Z_Param__Result=P_THIS->ExecuteScalar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execExecuteAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetStringParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetFloatParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetLongParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_PROPERTY(FInt64Property,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetIntParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetByteParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetByteParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execSetBoolParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBindingName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameterValue(Z_Param_InBindingName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbStatement::execInitStatement)
	{
		P_GET_OBJECT(UDbBase,Z_Param_DbConnection);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQueryText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitStatement(Z_Param_DbConnection,Z_Param_SqlQueryText);
		P_NATIVE_END;
	}
	void UDbStatement::StaticRegisterNativesUDbStatement()
	{
		UClass* Class = UDbStatement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAction", &UDbStatement::execExecuteAction },
			{ "ExecuteScalar", &UDbStatement::execExecuteScalar },
			{ "ExecuteSelect", &UDbStatement::execExecuteSelect },
			{ "InitStatement", &UDbStatement::execInitStatement },
			{ "SetBoolParameterValue", &UDbStatement::execSetBoolParameterValue },
			{ "SetByteParameterValue", &UDbStatement::execSetByteParameterValue },
			{ "SetFloatParameterValue", &UDbStatement::execSetFloatParameterValue },
			{ "SetIntParameterValue", &UDbStatement::execSetIntParameterValue },
			{ "SetLongParameterValue", &UDbStatement::execSetLongParameterValue },
			{ "SetStringParameterValue", &UDbStatement::execSetStringParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics
	{
		struct DbStatement_eventExecuteAction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DbStatement_eventExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DbStatement_eventExecuteAction_Parms), &Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Runs an 'action' query, returns true if ok, false if an error occurs.\n\x09 * Takes a pointer to a PreparedStatement, so it supports value binding, etc.\n\x09 * NOTE: This method will call 'reset' on the PreparedStatement,\n\x09 * but it will not affect any binding values. */" },
#endif
		{ "DisplayName", "Execute Action Query" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs an 'action' query, returns true if ok, false if an error occurs.\n       * Takes a pointer to a PreparedStatement, so it supports value binding, etc.\n       * NOTE: This method will call 'reset' on the PreparedStatement,\n       * but it will not affect any binding values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "ExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::DbStatement_eventExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::DbStatement_eventExecuteAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics
	{
		struct DbStatement_eventExecuteScalar_Parms
		{
			FQueryResultField ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventExecuteScalar_Parms, ReturnValue), Z_Construct_UScriptStruct_FQueryResultField, METADATA_PARAMS(0, nullptr) }; // 3762466948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Executes a prepared statement that retrieves data.\n\x09 * Returns the value contained in the first field of the first row in the resultset. */" },
#endif
		{ "DisplayName", "Execute Scalar Query" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes a prepared statement that retrieves data.\n       * Returns the value contained in the first field of the first row in the resultset." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "ExecuteScalar", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::DbStatement_eventExecuteScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::DbStatement_eventExecuteScalar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_ExecuteScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_ExecuteScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics
	{
		struct DbStatement_eventExecuteSelect_Parms
		{
			FQueryResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventExecuteSelect_Parms, ReturnValue), Z_Construct_UScriptStruct_FQueryResult, METADATA_PARAMS(0, nullptr) }; // 4186344584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Executes a prepared statement and returns any resultant data.\n\x09This overload takes a pointer to the prepared statement you wish to run.\n\x09The statement is 'reset' AFTER executing it. Any bound parameters are left as they are. */" },
#endif
		{ "DisplayName", "Execute Resultset Query" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes a prepared statement and returns any resultant data.\n      This overload takes a pointer to the prepared statement you wish to run.\n      The statement is 'reset' AFTER executing it. Any bound parameters are left as they are." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "ExecuteSelect", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::DbStatement_eventExecuteSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::DbStatement_eventExecuteSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_ExecuteSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_ExecuteSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_InitStatement_Statics
	{
		struct DbStatement_eventInitStatement_Parms
		{
			UDbBase* DbConnection;
			FString SqlQueryText;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DbConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlQueryText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlQueryText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_DbConnection = { "DbConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventInitStatement_Parms, DbConnection), Z_Construct_UClass_UDbBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_SqlQueryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_SqlQueryText = { "SqlQueryText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventInitStatement_Parms, SqlQueryText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_SqlQueryText_MetaData), Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_SqlQueryText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_InitStatement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_DbConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_InitStatement_Statics::NewProp_SqlQueryText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_InitStatement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Initilize Statement" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_InitStatement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "InitStatement", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_InitStatement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::DbStatement_eventInitStatement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_InitStatement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_InitStatement_Statics::DbStatement_eventInitStatement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_InitStatement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_InitStatement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics
	{
		struct DbStatement_eventSetBoolParameterValue_Parms
		{
			FString InBindingName;
			bool InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetBoolParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((DbStatement_eventSetBoolParameterValue_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DbStatement_eventSetBoolParameterValue_Parms), &Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (Boolean)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetBoolParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::DbStatement_eventSetBoolParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::DbStatement_eventSetBoolParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetBoolParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetBoolParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics
	{
		struct DbStatement_eventSetByteParameterValue_Parms
		{
			FString InBindingName;
			uint8 InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetByteParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetByteParameterValue_Parms, InValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (Byte)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetByteParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::DbStatement_eventSetByteParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::DbStatement_eventSetByteParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetByteParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetByteParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics
	{
		struct DbStatement_eventSetFloatParameterValue_Parms
		{
			FString InBindingName;
			float InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetFloatParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetFloatParameterValue_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (Float)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetFloatParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::DbStatement_eventSetFloatParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::DbStatement_eventSetFloatParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetFloatParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetFloatParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics
	{
		struct DbStatement_eventSetIntParameterValue_Parms
		{
			FString InBindingName;
			int32 InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetIntParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetIntParameterValue_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (Integer)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetIntParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::DbStatement_eventSetIntParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::DbStatement_eventSetIntParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetIntParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetIntParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics
	{
		struct DbStatement_eventSetLongParameterValue_Parms
		{
			FString InBindingName;
			int64 InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetLongParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetLongParameterValue_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (Integer64)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetLongParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::DbStatement_eventSetLongParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::DbStatement_eventSetLongParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetLongParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetLongParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics
	{
		struct DbStatement_eventSetStringParameterValue_Parms
		{
			FString InBindingName;
			FString InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InBindingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetStringParameterValue_Parms, InBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InBindingName_MetaData), Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InBindingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbStatement_eventSetStringParameterValue_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Prepared Statement" },
		{ "DisplayName", "Bind Parameter (String)" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbStatement, nullptr, "SetStringParameterValue", nullptr, nullptr, Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::DbStatement_eventSetStringParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::DbStatement_eventSetStringParameterValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbStatement_SetStringParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbStatement_SetStringParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDbStatement);
	UClass* Z_Construct_UClass_UDbStatement_NoRegister()
	{
		return UDbStatement::StaticClass();
	}
	struct Z_Construct_UClass_UDbStatement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDbStatement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbStatement_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDbStatement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDbStatement_ExecuteAction, "ExecuteAction" }, // 939761047
		{ &Z_Construct_UFunction_UDbStatement_ExecuteScalar, "ExecuteScalar" }, // 1083534032
		{ &Z_Construct_UFunction_UDbStatement_ExecuteSelect, "ExecuteSelect" }, // 3355458921
		{ &Z_Construct_UFunction_UDbStatement_InitStatement, "InitStatement" }, // 3026963833
		{ &Z_Construct_UFunction_UDbStatement_SetBoolParameterValue, "SetBoolParameterValue" }, // 2006957442
		{ &Z_Construct_UFunction_UDbStatement_SetByteParameterValue, "SetByteParameterValue" }, // 3275439098
		{ &Z_Construct_UFunction_UDbStatement_SetFloatParameterValue, "SetFloatParameterValue" }, // 3106246482
		{ &Z_Construct_UFunction_UDbStatement_SetIntParameterValue, "SetIntParameterValue" }, // 1721858635
		{ &Z_Construct_UFunction_UDbStatement_SetLongParameterValue, "SetLongParameterValue" }, // 3460493029
		{ &Z_Construct_UFunction_UDbStatement_SetStringParameterValue, "SetStringParameterValue" }, // 1917875253
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbStatement_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDbStatement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Further wraps FSQLitePreparedStatement, providing useful management and utility functions. */" },
#endif
		{ "IncludePath", "DbStatement.h" },
		{ "ModuleRelativePath", "Public/DbStatement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Further wraps FSQLitePreparedStatement, providing useful management and utility functions." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDbStatement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDbStatement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDbStatement_Statics::ClassParams = {
		&UDbStatement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDbStatement_Statics::Class_MetaDataParams), Z_Construct_UClass_UDbStatement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDbStatement()
	{
		if (!Z_Registration_Info_UClass_UDbStatement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDbStatement.OuterSingleton, Z_Construct_UClass_UDbStatement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDbStatement.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UDbStatement>()
	{
		return UDbStatement::StaticClass();
	}
	UDbStatement::UDbStatement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDbStatement);
	UDbStatement::~UDbStatement() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDbStatement, UDbStatement::StaticClass, TEXT("UDbStatement"), &Z_Registration_Info_UClass_UDbStatement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDbStatement), 3912664079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_1009222628(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStatement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
