// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/GameInstanceDatabaseSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceDatabaseSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbManagerStatics();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbManagerStatics_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UGameInstanceDatabaseSubsystem();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UGameInstanceDatabaseSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(UGameInstanceDatabaseSubsystem::execIsDatabaseDirectoryValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDatabaseDirectoryValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameInstanceDatabaseSubsystem::execGetDatabaseByFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DbFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbBase**)Z_Param__Result=P_THIS->GetDatabaseByFilename(Z_Param_DbFilename);
		P_NATIVE_END;
	}
	void UGameInstanceDatabaseSubsystem::StaticRegisterNativesUGameInstanceDatabaseSubsystem()
	{
		UClass* Class = UGameInstanceDatabaseSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDatabaseByFilename", &UGameInstanceDatabaseSubsystem::execGetDatabaseByFilename },
			{ "IsDatabaseDirectoryValid", &UGameInstanceDatabaseSubsystem::execIsDatabaseDirectoryValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics
	{
		struct GameInstanceDatabaseSubsystem_eventGetDatabaseByFilename_Parms
		{
			FString DbFilename;
			UDbBase* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DbFilename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::NewProp_DbFilename = { "DbFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstanceDatabaseSubsystem_eventGetDatabaseByFilename_Parms, DbFilename), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstanceDatabaseSubsystem_eventGetDatabaseByFilename_Parms, ReturnValue), Z_Construct_UClass_UDbBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::NewProp_DbFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Database Subsystem" },
		{ "DisplayName", "Get Database By Filename" },
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstanceDatabaseSubsystem, nullptr, "GetDatabaseByFilename", nullptr, nullptr, Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::GameInstanceDatabaseSubsystem_eventGetDatabaseByFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::GameInstanceDatabaseSubsystem_eventGetDatabaseByFilename_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics
	{
		struct GameInstanceDatabaseSubsystem_eventIsDatabaseDirectoryValid_Parms
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
	void Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameInstanceDatabaseSubsystem_eventIsDatabaseDirectoryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameInstanceDatabaseSubsystem_eventIsDatabaseDirectoryValid_Parms), &Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstanceDatabaseSubsystem, nullptr, "IsDatabaseDirectoryValid", nullptr, nullptr, Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::GameInstanceDatabaseSubsystem_eventIsDatabaseDirectoryValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::GameInstanceDatabaseSubsystem_eventIsDatabaseDirectoryValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceDatabaseSubsystem);
	UClass* Z_Construct_UClass_UGameInstanceDatabaseSubsystem_NoRegister()
	{
		return UGameInstanceDatabaseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatabaseConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatabaseConnections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_GetDatabaseByFilename, "GetDatabaseByFilename" }, // 4112919224
		{ &Z_Construct_UFunction_UGameInstanceDatabaseSubsystem_IsDatabaseDirectoryValid, "IsDatabaseDirectoryValid" }, // 1885582492
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Manager class for SQLite databases.\nIt is implemented as a GameInstanceSubSystem, so that it is always available during gameplay,\nand that it can use the DeInitialise() method to gracefully dispose of unmanaged resources. */" },
#endif
		{ "IncludePath", "GameInstanceDatabaseSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager class for SQLite databases.\nIt is implemented as a GameInstanceSubSystem, so that it is always available during gameplay,\nand that it can use the DeInitialise() method to gracefully dispose of unmanaged resources." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections_Inner = { "DatabaseConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDbBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* When this subsystem is initialized,\n\x09  it reads the classes stored in the DatabaseConnectionClasses setting.\n\x09  For each of those classes, it creates and instance,\n\x09  and stores their pointers here */" },
#endif
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When this subsystem is initialized,\n        it reads the classes stored in the DatabaseConnectionClasses setting.\n        For each of those classes, it creates and instance,\n        and stores their pointers here" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections = { "DatabaseConnections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceDatabaseSubsystem, DatabaseConnections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections_MetaData), Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::NewProp_DatabaseConnections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceDatabaseSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::ClassParams = {
		&UGameInstanceDatabaseSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameInstanceDatabaseSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameInstanceDatabaseSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceDatabaseSubsystem.OuterSingleton, Z_Construct_UClass_UGameInstanceDatabaseSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInstanceDatabaseSubsystem.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UGameInstanceDatabaseSubsystem>()
	{
		return UGameInstanceDatabaseSubsystem::StaticClass();
	}
	UGameInstanceDatabaseSubsystem::UGameInstanceDatabaseSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceDatabaseSubsystem);
	UGameInstanceDatabaseSubsystem::~UGameInstanceDatabaseSubsystem() {}
	DEFINE_FUNCTION(UDbManagerStatics::execDbSubsystemIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDbManagerStatics::DbSubsystemIsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDbManagerStatics::execGetDatabaseByFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DbFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDbBase**)Z_Param__Result=UDbManagerStatics::GetDatabaseByFilename(Z_Param_DbFilename);
		P_NATIVE_END;
	}
	void UDbManagerStatics::StaticRegisterNativesUDbManagerStatics()
	{
		UClass* Class = UDbManagerStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DbSubsystemIsValid", &UDbManagerStatics::execDbSubsystemIsValid },
			{ "GetDatabaseByFilename", &UDbManagerStatics::execGetDatabaseByFilename },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics
	{
		struct DbManagerStatics_eventDbSubsystemIsValid_Parms
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
	void Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DbManagerStatics_eventDbSubsystemIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DbManagerStatics_eventDbSubsystemIsValid_Parms), &Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Database Subsystem" },
		{ "DisplayName", "Database Subsystem Valid" },
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbManagerStatics, nullptr, "DbSubsystemIsValid", nullptr, nullptr, Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::DbManagerStatics_eventDbSubsystemIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::DbManagerStatics_eventDbSubsystemIsValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics
	{
		struct DbManagerStatics_eventGetDatabaseByFilename_Parms
		{
			FString DbFilename;
			UDbBase* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DbFilename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::NewProp_DbFilename = { "DbFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbManagerStatics_eventGetDatabaseByFilename_Parms, DbFilename), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DbManagerStatics_eventGetDatabaseByFilename_Parms, ReturnValue), Z_Construct_UClass_UDbBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::NewProp_DbFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Database Subsystem" },
		{ "DisplayName", "Get Database By Filename" },
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDbManagerStatics, nullptr, "GetDatabaseByFilename", nullptr, nullptr, Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::DbManagerStatics_eventGetDatabaseByFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::DbManagerStatics_eventGetDatabaseByFilename_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDbManagerStatics);
	UClass* Z_Construct_UClass_UDbManagerStatics_NoRegister()
	{
		return UDbManagerStatics::StaticClass();
	}
	struct Z_Construct_UClass_UDbManagerStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDbManagerStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbManagerStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDbManagerStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDbManagerStatics_DbSubsystemIsValid, "DbSubsystemIsValid" }, // 1515922840
		{ &Z_Construct_UFunction_UDbManagerStatics_GetDatabaseByFilename, "GetDatabaseByFilename" }, // 2574039226
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDbManagerStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDbManagerStatics_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is a utility class which gives easy access to the DB related functions. */" },
#endif
		{ "IncludePath", "GameInstanceDatabaseSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameInstanceDatabaseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a utility class which gives easy access to the DB related functions." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDbManagerStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDbManagerStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDbManagerStatics_Statics::ClassParams = {
		&UDbManagerStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDbManagerStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UDbManagerStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDbManagerStatics()
	{
		if (!Z_Registration_Info_UClass_UDbManagerStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDbManagerStatics.OuterSingleton, Z_Construct_UClass_UDbManagerStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDbManagerStatics.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UDbManagerStatics>()
	{
		return UDbManagerStatics::StaticClass();
	}
	UDbManagerStatics::UDbManagerStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDbManagerStatics);
	UDbManagerStatics::~UDbManagerStatics() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameInstanceDatabaseSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameInstanceDatabaseSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceDatabaseSubsystem, UGameInstanceDatabaseSubsystem::StaticClass, TEXT("UGameInstanceDatabaseSubsystem"), &Z_Registration_Info_UClass_UGameInstanceDatabaseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceDatabaseSubsystem), 3249413460U) },
		{ Z_Construct_UClass_UDbManagerStatics, UDbManagerStatics::StaticClass, TEXT("UDbManagerStatics"), &Z_Registration_Info_UClass_UDbManagerStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDbManagerStatics), 2608024804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameInstanceDatabaseSubsystem_h_3858909367(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameInstanceDatabaseSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameInstanceDatabaseSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
