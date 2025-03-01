// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemSystem/ItemEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIGMAZE_ALPHA_0_ItemEnums_generated_h
#error "ItemEnums.generated.h already included, missing '#pragma once' in ItemEnums.h"
#endif
#define BIGMAZE_ALPHA_0_ItemEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_ItemSystem_ItemEnums_h


#define FOREACH_ENUM_EATTRIBUTERETURNTYPE(op) \
	op(EAttributeReturnType::Integer) \
	op(EAttributeReturnType::Float) \
	op(EAttributeReturnType::String) \
	op(EAttributeReturnType::Enum) \
	op(EAttributeReturnType::Byte) \
	op(EAttributeReturnType::Vector) 

enum class EAttributeReturnType : uint8;
template<> struct TIsUEnumClass<EAttributeReturnType> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EAttributeReturnType>();

#define FOREACH_ENUM_EITEMACTIVATIONTYPE(op) \
	op(EItemActivationType::Press) \
	op(EItemActivationType::Hold) \
	op(EItemActivationType::Release) 

enum class EItemActivationType : uint8;
template<> struct TIsUEnumClass<EItemActivationType> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemActivationType>();

#define FOREACH_ENUM_EITEMCLASS(op) \
	op(EItemClass::Weapon) \
	op(EItemClass::Consumable) \
	op(EItemClass::Throwable) \
	op(EItemClass::Placeable) \
	op(EItemClass::Quest) \
	op(EItemClass::Attachment) \
	op(EItemClass::Upgrade) \
	op(EItemClass::Armor) \
	op(EItemClass::Equipment) 

enum class EItemClass : uint8;
template<> struct TIsUEnumClass<EItemClass> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemClass>();

#define FOREACH_ENUM_EITEMSLOTCATEGORY(op) \
	op(EItemSlotCategory::Default) \
	op(EItemSlotCategory::Weapon) \
	op(EItemSlotCategory::MeleeWeapon) \
	op(EItemSlotCategory::RangedWeapon) \
	op(EItemSlotCategory::Consumable) \
	op(EItemSlotCategory::Throwable) \
	op(EItemSlotCategory::Placeable) \
	op(EItemSlotCategory::Quest) \
	op(EItemSlotCategory::Attachment) \
	op(EItemSlotCategory::Upgrade) \
	op(EItemSlotCategory::HeadArmor) \
	op(EItemSlotCategory::ArmArmor) \
	op(EItemSlotCategory::ChestArmor) \
	op(EItemSlotCategory::LegArmor) \
	op(EItemSlotCategory::BackEquipment) \
	op(EItemSlotCategory::HeadEquipment) \
	op(EItemSlotCategory::ArmEquipment) \
	op(EItemSlotCategory::LegEquipment) \
	op(EItemSlotCategory::MiscEquipment) \
	op(EItemSlotCategory::NoSlotRequired) 

enum class EItemSlotCategory : uint8;
template<> struct TIsUEnumClass<EItemSlotCategory> { enum { Value = true }; };
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemSlotCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
