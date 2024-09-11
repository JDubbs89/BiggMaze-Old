// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/PreparedStatementGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreparedStatementGroup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbStatement_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementGroup();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UPreparedStatementGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	void UPreparedStatementGroup::StaticRegisterNativesUPreparedStatementGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreparedStatementGroup);
	UClass* Z_Construct_UClass_UPreparedStatementGroup_NoRegister()
	{
		return UPreparedStatementGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPreparedStatementGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Statements_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Statements_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Statements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreparedStatementGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementGroup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreparedStatementGroup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Represents a (optionally filtered) group of prepared statements. */" },
#endif
		{ "IncludePath", "PreparedStatementGroup.h" },
		{ "ModuleRelativePath", "Public/PreparedStatementGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a (optionally filtered) group of prepared statements." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_ValueProp = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_Key_KeyProp = { "Statements_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Storage for the prepared statements. */" },
#endif
		{ "ModuleRelativePath", "Public/PreparedStatementGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Storage for the prepared statements." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPreparedStatementGroup, Statements), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_MetaData), Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreparedStatementGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreparedStatementGroup_Statics::NewProp_Statements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreparedStatementGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreparedStatementGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreparedStatementGroup_Statics::ClassParams = {
		&UPreparedStatementGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPreparedStatementGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreparedStatementGroup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreparedStatementGroup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPreparedStatementGroup()
	{
		if (!Z_Registration_Info_UClass_UPreparedStatementGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreparedStatementGroup.OuterSingleton, Z_Construct_UClass_UPreparedStatementGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPreparedStatementGroup.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UPreparedStatementGroup>()
	{
		return UPreparedStatementGroup::StaticClass();
	}
	UPreparedStatementGroup::UPreparedStatementGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreparedStatementGroup);
	UPreparedStatementGroup::~UPreparedStatementGroup() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPreparedStatementGroup, UPreparedStatementGroup::StaticClass, TEXT("UPreparedStatementGroup"), &Z_Registration_Info_UClass_UPreparedStatementGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreparedStatementGroup), 3830594867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementGroup_h_3559629258(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PreparedStatementGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
