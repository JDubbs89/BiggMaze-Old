// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGenerator/Public/Maze.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MAZEGENERATOR_API UClass* Z_Construct_UClass_AMaze();
MAZEGENERATOR_API UClass* Z_Construct_UClass_AMaze_NoRegister();
MAZEGENERATOR_API UEnum* Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm();
MAZEGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMazeCoordinates();
MAZEGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMazeSize();
UPackage* Z_Construct_UPackage__Script_MazeGenerator();
// End Cross Module References

// Begin Enum EGenerationAlgorithm
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationAlgorithm;
static UEnum* EGenerationAlgorithm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerationAlgorithm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerationAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm, (UObject*)Z_Construct_UPackage__Script_MazeGenerator(), TEXT("EGenerationAlgorithm"));
	}
	return Z_Registration_Info_UEnum_EGenerationAlgorithm.OuterSingleton;
}
template<> MAZEGENERATOR_API UEnum* StaticEnum<EGenerationAlgorithm>()
{
	return EGenerationAlgorithm_StaticEnum();
}
struct Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backtracker.DisplayName", "Recursive Backtracker" },
		{ "Backtracker.Name", "EGenerationAlgorithm::Backtracker" },
		{ "BlueprintType", "true" },
		{ "Division.DisplayName", "Recursive Division" },
		{ "Division.Name", "EGenerationAlgorithm::Division" },
		{ "Eller.Name", "EGenerationAlgorithm::Eller" },
		{ "HaK.DisplayName", "Hunt-and-Kill" },
		{ "HaK.Name", "EGenerationAlgorithm::HaK" },
		{ "Kruskal.Name", "EGenerationAlgorithm::Kruskal" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "Prim.Name", "EGenerationAlgorithm::Prim" },
		{ "Sidewinder.Name", "EGenerationAlgorithm::Sidewinder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerationAlgorithm::Backtracker", (int64)EGenerationAlgorithm::Backtracker },
		{ "EGenerationAlgorithm::Division", (int64)EGenerationAlgorithm::Division },
		{ "EGenerationAlgorithm::HaK", (int64)EGenerationAlgorithm::HaK },
		{ "EGenerationAlgorithm::Sidewinder", (int64)EGenerationAlgorithm::Sidewinder },
		{ "EGenerationAlgorithm::Kruskal", (int64)EGenerationAlgorithm::Kruskal },
		{ "EGenerationAlgorithm::Eller", (int64)EGenerationAlgorithm::Eller },
		{ "EGenerationAlgorithm::Prim", (int64)EGenerationAlgorithm::Prim },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MazeGenerator,
	nullptr,
	"EGenerationAlgorithm",
	"EGenerationAlgorithm",
	Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm()
{
	if (!Z_Registration_Info_UEnum_EGenerationAlgorithm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationAlgorithm.InnerSingleton, Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerationAlgorithm.InnerSingleton;
}
// End Enum EGenerationAlgorithm

// Begin ScriptStruct FMazeSize
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MazeSize;
class UScriptStruct* FMazeSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MazeSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MazeSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeSize, (UObject*)Z_Construct_UPackage__Script_MazeGenerator(), TEXT("MazeSize"));
	}
	return Z_Registration_Info_UScriptStruct_MazeSize.OuterSingleton;
}
template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<FMazeSize>()
{
	return FMazeSize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMazeSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "101" },
		{ "UIMin", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "101" },
		{ "UIMin", "5" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeSize, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeSize, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
	nullptr,
	&NewStructOps,
	"MazeSize",
	Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers),
	sizeof(FMazeSize),
	alignof(FMazeSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMazeSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMazeSize()
{
	if (!Z_Registration_Info_UScriptStruct_MazeSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MazeSize.InnerSingleton, Z_Construct_UScriptStruct_FMazeSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MazeSize.InnerSingleton;
}
// End ScriptStruct FMazeSize

// Begin ScriptStruct FMazeCoordinates
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MazeCoordinates;
class UScriptStruct* FMazeCoordinates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MazeCoordinates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MazeCoordinates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeCoordinates, (UObject*)Z_Construct_UPackage__Script_MazeGenerator(), TEXT("MazeCoordinates"));
	}
	return Z_Registration_Info_UScriptStruct_MazeCoordinates.OuterSingleton;
}
template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<FMazeCoordinates>()
{
	return FMazeCoordinates::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMazeCoordinates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeCoordinates>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeCoordinates, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeCoordinates, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
	nullptr,
	&NewStructOps,
	"MazeCoordinates",
	Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers),
	sizeof(FMazeCoordinates),
	alignof(FMazeCoordinates),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMazeCoordinates_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMazeCoordinates()
{
	if (!Z_Registration_Info_UScriptStruct_MazeCoordinates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MazeCoordinates.InnerSingleton, Z_Construct_UScriptStruct_FMazeCoordinates_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MazeCoordinates.InnerSingleton;
}
// End ScriptStruct FMazeCoordinates

// Begin Class AMaze Function Randomize
struct Z_Construct_UFunction_AMaze_Randomize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Maze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate Maze with random size, seed and \n\x09 * algorithm with path connecting top-left and bottom-right corners.\n\x09 */" },
#endif
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ShortTooltip", "Generate an arbitrary maze." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate Maze with random size, seed and\nalgorithm with path connecting top-left and bottom-right corners." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Randomize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Randomize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMaze_Randomize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMaze_Randomize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_Randomize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMaze::execRandomize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Randomize();
	P_NATIVE_END;
}
// End Class AMaze Function Randomize

// Begin Class AMaze Function UpdateMaze
struct Z_Construct_UFunction_AMaze_UpdateMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Maze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update Maze according to pre-set parameters: Size, Generation Algorithm, Seed and Path-related params.\n" },
#endif
		{ "ModuleRelativePath", "Public/Maze.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Maze according to pre-set parameters: Size, Generation Algorithm, Seed and Path-related params." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_UpdateMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "UpdateMaze", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_UpdateMaze_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMaze_UpdateMaze_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMaze_UpdateMaze()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_UpdateMaze_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMaze::execUpdateMaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMaze();
	P_NATIVE_END;
}
// End Class AMaze Function UpdateMaze

// Begin Class AMaze
void AMaze::StaticRegisterNativesAMaze()
{
	UClass* Class = AMaze::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Randomize", &AMaze::execRandomize },
		{ "UpdateMaze", &AMaze::execUpdateMaze },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaze);
UClass* Z_Construct_UClass_AMaze_NoRegister()
{
	return AMaze::StaticClass();
}
struct Z_Construct_UClass_AMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Maze.h" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationAlgorithm_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "0" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "1" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeSize_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "2" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Floor" },
		{ "DisplayPriority", "0" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Wall" },
		{ "DisplayPriority", "1" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Outline Wall" },
		{ "DisplayPriority", "2" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePath_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathStaticMesh_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "DisplayName", "Path Floor" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollision_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineWallCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFloorCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MazeCellSize_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationAlgorithm_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationAlgorithm;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MazeSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineStaticMesh;
	static void NewProp_bGeneratePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathStaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathLength;
	static void NewProp_bUseCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineWallCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFloorCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MazeCellSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_Randomize, "Randomize" }, // 2798207609
		{ &Z_Construct_UFunction_AMaze_UpdateMaze, "UpdateMaze" }, // 3494343670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm = { "GenerationAlgorithm", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, GenerationAlgorithm), Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationAlgorithm_MetaData), NewProp_GenerationAlgorithm_MetaData) }; // 2194093854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize = { "MazeSize", nullptr, (EPropertyFlags)0x0011000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, MazeSize), Z_Construct_UScriptStruct_FMazeSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeSize_MetaData), NewProp_MazeSize_MetaData) }; // 2129851455
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh = { "FloorStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, FloorStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorStaticMesh_MetaData), NewProp_FloorStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh = { "WallStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, WallStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallStaticMesh_MetaData), NewProp_WallStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh = { "OutlineStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, OutlineStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineStaticMesh_MetaData), NewProp_OutlineStaticMesh_MetaData) };
void Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_SetBit(void* Obj)
{
	((AMaze*)Obj)->bGeneratePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath = { "bGeneratePath", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratePath_MetaData), NewProp_bGeneratePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0011000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, PathStart), Z_Construct_UScriptStruct_FMazeCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathStart_MetaData), NewProp_PathStart_MetaData) }; // 1473999356
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0011000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, PathEnd), Z_Construct_UScriptStruct_FMazeCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathEnd_MetaData), NewProp_PathEnd_MetaData) }; // 1473999356
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh = { "PathStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, PathStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathStaticMesh_MetaData), NewProp_PathStaticMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, PathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLength_MetaData), NewProp_PathLength_MetaData) };
void Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_SetBit(void* Obj)
{
	((AMaze*)Obj)->bUseCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision = { "bUseCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCollision_MetaData), NewProp_bUseCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells = { "FloorCells", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, FloorCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorCells_MetaData), NewProp_FloorCells_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_WallCells = { "WallCells", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, WallCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallCells_MetaData), NewProp_WallCells_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells = { "OutlineWallCells", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, OutlineWallCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineWallCells_MetaData), NewProp_OutlineWallCells_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells = { "PathFloorCells", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, PathFloorCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFloorCells_MetaData), NewProp_PathFloorCells_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize = { "MazeCellSize", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMaze, MazeCellSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MazeCellSize_MetaData), NewProp_MazeCellSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_WallCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Statics::ClassParams = {
	&AMaze::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMaze_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMaze()
{
	if (!Z_Registration_Info_UClass_AMaze.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaze.OuterSingleton, Z_Construct_UClass_AMaze_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMaze.OuterSingleton;
}
template<> MAZEGENERATOR_API UClass* StaticClass<AMaze>()
{
	return AMaze::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
AMaze::~AMaze() {}
// End Class AMaze

// Begin Registration
struct Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenerationAlgorithm_StaticEnum, TEXT("EGenerationAlgorithm"), &Z_Registration_Info_UEnum_EGenerationAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2194093854U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMazeSize::StaticStruct, Z_Construct_UScriptStruct_FMazeSize_Statics::NewStructOps, TEXT("MazeSize"), &Z_Registration_Info_UScriptStruct_MazeSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMazeSize), 2129851455U) },
		{ FMazeCoordinates::StaticStruct, Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewStructOps, TEXT("MazeCoordinates"), &Z_Registration_Info_UScriptStruct_MazeCoordinates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMazeCoordinates), 1473999356U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMaze, AMaze::StaticClass, TEXT("AMaze"), &Z_Registration_Info_UClass_AMaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaze), 370951690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_3487791778(TEXT("/Script/MazeGenerator"),
	Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
