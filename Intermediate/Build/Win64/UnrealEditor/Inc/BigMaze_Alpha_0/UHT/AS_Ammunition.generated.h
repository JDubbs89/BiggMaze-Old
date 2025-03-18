// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayAttributeData;
#ifdef BIGMAZE_ALPHA_0_AS_Ammunition_generated_h
#error "AS_Ammunition.generated.h already included, missing '#pragma once' in AS_Ammunition.h"
#endif
#define BIGMAZE_ALPHA_0_AS_Ammunition_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxUniversalAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentUniversalAmmo); \
	DECLARE_FUNCTION(execOnRep_MaxRocketAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentRocketAmmo); \
	DECLARE_FUNCTION(execOnRep_MaxShotgunAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentShotgunAmmo); \
	DECLARE_FUNCTION(execOnRep_MaxSniperAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentSniperAmmo); \
	DECLARE_FUNCTION(execOnRep_MaxRifleAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentRifleAmmo); \
	DECLARE_FUNCTION(execOnRep_MaxPistolAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentPistolAmmo); \
	DECLARE_FUNCTION(execGetAmmoAttribute);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAS_Ammunition(); \
	friend struct Z_Construct_UClass_UAS_Ammunition_Statics; \
public: \
	DECLARE_CLASS(UAS_Ammunition, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UAS_Ammunition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPistolAmmo=NETFIELD_REP_START, \
		MaxPistolAmmo, \
		CurrentRifleAmmo, \
		MaxRifleAmmo, \
		CurrentSniperAmmo, \
		MaxSniperAmmo, \
		CurrentShotgunAmmo, \
		MaxShotgunAmmo, \
		CurrentRocketAmmo, \
		MaxRocketAmmo, \
		CurrentUniversalAmmo, \
		MaxUniversalAmmo, \
		NETFIELD_REP_END=MaxUniversalAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAS_Ammunition) \
public:


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAS_Ammunition(UAS_Ammunition&&); \
	UAS_Ammunition(const UAS_Ammunition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAS_Ammunition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAS_Ammunition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAS_Ammunition) \
	NO_API virtual ~UAS_Ammunition();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_20_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UAS_Ammunition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ammunition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
