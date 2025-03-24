// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AI/BiggMazeAICharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef BIGMAZE_ALPHA_0_BiggMazeAICharacter_generated_h
#error "BiggMazeAICharacter.generated.h already included, missing '#pragma once' in BiggMazeAICharacter.h"
#endif
#define BIGMAZE_ALPHA_0_BiggMazeAICharacter_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABiggMazeAICharacter(); \
	friend struct Z_Construct_UClass_ABiggMazeAICharacter_Statics; \
public: \
	DECLARE_CLASS(ABiggMazeAICharacter, ABiggMazeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(ABiggMazeAICharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AmmoAttributeSet=NETFIELD_REP_START, \
		IngredientAttributeSet, \
		NETFIELD_REP_END=IngredientAttributeSet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABiggMazeAICharacter(ABiggMazeAICharacter&&); \
	ABiggMazeAICharacter(const ABiggMazeAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABiggMazeAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABiggMazeAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABiggMazeAICharacter) \
	NO_API virtual ~ABiggMazeAICharacter();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_14_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class ABiggMazeAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_AI_BiggMazeAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
