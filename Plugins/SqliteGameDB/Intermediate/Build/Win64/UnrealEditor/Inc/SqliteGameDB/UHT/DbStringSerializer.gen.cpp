// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SqliteGameDB/Public/DbStringSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDbStringSerializer() {}
// Cross Module References
	SQLITEGAMEDB_API UScriptStruct* Z_Construct_UScriptStruct_FDbStringSerializer();
	UPackage* Z_Construct_UPackage__Script_SqliteGameDB();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DbStringSerializer;
class UScriptStruct* FDbStringSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DbStringSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DbStringSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDbStringSerializer, (UObject*)Z_Construct_UPackage__Script_SqliteGameDB(), TEXT("DbStringSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_DbStringSerializer.OuterSingleton;
}
template<> SQLITEGAMEDB_API UScriptStruct* StaticStruct<FDbStringSerializer>()
{
	return FDbStringSerializer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDbStringSerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDbStringSerializer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is a base for all structs which need automatic DB serialization.\n   Any USTRUCT which derives from this can be used as a UPROPERTY in a class,\n   and have its field's values automatically set from a single database field\n   having the same name as the property. */" },
#endif
		{ "ModuleRelativePath", "Public/DbStringSerializer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a base for all structs which need automatic DB serialization.\n  Any USTRUCT which derives from this can be used as a UPROPERTY in a class,\n  and have its field's values automatically set from a single database field\n  having the same name as the property." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FDbStringSerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDbStringSerializer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDbStringSerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SqliteGameDB,
		nullptr,
		&NewStructOps,
		"DbStringSerializer",
		nullptr,
		0,
		sizeof(FDbStringSerializer),
		alignof(FDbStringSerializer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDbStringSerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDbStringSerializer_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDbStringSerializer()
	{
		if (!Z_Registration_Info_UScriptStruct_DbStringSerializer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DbStringSerializer.InnerSingleton, Z_Construct_UScriptStruct_FDbStringSerializer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DbStringSerializer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStringSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStringSerializer_h_Statics::ScriptStructInfo[] = {
		{ FDbStringSerializer::StaticStruct, Z_Construct_UScriptStruct_FDbStringSerializer_Statics::NewStructOps, TEXT("DbStringSerializer"), &Z_Registration_Info_UScriptStruct_DbStringSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDbStringSerializer), 2859591184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStringSerializer_h_3834506546(TEXT("/Script/SqliteGameDB"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStringSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_SqliteGameDB_Source_SqliteGameDB_Public_DbStringSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
