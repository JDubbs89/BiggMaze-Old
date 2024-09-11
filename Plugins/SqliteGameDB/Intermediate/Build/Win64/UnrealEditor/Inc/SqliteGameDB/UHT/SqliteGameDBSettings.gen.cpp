// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/SqliteGameDBSettings.h"
#include "SqliteGameDB/Public/GameDbConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSqliteGameDBSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_USqliteGameDBSettings();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_USqliteGameDBSettings_NoRegister();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameDbConfig();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	void USqliteGameDBSettings::StaticRegisterNativesUSqliteGameDBSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USqliteGameDBSettings);
	UClass* Z_Construct_UClass_USqliteGameDBSettings_NoRegister()
	{
		return USqliteGameDBSettings::StaticClass();
	}
	struct Z_Construct_UClass_USqliteGameDBSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseContentFolder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseConnectionClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseConnectionClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatabaseConnectionClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USqliteGameDBSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USqliteGameDBSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sqlite Game Database" },
		{ "IncludePath", "SqliteGameDBSettings.h" },
		{ "ModuleRelativePath", "Public/SqliteGameDBSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseContentFolder_MetaData[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Content-Folder path containing the database files we will access */" },
#endif
		{ "ModuleRelativePath", "Public/SqliteGameDBSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Content-Folder path containing the database files we will access" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseContentFolder = { "DatabaseContentFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USqliteGameDBSettings, DatabaseContentFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseContentFolder_MetaData), Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseContentFolder_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses_Inner = { "DatabaseConnectionClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameDbConfig, METADATA_PARAMS(0, nullptr) }; // 26227094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/SqliteGameDBSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses = { "DatabaseConnectionClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USqliteGameDBSettings, DatabaseConnectionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses_MetaData), Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses_MetaData) }; // 26227094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USqliteGameDBSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USqliteGameDBSettings_Statics::NewProp_DatabaseConnectionClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USqliteGameDBSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USqliteGameDBSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USqliteGameDBSettings_Statics::ClassParams = {
		&USqliteGameDBSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USqliteGameDBSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USqliteGameDBSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USqliteGameDBSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USqliteGameDBSettings()
	{
		if (!Z_Registration_Info_UClass_USqliteGameDBSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USqliteGameDBSettings.OuterSingleton, Z_Construct_UClass_USqliteGameDBSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USqliteGameDBSettings.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<USqliteGameDBSettings>()
	{
		return USqliteGameDBSettings::StaticClass();
	}
	USqliteGameDBSettings::USqliteGameDBSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USqliteGameDBSettings);
	USqliteGameDBSettings::~USqliteGameDBSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_SqliteGameDBSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_SqliteGameDBSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USqliteGameDBSettings, USqliteGameDBSettings::StaticClass, TEXT("USqliteGameDBSettings"), &Z_Registration_Info_UClass_USqliteGameDBSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USqliteGameDBSettings), 3196248361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_SqliteGameDBSettings_h_3870181069(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_SqliteGameDBSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_SqliteGameDBSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
