// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASFramework/AttributeSets/AS_EquippedItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BIGMAZE_ALPHA_0_AS_EquippedItem_generated_h
#error "AS_EquippedItem.generated.h already included, missing '#pragma once' in AS_EquippedItem.h"
#endif
#define BIGMAZE_ALPHA_0_AS_EquippedItem_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_FireRate); \
	DECLARE_FUNCTION(execOnRep_Handling); \
	DECLARE_FUNCTION(execOnRep_CritMultiplier); \
	DECLARE_FUNCTION(execOnRep_Damage); \
	DECLARE_FUNCTION(execOnRep_ScopedSpread); \
	DECLARE_FUNCTION(execOnRep_Spread); \
	DECLARE_FUNCTION(execOnRep_Range); \
	DECLARE_FUNCTION(execOnRep_MaxLevel); \
	DECLARE_FUNCTION(execOnRep_Level); \
	DECLARE_FUNCTION(execOnRep_ReloadAmt); \
	DECLARE_FUNCTION(execOnRep_AmmoType); \
	DECLARE_FUNCTION(execOnRep_MaxMagCount); \
	DECLARE_FUNCTION(execOnRep_MagCount); \
	DECLARE_FUNCTION(execOnRep_MaxStackCount); \
	DECLARE_FUNCTION(execOnRep_StackCount);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAS_EquippedItem(); \
	friend struct Z_Construct_UClass_UAS_EquippedItem_Statics; \
public: \
	DECLARE_CLASS(UAS_EquippedItem, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UAS_EquippedItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StackCount=NETFIELD_REP_START, \
		MaxStackCount, \
		MagCount, \
		MaxMagCount, \
		AmmoType, \
		ReloadAmt, \
		Level, \
		MaxLevel, \
		Range, \
		Spread, \
		ScopedSpread, \
		Damage, \
		CritMultiplier, \
		Handling, \
		FireRate, \
		NETFIELD_REP_END=FireRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAS_EquippedItem) \
public:


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAS_EquippedItem(UAS_EquippedItem&&); \
	UAS_EquippedItem(const UAS_EquippedItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAS_EquippedItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAS_EquippedItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAS_EquippedItem) \
	NO_API virtual ~UAS_EquippedItem();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_18_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UAS_EquippedItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_EquippedItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
