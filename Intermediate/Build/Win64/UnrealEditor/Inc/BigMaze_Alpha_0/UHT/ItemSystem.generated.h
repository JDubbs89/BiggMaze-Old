// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemActivationType : uint8;
struct FItem;
#ifdef BIGMAZE_ALPHA_0_ItemSystem_generated_h
#error "ItemSystem.generated.h already included, missing '#pragma once' in ItemSystem.h"
#endif
#define BIGMAZE_ALPHA_0_ItemSystem_generated_h

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAttribute_Statics; \
	BIGMAZE_ALPHA_0_API static class UScriptStruct* StaticStruct();


template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<struct FItemAttribute>();

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItem_Statics; \
	BIGMAZE_ALPHA_0_API static class UScriptStruct* StaticStruct();


template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<struct FItem>();

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSwapItem_Implementation(FItem const& Item, bool SwapTo); \
	virtual void QuaternaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void TertiaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void SecondaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void PrimaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	DECLARE_FUNCTION(execOnSwapItem); \
	DECLARE_FUNCTION(execQuaternaryUse); \
	DECLARE_FUNCTION(execTertiaryUse); \
	DECLARE_FUNCTION(execSecondaryUse); \
	DECLARE_FUNCTION(execPrimaryUse);


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemFunctionalityBase(); \
	friend struct Z_Construct_UClass_AItemFunctionalityBase_Statics; \
public: \
	DECLARE_CLASS(AItemFunctionalityBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(AItemFunctionalityBase)


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemFunctionalityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemFunctionalityBase(AItemFunctionalityBase&&); \
	AItemFunctionalityBase(const AItemFunctionalityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemFunctionalityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemFunctionalityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemFunctionalityBase) \
	NO_API virtual ~AItemFunctionalityBase();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_142_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class AItemFunctionalityBase>();

#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDefault(); \
	friend struct Z_Construct_UClass_UItemDefault_Statics; \
public: \
	DECLARE_CLASS(UItemDefault, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UItemDefault)


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDefault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemDefault(UItemDefault&&); \
	UItemDefault(const UItemDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDefault); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDefault) \
	NO_API virtual ~UItemDefault();


#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_175_PROLOG
#define FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_178_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UItemDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h


#define FOREACH_ENUM_EITEMACTIVATIONTYPE(op) \
	op(EItemActivationType::Press) \
	op(EItemActivationType::Hold) \
	op(EItemActivationType::Release) 

enum class EItemActivationType : uint8;
template<> struct TIsUEnumClass<EItemActivationType> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemActivationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
