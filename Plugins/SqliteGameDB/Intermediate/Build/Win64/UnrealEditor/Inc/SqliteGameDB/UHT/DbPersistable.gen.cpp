// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/DbPersistable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDbPersistable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbPersistable();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbPersistable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	void UDbPersistable::StaticRegisterNativesUDbPersistable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDbPersistable);
	UClass* Z_Construct_UClass_UDbPersistable_NoRegister()
	{
		return UDbPersistable::StaticClass();
	}
	struct Z_Construct_UClass_UDbPersistable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDbPersistable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbPersistable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDbPersistable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DbPersistable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDbPersistable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDbPersistable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDbPersistable_Statics::ClassParams = {
		&UDbPersistable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDbPersistable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDbPersistable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDbPersistable()
	{
		if (!Z_Registration_Info_UClass_UDbPersistable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDbPersistable.OuterSingleton, Z_Construct_UClass_UDbPersistable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDbPersistable.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UDbPersistable>()
	{
		return UDbPersistable::StaticClass();
	}
	UDbPersistable::UDbPersistable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDbPersistable);
	UDbPersistable::~UDbPersistable() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbPersistable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbPersistable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDbPersistable, UDbPersistable::StaticClass, TEXT("UDbPersistable"), &Z_Registration_Info_UClass_UDbPersistable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDbPersistable), 183258284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbPersistable_h_1319382762(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbPersistable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbPersistable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
