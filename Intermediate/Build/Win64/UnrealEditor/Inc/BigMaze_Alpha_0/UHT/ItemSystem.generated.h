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

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAttribute_Statics; \
	BIGMAZE_ALPHA_0_API static class UScriptStruct* StaticStruct();


template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<struct FItemAttribute>();

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItem_Statics; \
	BIGMAZE_ALPHA_0_API static class UScriptStruct* StaticStruct();


template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<struct FItem>();

#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_SPARSE_DATA
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSwapItem_Implementation(FItem const& Item, bool SwapTo); \
	virtual void QuaternaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void TertiaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void SecondaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
	virtual void PrimaryUse_Implementation(FItem const& Item, EItemActivationType ActivationType); \
 \
	DECLARE_FUNCTION(execOnSwapItem); \
	DECLARE_FUNCTION(execQuaternaryUse); \
	DECLARE_FUNCTION(execTertiaryUse); \
	DECLARE_FUNCTION(execSecondaryUse); \
	DECLARE_FUNCTION(execPrimaryUse);


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_ACCESSORS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_CALLBACK_WRAPPERS
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFunctionalityBase(); \
	friend struct Z_Construct_UClass_UItemFunctionalityBase_Statics; \
public: \
	DECLARE_CLASS(UItemFunctionalityBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BigMaze_Alpha_0"), NO_API) \
	DECLARE_SERIALIZER(UItemFunctionalityBase)


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemFunctionalityBase(UItemFunctionalityBase&&); \
	NO_API UItemFunctionalityBase(const UItemFunctionalityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFunctionalityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFunctionalityBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFunctionalityBase) \
	NO_API virtual ~UItemFunctionalityBase();


#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_116_PROLOG
#define FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_SPARSE_DATA \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_ACCESSORS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_CALLBACK_WRAPPERS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_INCLASS_NO_PURE_DECLS \
	FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<class UItemFunctionalityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h


#define FOREACH_ENUM_EITEMACTIVATIONTYPE(op) \
	op(EItemActivationType::Press) \
	op(EItemActivationType::Hold) \
	op(EItemActivationType::Release) 

enum class EItemActivationType : uint8;
template<> struct TIsUEnumClass<EItemActivationType> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemActivationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
