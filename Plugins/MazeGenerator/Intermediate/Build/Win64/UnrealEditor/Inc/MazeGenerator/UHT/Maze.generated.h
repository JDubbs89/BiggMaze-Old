// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Maze.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGENERATOR_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define MAZEGENERATOR_Maze_generated_h

#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeSize_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeSize>();

#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeCoordinates_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeCoordinates>();

#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execUpdateMaze);


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGenerator"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMaze(AMaze&&); \
	AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze) \
	NO_API virtual ~AMaze();


#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_69_PROLOG
#define FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGENERATOR_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h


#define FOREACH_ENUM_EGENERATIONALGORITHM(op) \
	op(EGenerationAlgorithm::Backtracker) \
	op(EGenerationAlgorithm::Division) \
	op(EGenerationAlgorithm::HaK) \
	op(EGenerationAlgorithm::Sidewinder) \
	op(EGenerationAlgorithm::Kruskal) \
	op(EGenerationAlgorithm::Eller) \
	op(EGenerationAlgorithm::Prim) 

enum class EGenerationAlgorithm : uint8;
template<> struct TIsUEnumClass<EGenerationAlgorithm> { enum { Value = true }; };
template<> MAZEGENERATOR_API UEnum* StaticEnum<EGenerationAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
