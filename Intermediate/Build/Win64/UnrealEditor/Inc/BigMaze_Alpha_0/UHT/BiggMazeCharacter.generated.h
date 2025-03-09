// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BiggMazeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIGMAZE_ALPHA_0_BiggMazeCharacter_generated_h
#error "BiggMazeCharacter.generated.h already included, missing '#pragma once' in BiggMazeCharacter.h"
#endif
#define BIGMAZE_ALPHA_0_BiggMazeCharacter_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeAbilities);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABiggMazeCharacter(); \
	friend struct Z_Construct_UClass_ABiggMazeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABiggMazeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(ABiggMazeCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABiggMazeCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySystemComponent=NETFIELD_REP_START, \
		CharAttributeSet, \
		NETFIELD_REP_END=CharAttributeSet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABiggMazeCharacter(ABiggMazeCharacter&&); \
	ABiggMazeCharacter(const ABiggMazeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABiggMazeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABiggMazeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABiggMazeCharacter) \
	NO_API virtual ~ABiggMazeCharacter();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_13_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class ABiggMazeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_Character_BiggMazeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
