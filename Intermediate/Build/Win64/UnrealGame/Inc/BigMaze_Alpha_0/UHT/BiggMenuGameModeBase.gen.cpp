// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/MainMenu/BiggMenuGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiggMenuGameModeBase() {}
// Cross Module References
	BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMenuGameModeBase();
	BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_ABiggMenuGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References
	void ABiggMenuGameModeBase::StaticRegisterNativesABiggMenuGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABiggMenuGameModeBase);
	UClass* Z_Construct_UClass_ABiggMenuGameModeBase_NoRegister()
	{
		return ABiggMenuGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABiggMenuGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABiggMenuGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMenuGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABiggMenuGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainMenu/BiggMenuGameModeBase.h" },
		{ "ModuleRelativePath", "Public/MainMenu/BiggMenuGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABiggMenuGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiggMenuGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABiggMenuGameModeBase_Statics::ClassParams = {
		&ABiggMenuGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABiggMenuGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABiggMenuGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABiggMenuGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABiggMenuGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABiggMenuGameModeBase.OuterSingleton, Z_Construct_UClass_ABiggMenuGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABiggMenuGameModeBase.OuterSingleton;
	}
	template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<ABiggMenuGameModeBase>()
	{
		return ABiggMenuGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABiggMenuGameModeBase);
	ABiggMenuGameModeBase::~ABiggMenuGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_MainMenu_BiggMenuGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_MainMenu_BiggMenuGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABiggMenuGameModeBase, ABiggMenuGameModeBase::StaticClass, TEXT("ABiggMenuGameModeBase"), &Z_Registration_Info_UClass_ABiggMenuGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABiggMenuGameModeBase), 2900858053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_MainMenu_BiggMenuGameModeBase_h_764627046(TEXT("/Script/BigMaze_Alpha_0"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_MainMenu_BiggMenuGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_MainMenu_BiggMenuGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
