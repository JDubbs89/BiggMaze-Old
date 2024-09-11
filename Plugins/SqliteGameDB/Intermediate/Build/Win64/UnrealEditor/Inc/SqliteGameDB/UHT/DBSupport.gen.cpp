// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/DBSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBSupport() {}
// Cross Module References
	SQLITEGAMEDB_API UEnum* Z_Construct_UEnum_SqliteGameDB_EDbValueType();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResult();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultField();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDbValueType;
	static UEnum* EDbValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDbValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDbValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SqliteGameDB_EDbValueType, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("EDbValueType"));
		}
		return Z_Registration_Info_UEnum_EDbValueType.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UEnum* StaticEnum<EDbValueType>()
	{
		return EDbValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enumerators[] = {
		{ "EDbValueType::Integer", (int64)EDbValueType::Integer },
		{ "EDbValueType::Float", (int64)EDbValueType::Float },
		{ "EDbValueType::String", (int64)EDbValueType::String },
		{ "EDbValueType::Blob", (int64)EDbValueType::Blob },
		{ "EDbValueType::Null", (int64)EDbValueType::Null },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enum_MetaDataParams[] = {
		{ "Blob.Name", "EDbValueType::Blob" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The kinds of data sqlite will return. */" },
#endif
		{ "Float.Name", "EDbValueType::Float" },
		{ "Integer.Name", "EDbValueType::Integer" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
		{ "Null.Name", "EDbValueType::Null" },
		{ "String.Name", "EDbValueType::String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The kinds of data sqlite will return." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		"EDbValueType",
		"EDbValueType",
		Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SqliteGameDB_EDbValueType()
	{
		if (!Z_Registration_Info_UEnum_EDbValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDbValueType.InnerSingleton, Z_Construct_UEnum_SqliteGameDB_EDbValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDbValueType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueryResultField;
class UScriptStruct* FQueryResultField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueryResultField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueryResultField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultField, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("QueryResultField"));
	}
	return Z_Registration_Info_UScriptStruct_QueryResultField.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FQueryResultField>()
{
	return FQueryResultField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueryResultField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolVal_MetaData[];
#endif
		static void NewProp_BoolVal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntVal_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_IntVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DblVal_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DblVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrVal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrVal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlobVal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlobVal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlobVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A single field of data returned from a query. */" },
#endif
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single field of data returned from a query." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultField>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
		{ "DisplayName", "Bool Value" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal_SetBit(void* Obj)
	{
		((FQueryResultField*)Obj)->BoolVal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal = { "BoolVal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQueryResultField), &Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_IntVal_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* INT value */" },
#endif
		{ "DisplayName", "Integer Value" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INT value" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_IntVal = { "IntVal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, IntVal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_IntVal_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_IntVal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_DblVal_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* INT value */" },
#endif
		{ "DisplayName", "Float Value" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INT value" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_DblVal = { "DblVal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, DblVal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_DblVal_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_DblVal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_StrVal_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* FLOAT value */" },
#endif
		{ "DisplayName", "String Value" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLOAT value" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_StrVal = { "StrVal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, StrVal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_StrVal_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_StrVal_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal_Inner = { "BlobVal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* STRING value */" },
#endif
		{ "DisplayName", "Blob Value" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STRING value" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal = { "BlobVal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, BlobVal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_ColName_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The name of the database field */" },
#endif
		{ "DisplayName", "Column Name" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the database field" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_ColName = { "ColName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, ColName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_ColName_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_ColName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SQLite Database|Query Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The actual type reported by the database */" },
#endif
		{ "DisplayName", "SQLite Value Type" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual type reported by the database" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultField, Type), Z_Construct_UEnum_SqliteGameDB_EDbValueType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type_MetaData) }; // 1570484742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BoolVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_IntVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_DblVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_StrVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_BlobVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_ColName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultField_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"QueryResultField",
		Z_Construct_UScriptStruct_FQueryResultField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::PropPointers),
		sizeof(FQueryResultField),
		alignof(FQueryResultField),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQueryResultField_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultField_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultField()
	{
		if (!Z_Registration_Info_UScriptStruct_QueryResultField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueryResultField.InnerSingleton, Z_Construct_UScriptStruct_FQueryResultField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueryResultField.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueryResultRow;
class UScriptStruct* FQueryResultRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRow, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("QueryResultRow"));
	}
	return Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FQueryResultRow>()
{
	return FQueryResultRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A row of data returned from a query. */" },
#endif
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A row of data returned from a query." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRow>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQueryResultField, METADATA_PARAMS(0, nullptr) }; // 3762466948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "Query Result|Fields" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResultRow, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields_MetaData), Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields_MetaData) }; // 3762466948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_Fields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"QueryResultRow",
		Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers),
		sizeof(FQueryResultRow),
		alignof(FQueryResultRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow()
	{
		if (!Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton, Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueryResult;
class UScriptStruct* FQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResult, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("QueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_QueryResult.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FQueryResult>()
{
	return FQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rows_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Resultset of a select query, basically a collection of rows. */" },
#endif
		{ "ModuleRelativePath", "Public/DBSupport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resultset of a select query, basically a collection of rows." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows_Inner = { "Rows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(0, nullptr) }; // 1278585499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "Query Result|Rows" },
		{ "ModuleRelativePath", "Public/DBSupport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueryResult, Rows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows_MetaData), Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows_MetaData) }; // 1278585499
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResult_Statics::NewProp_Rows,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"QueryResult",
		Z_Construct_UScriptStruct_FQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResult_Statics::PropPointers),
		sizeof(FQueryResult),
		alignof(FQueryResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQueryResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_QueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueryResult.InnerSingleton, Z_Construct_UScriptStruct_FQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueryResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::EnumInfo[] = {
		{ EDbValueType_StaticEnum, TEXT("EDbValueType"), &Z_Registration_Info_UEnum_EDbValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1570484742U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::ScriptStructInfo[] = {
		{ FQueryResultField::StaticStruct, Z_Construct_UScriptStruct_FQueryResultField_Statics::NewStructOps, TEXT("QueryResultField"), &Z_Registration_Info_UScriptStruct_QueryResultField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueryResultField), 3762466948U) },
		{ FQueryResultRow::StaticStruct, Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewStructOps, TEXT("QueryResultRow"), &Z_Registration_Info_UScriptStruct_QueryResultRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueryResultRow), 1278585499U) },
		{ FQueryResult::StaticStruct, Z_Construct_UScriptStruct_FQueryResult_Statics::NewStructOps, TEXT("QueryResult"), &Z_Registration_Info_UScriptStruct_QueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueryResult), 4186344584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_2208592040(TEXT("/Script/SqliteGameDB"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DBSupport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
