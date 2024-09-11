// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/PlayDb.h"
#include "SqliteGameDB/Public/LogInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayDb() {}
// Cross Module References
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbBase();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_USplitDbBase();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_USplitDbBase_NoRegister();
	SQLITEGAMEDB_API UEnum* Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FLogInfo();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(USplitDbBase::execConnectResumePlayDb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectResumePlayDb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execCreateQuickSavePlayDb)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Additional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateQuickSavePlayDb(Z_Param_Additional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execCreatePlayDbFromTemplate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_GET_PROPERTY(FStrProperty,Z_Param_Additional);
		P_GET_ENUM(EPlayDbPurpose,Z_Param_Purpose);
		P_GET_UBOOL(Z_Param_SetAsWorkingCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreatePlayDbFromTemplate(Z_Param_Title,Z_Param_Additional,EPlayDbPurpose(Z_Param_Purpose),Z_Param_SetAsWorkingCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execConnectPlayDb)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LogIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectPlayDb(Z_Param_LogIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execGetCurrentPlayDbPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentPlayDbPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execGetCurrentLogDbPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentLogDbPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execListLogEntriesPaged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RecordsPerPage);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageNumber);
		P_GET_TARRAY(EPlayDbPurpose,Z_Param_FilterBy);
		P_GET_UBOOL(Z_Param_Unused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLogInfo>*)Z_Param__Result=P_THIS->ListLogEntriesPaged(Z_Param_RecordsPerPage,Z_Param_PageNumber,Z_Param_FilterBy,Z_Param_Unused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplitDbBase::execListLogEntries)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_TARRAY(EPlayDbPurpose,Z_Param_FilterBy);
		P_GET_UBOOL(Z_Param_Unused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLogInfo>*)Z_Param__Result=P_THIS->ListLogEntries(Z_Param_MaxResults,Z_Param_FilterBy,Z_Param_Unused);
		P_NATIVE_END;
	}
	void USplitDbBase::StaticRegisterNativesUSplitDbBase()
	{
		UClass* Class = USplitDbBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectPlayDb", &USplitDbBase::execConnectPlayDb },
			{ "ConnectResumePlayDb", &USplitDbBase::execConnectResumePlayDb },
			{ "CreatePlayDbFromTemplate", &USplitDbBase::execCreatePlayDbFromTemplate },
			{ "CreateQuickSavePlayDb", &USplitDbBase::execCreateQuickSavePlayDb },
			{ "GetCurrentLogDbPath", &USplitDbBase::execGetCurrentLogDbPath },
			{ "GetCurrentPlayDbPath", &USplitDbBase::execGetCurrentPlayDbPath },
			{ "ListLogEntries", &USplitDbBase::execListLogEntries },
			{ "ListLogEntriesPaged", &USplitDbBase::execListLogEntriesPaged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics
	{
		struct SplitDbBase_eventConnectPlayDb_Parms
		{
			int32 LogIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventConnectPlayDb_Parms, LogIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplitDbBase_eventConnectPlayDb_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventConnectPlayDb_Parms), &Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_LogIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attempt to load a PlayDb file.\n\x09 * The LogIndex is both the ROWID from the log file,\n\x09 * and the filename of the playdb instance. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayDb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to load a PlayDb file.\n       * The LogIndex is both the ROWID from the log file,\n       * and the filename of the playdb instance." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "ConnectPlayDb", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::SplitDbBase_eventConnectPlayDb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::SplitDbBase_eventConnectPlayDb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_ConnectPlayDb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_ConnectPlayDb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics
	{
		struct SplitDbBase_eventConnectResumePlayDb_Parms
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
	void Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplitDbBase_eventConnectResumePlayDb_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventConnectResumePlayDb_Parms), &Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets the 'working copy' to the most recent playdb file.*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayDb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the 'working copy' to the most recent playdb file." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "ConnectResumePlayDb", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::SplitDbBase_eventConnectResumePlayDb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::SplitDbBase_eventConnectResumePlayDb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics
	{
		struct SplitDbBase_eventCreatePlayDbFromTemplate_Parms
		{
			FString Title;
			FString Additional;
			EPlayDbPurpose Purpose;
			bool SetAsWorkingCopy;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Additional;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Purpose_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Purpose;
		static void NewProp_SetAsWorkingCopy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAsWorkingCopy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventCreatePlayDbFromTemplate_Parms, Title), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Additional = { "Additional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventCreatePlayDbFromTemplate_Parms, Additional), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Purpose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Purpose = { "Purpose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventCreatePlayDbFromTemplate_Parms, Purpose), Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose, METADATA_PARAMS(0, nullptr) }; // 2472856879
	void Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_SetAsWorkingCopy_SetBit(void* Obj)
	{
		((SplitDbBase_eventCreatePlayDbFromTemplate_Parms*)Obj)->SetAsWorkingCopy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_SetAsWorkingCopy = { "SetAsWorkingCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventCreatePlayDbFromTemplate_Parms), &Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_SetAsWorkingCopy_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplitDbBase_eventCreatePlayDbFromTemplate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventCreatePlayDbFromTemplate_Parms), &Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Additional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Purpose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_Purpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_SetAsWorkingCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attempt to create a NEW play db.\n\x09 * This makes a copy of the playdb template, and registers it with the logdb.\n\x09 * Return value is the new index, or -1 if an error occurred.\n\x09 * This function is generally only used right at the start of a new playthrough. */" },
#endif
		{ "CPP_Default_SetAsWorkingCopy", "true" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to create a NEW play db.\n       * This makes a copy of the playdb template, and registers it with the logdb.\n       * Return value is the new index, or -1 if an error occurred.\n       * This function is generally only used right at the start of a new playthrough." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "CreatePlayDbFromTemplate", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::SplitDbBase_eventCreatePlayDbFromTemplate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::SplitDbBase_eventCreatePlayDbFromTemplate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics
	{
		struct SplitDbBase_eventCreateQuickSavePlayDb_Parms
		{
			FString Additional;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Additional;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_Additional = { "Additional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventCreateQuickSavePlayDb_Parms, Additional), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplitDbBase_eventCreateQuickSavePlayDb_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventCreateQuickSavePlayDb_Parms), &Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_Additional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This simply calls CreatePlayDbFromCurrent(), supplying default values. */" },
#endif
		{ "ModuleRelativePath", "Public/PlayDb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This simply calls CreatePlayDbFromCurrent(), supplying default values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "CreateQuickSavePlayDb", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::SplitDbBase_eventCreateQuickSavePlayDb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::SplitDbBase_eventCreateQuickSavePlayDb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics
	{
		struct SplitDbBase_eventGetCurrentLogDbPath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventGetCurrentLogDbPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "GetCurrentLogDbPath", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::SplitDbBase_eventGetCurrentLogDbPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::SplitDbBase_eventGetCurrentLogDbPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics
	{
		struct SplitDbBase_eventGetCurrentPlayDbPath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventGetCurrentPlayDbPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "GetCurrentPlayDbPath", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::SplitDbBase_eventGetCurrentPlayDbPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::SplitDbBase_eventGetCurrentPlayDbPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics
	{
		struct SplitDbBase_eventListLogEntries_Parms
		{
			int32 MaxResults;
			TArray<EPlayDbPurpose> FilterBy;
			bool Unused;
			TArray<FLogInfo> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterBy_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterBy_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterBy;
		static void NewProp_Unused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Unused;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntries_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy_Inner = { "FilterBy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose, METADATA_PARAMS(0, nullptr) }; // 2472856879
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy = { "FilterBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntries_Parms, FilterBy), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2472856879
	void Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_Unused_SetBit(void* Obj)
	{
		((SplitDbBase_eventListLogEntries_Parms*)Obj)->Unused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_Unused = { "Unused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventListLogEntries_Parms), &Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_Unused_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLogInfo, METADATA_PARAMS(0, nullptr) }; // 8866822
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 8866822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_FilterBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_Unused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "ListLogEntries", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::SplitDbBase_eventListLogEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::SplitDbBase_eventListLogEntries_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_ListLogEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_ListLogEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics
	{
		struct SplitDbBase_eventListLogEntriesPaged_Parms
		{
			int32 RecordsPerPage;
			int32 PageNumber;
			TArray<EPlayDbPurpose> FilterBy;
			bool Unused;
			TArray<FLogInfo> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecordsPerPage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageNumber;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterBy_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterBy_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterBy;
		static void NewProp_Unused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Unused;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_RecordsPerPage = { "RecordsPerPage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntriesPaged_Parms, RecordsPerPage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_PageNumber = { "PageNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntriesPaged_Parms, PageNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy_Inner = { "FilterBy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SqliteGameDB_EPlayDbPurpose, METADATA_PARAMS(0, nullptr) }; // 2472856879
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy = { "FilterBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntriesPaged_Parms, FilterBy), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2472856879
	void Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_Unused_SetBit(void* Obj)
	{
		((SplitDbBase_eventListLogEntriesPaged_Parms*)Obj)->Unused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_Unused = { "Unused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplitDbBase_eventListLogEntriesPaged_Parms), &Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_Unused_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLogInfo, METADATA_PARAMS(0, nullptr) }; // 8866822
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitDbBase_eventListLogEntriesPaged_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 8866822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_RecordsPerPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_PageNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_FilterBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_Unused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::Function_MetaDataParams[] = {
		{ "Category", "SqliteGameDB|Persistence" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplitDbBase, nullptr, "ListLogEntriesPaged", nullptr, nullptr, Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::SplitDbBase_eventListLogEntriesPaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::SplitDbBase_eventListLogEntriesPaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitDbBase);
	UClass* Z_Construct_UClass_USplitDbBase_NoRegister()
	{
		return USplitDbBase::StaticClass();
	}
	struct Z_Construct_UClass_USplitDbBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplitDbBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDbBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitDbBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USplitDbBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplitDbBase_ConnectPlayDb, "ConnectPlayDb" }, // 2434994200
		{ &Z_Construct_UFunction_USplitDbBase_ConnectResumePlayDb, "ConnectResumePlayDb" }, // 3791425131
		{ &Z_Construct_UFunction_USplitDbBase_CreatePlayDbFromTemplate, "CreatePlayDbFromTemplate" }, // 1471736661
		{ &Z_Construct_UFunction_USplitDbBase_CreateQuickSavePlayDb, "CreateQuickSavePlayDb" }, // 3621311035
		{ &Z_Construct_UFunction_USplitDbBase_GetCurrentLogDbPath, "GetCurrentLogDbPath" }, // 467634400
		{ &Z_Construct_UFunction_USplitDbBase_GetCurrentPlayDbPath, "GetCurrentPlayDbPath" }, // 3087680942
		{ &Z_Construct_UFunction_USplitDbBase_ListLogEntries, "ListLogEntries" }, // 2892425794
		{ &Z_Construct_UFunction_USplitDbBase_ListLogEntriesPaged, "ListLogEntriesPaged" }, // 2025859837
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitDbBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitDbBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Represents a 'split' sqlite database design, with a fixed 'main.db',\n * a player centric 'log.db',\n * and multiple 'play.db's representing save states, with a single 'working copy'.\n *\n * Most of the functionality this class provides centers around the 'log.db',\n * and managing the current working copy play.db - saving, loading, etc. */" },
#endif
		{ "IncludePath", "PlayDb.h" },
		{ "ModuleRelativePath", "Public/PlayDb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a 'split' sqlite database design, with a fixed 'main.db',\n* a player centric 'log.db',\n* and multiple 'play.db's representing save states, with a single 'working copy'.\n*\n* Most of the functionality this class provides centers around the 'log.db',\n* and managing the current working copy play.db - saving, loading, etc." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplitDbBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitDbBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitDbBase_Statics::ClassParams = {
		&USplitDbBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitDbBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitDbBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USplitDbBase()
	{
		if (!Z_Registration_Info_UClass_USplitDbBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitDbBase.OuterSingleton, Z_Construct_UClass_USplitDbBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplitDbBase.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<USplitDbBase>()
	{
		return USplitDbBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplitDbBase);
	USplitDbBase::~USplitDbBase() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplitDbBase, USplitDbBase::StaticClass, TEXT("USplitDbBase"), &Z_Registration_Info_UClass_USplitDbBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitDbBase), 3966815965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_1590381094(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_PlayDb_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
