// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/GameDbConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDbConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase_NoRegister();
	SQLITEGAMEDB_API UEnum* Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameDbAttachment();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameDbConfig();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDbFilePurpose;
	static UEnum* EDbFilePurpose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDbFilePurpose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDbFilePurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("EDbFilePurpose"));
		}
		return Z_Registration_Info_UEnum_EDbFilePurpose.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UEnum* StaticEnum<EDbFilePurpose>()
	{
		return EDbFilePurpose_StaticEnum();
	}
	struct Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enumerators[] = {
		{ "EDbFilePurpose::None", (int64)EDbFilePurpose::None },
		{ "EDbFilePurpose::Custom", (int64)EDbFilePurpose::Custom },
		{ "EDbFilePurpose::Main", (int64)EDbFilePurpose::Main },
		{ "EDbFilePurpose::LogTemplate", (int64)EDbFilePurpose::LogTemplate },
		{ "EDbFilePurpose::PlayTemplate", (int64)EDbFilePurpose::PlayTemplate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EDbFilePurpose::Custom" },
		{ "LogTemplate.Name", "EDbFilePurpose::LogTemplate" },
		{ "Main.Name", "EDbFilePurpose::Main" },
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
		{ "None.Name", "EDbFilePurpose::None" },
		{ "PlayTemplate.Name", "EDbFilePurpose::PlayTemplate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		"EDbFilePurpose",
		"EDbFilePurpose",
		Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose()
	{
		if (!Z_Registration_Info_UEnum_EDbFilePurpose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDbFilePurpose.InnerSingleton, Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDbFilePurpose.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameDbAttachment;
class UScriptStruct* FGameDbAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameDbAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameDbAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameDbAttachment, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("GameDbAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_GameDbAttachment.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FGameDbAttachment>()
{
	return FGameDbAttachment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameDbAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Purpose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purpose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Purpose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbAttachment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SqliteGameDB" },
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameDbAttachment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Sqlite Database File|Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filename of the sqlite file to connect\n" },
#endif
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filename of the sqlite file to connect" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameDbAttachment, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_FileName_MetaData), Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_FileName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose_MetaData[] = {
		{ "Category", "Sqlite Database File|Attachment" },
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose = { "Purpose", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameDbAttachment, Purpose), Z_Construct_UEnum_SqliteGameDB_EDbFilePurpose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose_MetaData), Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose_MetaData) }; // 1779868964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameDbAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewProp_Purpose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameDbAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"GameDbAttachment",
		Z_Construct_UScriptStruct_FGameDbAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbAttachment_Statics::PropPointers),
		sizeof(FGameDbAttachment),
		alignof(FGameDbAttachment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameDbAttachment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbAttachment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameDbAttachment()
	{
		if (!Z_Registration_Info_UScriptStruct_GameDbAttachment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameDbAttachment.InnerSingleton, Z_Construct_UScriptStruct_FGameDbAttachment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameDbAttachment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameDbConfig;
class UScriptStruct* FGameDbConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameDbConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameDbConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameDbConfig, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("GameDbConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameDbConfig.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FGameDbConfig>()
{
	return FGameDbConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameDbConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DerivedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SqliteGameDB" },
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameDbConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_DerivedClass_MetaData[] = {
		{ "Category", "Sqlite Database File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The derived UGameDbBase class you want to use\n" },
#endif
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The derived UGameDbBase class you want to use" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_DerivedClass = { "DerivedClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameDbConfig, DerivedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDbBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_DerivedClass_MetaData), Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_DerivedClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Sqlite Database File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filename of the sqlite file to connect\n" },
#endif
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filename of the sqlite file to connect" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameDbConfig, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_FileName_MetaData), Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_FileName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameDbAttachment, METADATA_PARAMS(0, nullptr) }; // 155216617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments_MetaData[] = {
		{ "Category", "Sqlite Database File" },
		{ "ModuleRelativePath", "Public/GameDbConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameDbConfig, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments_MetaData), Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments_MetaData) }; // 155216617
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameDbConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_DerivedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewProp_Attachments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameDbConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"GameDbConfig",
		Z_Construct_UScriptStruct_FGameDbConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::PropPointers),
		sizeof(FGameDbConfig),
		alignof(FGameDbConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameDbConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameDbConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameDbConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameDbConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameDbConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameDbConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameDbConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::EnumInfo[] = {
		{ EDbFilePurpose_StaticEnum, TEXT("EDbFilePurpose"), &Z_Registration_Info_UEnum_EDbFilePurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779868964U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::ScriptStructInfo[] = {
		{ FGameDbAttachment::StaticStruct, Z_Construct_UScriptStruct_FGameDbAttachment_Statics::NewStructOps, TEXT("GameDbAttachment"), &Z_Registration_Info_UScriptStruct_GameDbAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameDbAttachment), 155216617U) },
		{ FGameDbConfig::StaticStruct, Z_Construct_UScriptStruct_FGameDbConfig_Statics::NewStructOps, TEXT("GameDbConfig"), &Z_Registration_Info_UScriptStruct_GameDbConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameDbConfig), 26227094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_1261793785(TEXT("/Script/SqliteGameDB"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDbConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
