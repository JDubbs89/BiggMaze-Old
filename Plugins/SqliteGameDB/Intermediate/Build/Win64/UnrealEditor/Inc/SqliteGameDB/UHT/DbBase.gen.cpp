// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/DbBase.h"
#include "SqliteGameDB/Public/GameDbConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDbBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementManager_NoRegister();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FGameDbConfig();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(UDbBase::execGetDbName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDbName();
		P_NATIVE_END;
	}
	struct DbBase_eventStartup_Parms
	{
		FString DatabaseFilePath;
		FGameDbConfig Config;
	};
	static FName NAME_UDbBase_Startup = FName(TEXT("Startup"));
	void UDbBase::Startup(const FString& DatabaseFilePath, FGameDbConfig const& Config)
	{
		DbBase_eventStartup_Parms Parms;
		Parms.DatabaseFilePath=DatabaseFilePath;
		Parms.Config=Config;
		ProcessEvent(FindFunctionChecked(NAME_UDbBase_Startup),&Parms);
	}
	void UDbBase::StaticRegisterNativesUDbBase()
	{
		UClass* Class = UDbBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDbName", &UDbBase::execGetDbName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDbBase_GetDbName_Statics
	{
		struct DbBase_eventGetDbName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbBase_GetDbName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbBase_eventGetDbName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbBase_GetDbName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbBase_GetDbName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbBase_GetDbName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Database Connection" },
		{ "DisplayName", "Get Database Filename" },
		{ "ModuleRelativePath", "Public/DbBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbBase_GetDbName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbBase, nullptr, "GetDbName", nullptr, nullptr, Z_Construct_UFunction_UDbBase_GetDbName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_GetDbName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbBase_GetDbName_Statics::DbBase_eventGetDbName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_GetDbName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbBase_GetDbName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_GetDbName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbBase_GetDbName_Statics::DbBase_eventGetDbName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbBase_GetDbName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbBase_GetDbName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbBase_Startup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_DatabaseFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_DatabaseFilePath = { "DatabaseFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbBase_eventStartup_Parms, DatabaseFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_DatabaseFilePath_MetaData), Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_DatabaseFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbBase_eventStartup_Parms, Config), Z_Construct_UScriptStruct_FGameDbConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_Config_MetaData), Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_Config_MetaData) }; // 26227094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbBase_Startup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_DatabaseFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbBase_Startup_Statics::NewProp_Config,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbBase_Startup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Database Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This function gives derived classes a place to do any specific initialization.\n\x09 * It is the logical place to instantiate prepared statements, etc.*/" },
#endif
		{ "DisplayName", "Startup" },
		{ "ModuleRelativePath", "Public/DbBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function gives derived classes a place to do any specific initialization.\n       * It is the logical place to instantiate prepared statements, etc." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbBase_Startup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbBase, nullptr, "Startup", nullptr, nullptr, Z_Construct_UFunction_UDbBase_Startup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_Startup_Statics::PropPointers), sizeof(DbBase_eventStartup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_Startup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbBase_Startup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbBase_Startup_Statics::PropPointers) < 2048);
	static_assert(sizeof(DbBase_eventStartup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbBase_Startup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbBase_Startup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDbBase);
	UClass* Z_Construct_UClass_UDbBase_NoRegister()
	{
		return UDbBase::StaticClass();
	}
	struct Z_Construct_UClass_UDbBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDbBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDbBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDbBase_GetDbName, "GetDbName" }, // 4268751788
		{ &Z_Construct_UFunction_UDbBase_Startup, "Startup" }, // 3843571350
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDbBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Parent Sqlite helper DB object */" },
#endif
		{ "IncludePath", "DbBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DbBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Parent Sqlite helper DB object" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDbBase_Statics::NewProp_QueryManager_MetaData[] = {
		{ "Category", "SQLite Database|Database Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Provides temp query functions and access to prepared statements. */" },
#endif
		{ "DisplayName", "Query Manager" },
		{ "ModuleRelativePath", "Public/DbBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides temp query functions and access to prepared statements." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDbBase_Statics::NewProp_QueryManager = { "QueryManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDbBase, QueryManager), Z_Construct_UClass_UPreparedStatementManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::NewProp_QueryManager_MetaData), Z_Construct_UClass_UDbBase_Statics::NewProp_QueryManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDbBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDbBase_Statics::NewProp_QueryManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDbBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDbBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDbBase_Statics::ClassParams = {
		&UDbBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDbBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDbBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDbBase()
	{
		if (!Z_Registration_Info_UClass_UDbBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDbBase.OuterSingleton, Z_Construct_UClass_UDbBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDbBase.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UDbBase>()
	{
		return UDbBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDbBase);
	UDbBase::~UDbBase() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDbBase, UDbBase::StaticClass, TEXT("UDbBase"), &Z_Registration_Info_UClass_UDbBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDbBase), 1495079743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbBase_h_2723632215(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
