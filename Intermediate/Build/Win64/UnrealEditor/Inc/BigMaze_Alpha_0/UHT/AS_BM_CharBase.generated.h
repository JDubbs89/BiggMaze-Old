// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AS_BM_CharBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BIGMAZE_ALPHA_0_AS_BM_CharBase_generated_h
#error "AS_BM_CharBase.generated.h already included, missing '#pragma once' in AS_BM_CharBase.h"
#endif
#define BIGMAZE_ALPHA_0_AS_BM_CharBase_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RegenHealth); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_Damage);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAS_BM_CharBase(); \
	friend struct Z_Construct_UClass_UAS_BM_CharBase_Statics; \
public: \
	DECLARE_CLASS(UAS_BM_CharBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UAS_BM_CharBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Damage=NETFIELD_REP_START, \
		CurrentHealth, \
		MaxHealth, \
		RegenHealth, \
		NETFIELD_REP_END=RegenHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAS_BM_CharBase) \
public:


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAS_BM_CharBase(UAS_BM_CharBase&&); \
	UAS_BM_CharBase(const UAS_BM_CharBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAS_BM_CharBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAS_BM_CharBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAS_BM_CharBase) \
	NO_API virtual ~UAS_BM_CharBase();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_20_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UAS_BM_CharBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_AS_BM_CharBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
