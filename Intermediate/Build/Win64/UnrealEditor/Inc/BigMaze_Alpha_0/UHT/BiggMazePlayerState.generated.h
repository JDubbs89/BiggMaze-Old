// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/BiggMazePlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef BIGMAZE_ALPHA_0_BiggMazePlayerState_generated_h
#error "BiggMazePlayerState.generated.h already included, missing '#pragma once' in BiggMazePlayerState.h"
#endif
#define BIGMAZE_ALPHA_0_BiggMazePlayerState_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABiggMazePlayerState(); \
	friend struct Z_Construct_UClass_ABiggMazePlayerState_Statics; \
public: \
	DECLARE_CLASS(ABiggMazePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(ABiggMazePlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ABiggMazePlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySystemComponent=NETFIELD_REP_START, \
		AmmoAttributeSet, \
		IngredientAttributeSet, \
		NETFIELD_REP_END=IngredientAttributeSet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABiggMazePlayerState(ABiggMazePlayerState&&); \
	ABiggMazePlayerState(const ABiggMazePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABiggMazePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABiggMazePlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABiggMazePlayerState) \
	NO_API virtual ~ABiggMazePlayerState();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_20_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class ABiggMazePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_Player_BiggMazePlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
