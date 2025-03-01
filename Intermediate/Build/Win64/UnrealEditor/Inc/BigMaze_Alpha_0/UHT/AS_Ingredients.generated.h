// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASFramework/AttributeSets/AS_Ingredients.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef BIGMAZE_ALPHA_0_AS_Ingredients_generated_h
#error "AS_Ingredients.generated.h already included, missing '#pragma once' in AS_Ingredients.h"
#endif
#define BIGMAZE_ALPHA_0_AS_Ingredients_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxIngredient6); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient6); \
	DECLARE_FUNCTION(execOnRep_MaxIngredient5); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient5); \
	DECLARE_FUNCTION(execOnRep_MaxIngredient4); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient4); \
	DECLARE_FUNCTION(execOnRep_MaxIngredient3); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient3); \
	DECLARE_FUNCTION(execOnRep_MaxIngredient2); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient2); \
	DECLARE_FUNCTION(execOnRep_MaxIngredient1); \
	DECLARE_FUNCTION(execOnRep_CurrentIngredient1);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAS_Ingredients(); \
	friend struct Z_Construct_UClass_UAS_Ingredients_Statics; \
public: \
	DECLARE_CLASS(UAS_Ingredients, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UAS_Ingredients) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentIngredient1=NETFIELD_REP_START, \
		MaxIngredient1, \
		CurrentIngredient2, \
		MaxIngredient2, \
		CurrentIngredient3, \
		MaxIngredient3, \
		CurrentIngredient4, \
		MaxIngredient4, \
		CurrentIngredient5, \
		MaxIngredient5, \
		CurrentIngredient6, \
		MaxIngredient6, \
		NETFIELD_REP_END=MaxIngredient6	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAS_Ingredients) \
public:


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAS_Ingredients(UAS_Ingredients&&); \
	UAS_Ingredients(const UAS_Ingredients&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAS_Ingredients); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAS_Ingredients); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAS_Ingredients) \
	NO_API virtual ~UAS_Ingredients();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_17_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UAS_Ingredients>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_GASFramework_AttributeSets_AS_Ingredients_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
