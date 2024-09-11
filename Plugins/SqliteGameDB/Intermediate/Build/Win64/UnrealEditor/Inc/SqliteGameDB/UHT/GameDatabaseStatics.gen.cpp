// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/GameDatabaseStatics.h"
#include "SqliteGameDB/Public/DBSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDatabaseStatics() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UDbStatement_NoRegister();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UGameDatabaseStatics();
	SQLITEGAMEDB_API UClass* Z_Construct_UClass_UGameDatabaseStatics_NoRegister();
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryBindActorRotation)
	{
		P_GET_OBJECT(UDbStatement,Z_Param_PreparedStatement);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_RotationFieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryBindActorRotation(Z_Param_PreparedStatement,Z_Param_Actor,Z_Param_RotationFieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryBindActorLocation)
	{
		P_GET_OBJECT(UDbStatement,Z_Param_PreparedStatement);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocationFieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryBindActorLocation(Z_Param_PreparedStatement,Z_Param_Actor,Z_Param_LocationFieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryBindActorLocationRotation)
	{
		P_GET_OBJECT(UDbStatement,Z_Param_PreparedStatement);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocationFieldNameBase);
		P_GET_PROPERTY(FStrProperty,Z_Param_RotationFieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryBindActorLocationRotation(Z_Param_PreparedStatement,Z_Param_Actor,Z_Param_LocationFieldNameBase,Z_Param_RotationFieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTrySetActorLocationRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQueryResultRow,Z_Param_Out_QueryRow);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocationFieldNameBase);
		P_GET_PROPERTY(FStrProperty,Z_Param_RotationFieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TrySetActorLocationRotation(Z_Param_Actor,Z_Param_Out_QueryRow,Z_Param_LocationFieldNameBase,Z_Param_RotationFieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryFillRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FQueryResultRow,Z_Param_Out_QueryRow);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryFillRotation(Z_Param_Out_Rotation,Z_Param_Out_QueryRow,Z_Param_FieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryFillColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_STRUCT_REF(FQueryResultRow,Z_Param_Out_QueryRow);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryFillColor(Z_Param_Out_Color,Z_Param_Out_QueryRow,Z_Param_FieldNameBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDatabaseStatics::execTryFillVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_STRUCT_REF(FQueryResultRow,Z_Param_Out_QueryRow);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldNameBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameDatabaseStatics::TryFillVector(Z_Param_Out_Vector,Z_Param_Out_QueryRow,Z_Param_FieldNameBase);
		P_NATIVE_END;
	}
	void UGameDatabaseStatics::StaticRegisterNativesUGameDatabaseStatics()
	{
		UClass* Class = UGameDatabaseStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryBindActorLocation", &UGameDatabaseStatics::execTryBindActorLocation },
			{ "TryBindActorLocationRotation", &UGameDatabaseStatics::execTryBindActorLocationRotation },
			{ "TryBindActorRotation", &UGameDatabaseStatics::execTryBindActorRotation },
			{ "TryFillColor", &UGameDatabaseStatics::execTryFillColor },
			{ "TryFillRotation", &UGameDatabaseStatics::execTryFillRotation },
			{ "TryFillVector", &UGameDatabaseStatics::execTryFillVector },
			{ "TrySetActorLocationRotation", &UGameDatabaseStatics::execTrySetActorLocationRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics
	{
		struct GameDatabaseStatics_eventTryBindActorLocation_Parms
		{
			UDbStatement* PreparedStatement;
			const AActor* Actor;
			FString LocationFieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreparedStatement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationFieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_PreparedStatement = { "PreparedStatement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocation_Parms, PreparedStatement), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_LocationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_LocationFieldNameBase = { "LocationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocation_Parms, LocationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_LocationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_LocationFieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryBindActorLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryBindActorLocation_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_PreparedStatement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_LocationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Given a reference to an AActor, and a PreparedStatement,\n\x09 * Attempts to set the prepared statement bindings to the actor's\n\x09 * current location/rotation values. */" },
#endif
		{ "CPP_Default_LocationFieldNameBase", "Location" },
		{ "DisplayName", "Bind From Actor's Location" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a reference to an AActor, and a PreparedStatement,\n       * Attempts to set the prepared statement bindings to the actor's\n       * current location/rotation values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryBindActorLocation", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::GameDatabaseStatics_eventTryBindActorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::GameDatabaseStatics_eventTryBindActorLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics
	{
		struct GameDatabaseStatics_eventTryBindActorLocationRotation_Parms
		{
			UDbStatement* PreparedStatement;
			const AActor* Actor;
			FString LocationFieldNameBase;
			FString RotationFieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreparedStatement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationFieldNameBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RotationFieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_PreparedStatement = { "PreparedStatement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocationRotation_Parms, PreparedStatement), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocationRotation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_LocationFieldNameBase = { "LocationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocationRotation_Parms, LocationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_RotationFieldNameBase = { "RotationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorLocationRotation_Parms, RotationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryBindActorLocationRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryBindActorLocationRotation_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_PreparedStatement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_LocationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_RotationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Given a reference to an AActor, and a PreparedStatement,\n\x09 * Attempts to set the prepared statement bindings to the actor's\n\x09 * current location/rotation values. */" },
#endif
		{ "CPP_Default_LocationFieldNameBase", "Location" },
		{ "CPP_Default_RotationFieldNameBase", "Rotation" },
		{ "DisplayName", "Bind From Actor's LocationRotation" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a reference to an AActor, and a PreparedStatement,\n       * Attempts to set the prepared statement bindings to the actor's\n       * current location/rotation values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryBindActorLocationRotation", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::GameDatabaseStatics_eventTryBindActorLocationRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::GameDatabaseStatics_eventTryBindActorLocationRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics
	{
		struct GameDatabaseStatics_eventTryBindActorRotation_Parms
		{
			UDbStatement* PreparedStatement;
			const AActor* Actor;
			FString RotationFieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreparedStatement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RotationFieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_PreparedStatement = { "PreparedStatement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorRotation_Parms, PreparedStatement), Z_Construct_UClass_UDbStatement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorRotation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_RotationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_RotationFieldNameBase = { "RotationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryBindActorRotation_Parms, RotationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_RotationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_RotationFieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryBindActorRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryBindActorRotation_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_PreparedStatement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_RotationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Given a reference to an AActor, and a PreparedStatement,\n\x09 * Attempts to set the prepared statement bindings to the actor's\n\x09 * current location/rotation values. */" },
#endif
		{ "CPP_Default_RotationFieldNameBase", "Rotation" },
		{ "DisplayName", "Bind From Actor's Rotation" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a reference to an AActor, and a PreparedStatement,\n       * Attempts to set the prepared statement bindings to the actor's\n       * current location/rotation values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryBindActorRotation", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::GameDatabaseStatics_eventTryBindActorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::GameDatabaseStatics_eventTryBindActorRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics
	{
		struct GameDatabaseStatics_eventTryFillColor_Parms
		{
			FLinearColor Color;
			FQueryResultRow QueryRow;
			FString FieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_QueryRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_QueryRow = { "QueryRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillColor_Parms, QueryRow), Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_QueryRow_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_QueryRow_MetaData) }; // 1278585499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_FieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_FieldNameBase = { "FieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillColor_Parms, FieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_FieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_FieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryFillColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryFillColor_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_QueryRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_FieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Populate an FColor from individual query result field values using a base field name.\n\x09 * The function looks for fields in the result row that start with that name,\n\x09 * and end in 'R', 'G', 'B', or 'A', and sets the relevant properties in the FColor.\n\x09 * Returns true/false to indicate if the function was able to do so. */" },
#endif
		{ "CPP_Default_FieldNameBase", "Color" },
		{ "DisplayName", "Color From Database" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate an FColor from individual query result field values using a base field name.\n       * The function looks for fields in the result row that start with that name,\n       * and end in 'R', 'G', 'B', or 'A', and sets the relevant properties in the FColor.\n       * Returns true/false to indicate if the function was able to do so." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryFillColor", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::GameDatabaseStatics_eventTryFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::GameDatabaseStatics_eventTryFillColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics
	{
		struct GameDatabaseStatics_eventTryFillRotation_Parms
		{
			FRotator Rotation;
			FQueryResultRow QueryRow;
			FString FieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_QueryRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_QueryRow = { "QueryRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillRotation_Parms, QueryRow), Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_QueryRow_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_QueryRow_MetaData) }; // 1278585499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_FieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_FieldNameBase = { "FieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillRotation_Parms, FieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_FieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_FieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryFillRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryFillRotation_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_QueryRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_FieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Populate an FRotator from individual query result field values using a base field name.\n\x09 * The function looks for fields in the result row that start with that name,\n\x09 * and end in 'P', 'R', 'Y', and sets the relevant properties in the FRotator.\n\x09 * Returns true/false to indicate if the function was able to do so. */" },
#endif
		{ "CPP_Default_FieldNameBase", "Rotation" },
		{ "DisplayName", "Rotation From Database" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate an FRotator from individual query result field values using a base field name.\n       * The function looks for fields in the result row that start with that name,\n       * and end in 'P', 'R', 'Y', and sets the relevant properties in the FRotator.\n       * Returns true/false to indicate if the function was able to do so." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryFillRotation", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::GameDatabaseStatics_eventTryFillRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::GameDatabaseStatics_eventTryFillRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics
	{
		struct GameDatabaseStatics_eventTryFillVector_Parms
		{
			FVector Vector;
			FQueryResultRow QueryRow;
			FString FieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_QueryRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_QueryRow = { "QueryRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillVector_Parms, QueryRow), Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_QueryRow_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_QueryRow_MetaData) }; // 1278585499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_FieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_FieldNameBase = { "FieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTryFillVector_Parms, FieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_FieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_FieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTryFillVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTryFillVector_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_QueryRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_FieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Populate an FVector from individual query result field values using a base field name.\n\x09 * The function looks for fields in the result row that start with that name,\n\x09 * and end in 'X', 'Y', 'Z', and sets the relevant properties in the FVector.\n\x09 * Returns true/false to indicate if the function was able to do so. */" },
#endif
		{ "CPP_Default_FieldNameBase", "Location" },
		{ "DisplayName", "Vector From Database" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate an FVector from individual query result field values using a base field name.\n       * The function looks for fields in the result row that start with that name,\n       * and end in 'X', 'Y', 'Z', and sets the relevant properties in the FVector.\n       * Returns true/false to indicate if the function was able to do so." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TryFillVector", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::GameDatabaseStatics_eventTryFillVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::GameDatabaseStatics_eventTryFillVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics
	{
		struct GameDatabaseStatics_eventTrySetActorLocationRotation_Parms
		{
			AActor* Actor;
			FQueryResultRow QueryRow;
			FString LocationFieldNameBase;
			FString RotationFieldNameBase;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationFieldNameBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFieldNameBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RotationFieldNameBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTrySetActorLocationRotation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_QueryRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_QueryRow = { "QueryRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTrySetActorLocationRotation_Parms, QueryRow), Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_QueryRow_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_QueryRow_MetaData) }; // 1278585499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_LocationFieldNameBase = { "LocationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTrySetActorLocationRotation_Parms, LocationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_LocationFieldNameBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_RotationFieldNameBase = { "RotationFieldNameBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDatabaseStatics_eventTrySetActorLocationRotation_Parms, RotationFieldNameBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData), Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_RotationFieldNameBase_MetaData) };
	void Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameDatabaseStatics_eventTrySetActorLocationRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameDatabaseStatics_eventTrySetActorLocationRotation_Parms), &Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_QueryRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_LocationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_RotationFieldNameBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite Database|Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attempts to find the 6 fields required for both location and rotation in the query result row,\n\x09 * and set the actor's location and rotation using them.\n\x09 * Returns true/false to indicate if the function was able to do so. */" },
#endif
		{ "CPP_Default_LocationFieldNameBase", "Location" },
		{ "CPP_Default_RotationFieldNameBase", "Rotation" },
		{ "DisplayName", "Set Actor's LocationRotation" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to find the 6 fields required for both location and rotation in the query result row,\n       * and set the actor's location and rotation using them.\n       * Returns true/false to indicate if the function was able to do so." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDatabaseStatics, nullptr, "TrySetActorLocationRotation", nullptr, nullptr, Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::GameDatabaseStatics_eventTrySetActorLocationRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::GameDatabaseStatics_eventTrySetActorLocationRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameDatabaseStatics);
	UClass* Z_Construct_UClass_UGameDatabaseStatics_NoRegister()
	{
		return UGameDatabaseStatics::StaticClass();
	}
	struct Z_Construct_UClass_UGameDatabaseStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameDatabaseStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDatabaseStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameDatabaseStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocation, "TryBindActorLocation" }, // 3734244890
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorLocationRotation, "TryBindActorLocationRotation" }, // 2850769775
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryBindActorRotation, "TryBindActorRotation" }, // 2613158541
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryFillColor, "TryFillColor" }, // 3811110628
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryFillRotation, "TryFillRotation" }, // 899709119
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TryFillVector, "TryFillVector" }, // 3231801420
		{ &Z_Construct_UFunction_UGameDatabaseStatics_TrySetActorLocationRotation, "TrySetActorLocationRotation" }, // 999512473
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDatabaseStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameDatabaseStatics_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* */" },
#endif
		{ "IncludePath", "GameDatabaseStatics.h" },
		{ "ModuleRelativePath", "Public/GameDatabaseStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameDatabaseStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDatabaseStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDatabaseStatics_Statics::ClassParams = {
		&UGameDatabaseStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDatabaseStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameDatabaseStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameDatabaseStatics()
	{
		if (!Z_Registration_Info_UClass_UGameDatabaseStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDatabaseStatics.OuterSingleton, Z_Construct_UClass_UGameDatabaseStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameDatabaseStatics.OuterSingleton;
	}
	template<> SQLITEGAMEDB_API UClass* StaticClass<UGameDatabaseStatics>()
	{
		return UGameDatabaseStatics::StaticClass();
	}
	UGameDatabaseStatics::UGameDatabaseStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDatabaseStatics);
	UGameDatabaseStatics::~UGameDatabaseStatics() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameDatabaseStatics, UGameDatabaseStatics::StaticClass, TEXT("UGameDatabaseStatics"), &Z_Registration_Info_UClass_UGameDatabaseStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDatabaseStatics), 2732070340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_1452244984(TEXT("/Script/SqliteGameDB"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_GameDatabaseStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
