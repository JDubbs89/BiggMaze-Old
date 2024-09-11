// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/LogInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SQLITEGAMEDB_API UEnum* Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FLogInfo();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayDbPurpose;
	static UEnum* EPlayDbPurpose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayDbPurpose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayDbPurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("EPlayDbPurpose"));
		}
		return Z_Registration_Info_UEnum_EPlayDbPurpose.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UEnum* StaticEnum<EPlayDbPurpose>()
	{
		return EPlayDbPurpose_StaticEnum();
	}
	struct Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enumerators[] = {
		{ "EPlayDbPurpose::None", (int64)EPlayDbPurpose::None },
		{ "EPlayDbPurpose::NewGame", (int64)EPlayDbPurpose::NewGame },
		{ "EPlayDbPurpose::AutoSave", (int64)EPlayDbPurpose::AutoSave },
		{ "EPlayDbPurpose::QuickSave", (int64)EPlayDbPurpose::QuickSave },
		{ "EPlayDbPurpose::ManualSave", (int64)EPlayDbPurpose::ManualSave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enum_MetaDataParams[] = {
		{ "AutoSave.Name", "EPlayDbPurpose::AutoSave" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Defines a 'reason' why a copy of the playdb is made.\n * The entries 'AutoSave', and 'QuickSave' are used by the system\n * to perform those functions, and remove old save files.\n * For this to work with various copies of the database,\n * we need the numbering to remain consistent, even if a new entry is added -\n * for this reason the values have been manually set,\n * and new entries will only ever be added to the end of the list. */" },
#endif
		{ "ManualSave.Name", "EPlayDbPurpose::ManualSave" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
		{ "NewGame.Name", "EPlayDbPurpose::NewGame" },
		{ "None.Name", "EPlayDbPurpose::None" },
		{ "QuickSave.Name", "EPlayDbPurpose::QuickSave" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a 'reason' why a copy of the playdb is made.\n* The entries 'AutoSave', and 'QuickSave' are used by the system\n* to perform those functions, and remove old save files.\n* For this to work with various copies of the database,\n* we need the numbering to remain consistent, even if a new entry is added -\n* for this reason the values have been manually set,\n* and new entries will only ever be added to the end of the list." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		"EPlayDbPurpose",
		"EPlayDbPurpose",
		Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose()
	{
		if (!Z_Registration_Info_UEnum_EPlayDbPurpose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayDbPurpose.InnerSingleton, Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayDbPurpose.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LogInfo;
class UScriptStruct* FLogInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LogInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LogInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogInfo, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("LogInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LogInfo.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FLogInfo>()
{
	return FLogInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLogInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Additional_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Additional;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Purpose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purpose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Purpose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A single field of data returned from a query\n" },
#endif
		{ "ModuleRelativePath", "Public/LogInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single field of data returned from a query" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLogInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_LogID_MetaData[] = {
		{ "Category", "SQLite Database|Log Info" },
		{ "DisplayName", "Log ID" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_LogID = { "LogID", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogInfo, LogID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_LogID_MetaData), Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_LogID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "SQLite Database|Log Info" },
		{ "DisplayName", "Created DateTime" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogInfo, Created), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Created_MetaData), Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Created_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "SQLite Database|Log Info" },
		{ "DisplayName", "Title" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogInfo, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Additional_MetaData[] = {
		{ "Category", "SQLite Database|Log Info" },
		{ "DisplayName", "Additionl" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Additional = { "Additional", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogInfo, Additional), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Additional_MetaData), Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Additional_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose_MetaData[] = {
		{ "Category", "SQLite Database|Log Info" },
		{ "DisplayName", "Purpose" },
		{ "ModuleRelativePath", "Public/LogInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose = { "Purpose", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogInfo, Purpose), Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose_MetaData), Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose_MetaData) }; // 2472856879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_LogID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Additional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogInfo_Statics::NewProp_Purpose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"LogInfo",
		Z_Construct_UScriptStruct_FLogInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::PropPointers),
		sizeof(FLogInfo),
		alignof(FLogInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLogInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLogInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LogInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LogInfo.InnerSingleton, Z_Construct_UScriptStruct_FLogInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LogInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::EnumInfo[] = {
		{ EPlayDbPurpose_StaticEnum, TEXT("EPlayDbPurpose"), &Z_Registration_Info_UEnum_EPlayDbPurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2472856879U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::ScriptStructInfo[] = {
		{ FLogInfo::StaticStruct, Z_Construct_UScriptStruct_FLogInfo_Statics::NewStructOps, TEXT("LogInfo"), &Z_Registration_Info_UScriptStruct_LogInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLogInfo), 8866822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_1951011349(TEXT("/Script/SqliteGameDB"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_LogInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
