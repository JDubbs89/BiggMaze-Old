// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/Public/ItemSystem/ItemEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemEnums() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType();
BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType();
BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass();
BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

// Begin Enum EAttributeReturnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeReturnType;
static UEnum* EAttributeReturnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttributeReturnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttributeReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("EAttributeReturnType"));
	}
	return Z_Registration_Info_UEnum_EAttributeReturnType.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EAttributeReturnType>()
{
	return EAttributeReturnType_StaticEnum();
}
struct Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.DisplayName", "Bool" },
		{ "Bool.Name", "EAttributeReturnType::Bool" },
		{ "Byte.DisplayName", "Byte" },
		{ "Byte.Name", "EAttributeReturnType::Byte" },
		{ "Enum.DisplayName", "Enum" },
		{ "Enum.Name", "EAttributeReturnType::Enum" },
		{ "Float.DisplayName", "Float" },
		{ "Float.Name", "EAttributeReturnType::Float" },
		{ "Int.DisplayName", "Int" },
		{ "Int.Name", "EAttributeReturnType::Int" },
		{ "ModuleRelativePath", "Public/ItemSystem/ItemEnums.h" },
		{ "Str.DisplayName", "String" },
		{ "Str.Name", "EAttributeReturnType::Str" },
		{ "Vec.DisplayName", "Vec" },
		{ "Vec.Name", "EAttributeReturnType::Vec" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttributeReturnType::Int", (int64)EAttributeReturnType::Int },
		{ "EAttributeReturnType::Float", (int64)EAttributeReturnType::Float },
		{ "EAttributeReturnType::Bool", (int64)EAttributeReturnType::Bool },
		{ "EAttributeReturnType::Str", (int64)EAttributeReturnType::Str },
		{ "EAttributeReturnType::Enum", (int64)EAttributeReturnType::Enum },
		{ "EAttributeReturnType::Byte", (int64)EAttributeReturnType::Byte },
		{ "EAttributeReturnType::Vec", (int64)EAttributeReturnType::Vec },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	"EAttributeReturnType",
	"EAttributeReturnType",
	Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType()
{
	if (!Z_Registration_Info_UEnum_EAttributeReturnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeReturnType.InnerSingleton, Z_Construct_UEnum_BigMaze_Alpha_0_EAttributeReturnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttributeReturnType.InnerSingleton;
}
// End Enum EAttributeReturnType

// Begin Enum EItemActivationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemActivationType;
static UEnum* EItemActivationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemActivationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemActivationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("EItemActivationType"));
	}
	return Z_Registration_Info_UEnum_EItemActivationType.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemActivationType>()
{
	return EItemActivationType_StaticEnum();
}
struct Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hold.DisplayName", "Hold" },
		{ "Hold.Name", "EItemActivationType::Hold" },
		{ "ModuleRelativePath", "Public/ItemSystem/ItemEnums.h" },
		{ "Press.DisplayName", "Press" },
		{ "Press.Name", "EItemActivationType::Press" },
		{ "Release.DisplayName", "Release" },
		{ "Release.Name", "EItemActivationType::Release" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemActivationType::Press", (int64)EItemActivationType::Press },
		{ "EItemActivationType::Hold", (int64)EItemActivationType::Hold },
		{ "EItemActivationType::Release", (int64)EItemActivationType::Release },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	"EItemActivationType",
	"EItemActivationType",
	Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType()
{
	if (!Z_Registration_Info_UEnum_EItemActivationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemActivationType.InnerSingleton, Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemActivationType.InnerSingleton;
}
// End Enum EItemActivationType

// Begin Enum EItemClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemClass;
static UEnum* EItemClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("EItemClass"));
	}
	return Z_Registration_Info_UEnum_EItemClass.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemClass>()
{
	return EItemClass_StaticEnum();
}
struct Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "EItemClass::Armor" },
		{ "Attachment.DisplayName", "Attachment" },
		{ "Attachment.Name", "EItemClass::Attachment" },
		{ "BlueprintType", "true" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemClass::Consumable" },
		{ "Equipment.DisplayName", "Equipment" },
		{ "Equipment.Name", "EItemClass::Equipment" },
		{ "ModuleRelativePath", "Public/ItemSystem/ItemEnums.h" },
		{ "Placeable.DisplayName", "Placeable" },
		{ "Placeable.Name", "EItemClass::Placeable" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EItemClass::Quest" },
		{ "Throwable.DisplayName", "Throwable" },
		{ "Throwable.Name", "EItemClass::Throwable" },
		{ "Upgrade.DisplayName", "Upgrade" },
		{ "Upgrade.Name", "EItemClass::Upgrade" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItemClass::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemClass::Weapon", (int64)EItemClass::Weapon },
		{ "EItemClass::Consumable", (int64)EItemClass::Consumable },
		{ "EItemClass::Throwable", (int64)EItemClass::Throwable },
		{ "EItemClass::Placeable", (int64)EItemClass::Placeable },
		{ "EItemClass::Quest", (int64)EItemClass::Quest },
		{ "EItemClass::Attachment", (int64)EItemClass::Attachment },
		{ "EItemClass::Upgrade", (int64)EItemClass::Upgrade },
		{ "EItemClass::Armor", (int64)EItemClass::Armor },
		{ "EItemClass::Equipment", (int64)EItemClass::Equipment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	"EItemClass",
	"EItemClass",
	Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass()
{
	if (!Z_Registration_Info_UEnum_EItemClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemClass.InnerSingleton, Z_Construct_UEnum_BigMaze_Alpha_0_EItemClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemClass.InnerSingleton;
}
// End Enum EItemClass

// Begin Enum EItemSlotCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemSlotCategory;
static UEnum* EItemSlotCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemSlotCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemSlotCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("EItemSlotCategory"));
	}
	return Z_Registration_Info_UEnum_EItemSlotCategory.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UEnum* StaticEnum<EItemSlotCategory>()
{
	return EItemSlotCategory_StaticEnum();
}
struct Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ArmArmor.Comment", "// Armor Types\n" },
		{ "ArmArmor.DisplayName", "Arm Armor" },
		{ "ArmArmor.Name", "EItemSlotCategory::ArmArmor" },
		{ "ArmArmor.ToolTip", "Armor Types" },
		{ "ArmEquipment.DisplayName", "Arm Equipment" },
		{ "ArmEquipment.Name", "EItemSlotCategory::ArmEquipment" },
		{ "Attachment.Comment", "// Quest Items\n" },
		{ "Attachment.DisplayName", "Attachment" },
		{ "Attachment.Name", "EItemSlotCategory::Attachment" },
		{ "Attachment.ToolTip", "Quest Items" },
		{ "BackEquipment.DisplayName", "Back Equipment" },
		{ "BackEquipment.Name", "EItemSlotCategory::BackEquipment" },
		{ "BlueprintType", "true" },
		{ "ChestArmor.DisplayName", "Chest Armor" },
		{ "ChestArmor.Name", "EItemSlotCategory::ChestArmor" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemSlotCategory::Consumable" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EItemSlotCategory::Default" },
		{ "HeadArmor.DisplayName", "Head Armor" },
		{ "HeadArmor.Name", "EItemSlotCategory::HeadArmor" },
		{ "HeadEquipment.Comment", "// Equipment types\n" },
		{ "HeadEquipment.DisplayName", "Head Equipment" },
		{ "HeadEquipment.Name", "EItemSlotCategory::HeadEquipment" },
		{ "HeadEquipment.ToolTip", "Equipment types" },
		{ "LegArmor.DisplayName", "Leg Armor" },
		{ "LegArmor.Name", "EItemSlotCategory::LegArmor" },
		{ "LegEquipment.DisplayName", "Leg Equipment" },
		{ "LegEquipment.Name", "EItemSlotCategory::LegEquipment" },
		{ "MeleeWeapon.Comment", "// Weapon Types\n" },
		{ "MeleeWeapon.DisplayName", "Melee Weapon" },
		{ "MeleeWeapon.Name", "EItemSlotCategory::MeleeWeapon" },
		{ "MeleeWeapon.ToolTip", "Weapon Types" },
		{ "MiscEquipment.DisplayName", "Misc Equipment" },
		{ "MiscEquipment.Name", "EItemSlotCategory::MiscEquipment" },
		{ "ModuleRelativePath", "Public/ItemSystem/ItemEnums.h" },
		{ "NoSlotRequired.DisplayName", "No Slot Required" },
		{ "NoSlotRequired.Name", "EItemSlotCategory::NoSlotRequired" },
		{ "Placeable.DisplayName", "Placeable" },
		{ "Placeable.Name", "EItemSlotCategory::Placeable" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EItemSlotCategory::Quest" },
		{ "RangedWeapon.DisplayName", "Ranged Weapon" },
		{ "RangedWeapon.Name", "EItemSlotCategory::RangedWeapon" },
		{ "Throwable.Comment", "// Useable Items Besides Weapons\n" },
		{ "Throwable.DisplayName", "Throwable" },
		{ "Throwable.Name", "EItemSlotCategory::Throwable" },
		{ "Throwable.ToolTip", "Useable Items Besides Weapons" },
		{ "Upgrade.Comment", "// Attachments/Upgrades\n" },
		{ "Upgrade.DisplayName", "Upgrade" },
		{ "Upgrade.Name", "EItemSlotCategory::Upgrade" },
		{ "Upgrade.ToolTip", "Attachments/Upgrades" },
		{ "Weapon.Comment", "// Any Slot Type\n" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItemSlotCategory::Weapon" },
		{ "Weapon.ToolTip", "Any Slot Type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemSlotCategory::Default", (int64)EItemSlotCategory::Default },
		{ "EItemSlotCategory::Weapon", (int64)EItemSlotCategory::Weapon },
		{ "EItemSlotCategory::MeleeWeapon", (int64)EItemSlotCategory::MeleeWeapon },
		{ "EItemSlotCategory::RangedWeapon", (int64)EItemSlotCategory::RangedWeapon },
		{ "EItemSlotCategory::Consumable", (int64)EItemSlotCategory::Consumable },
		{ "EItemSlotCategory::Throwable", (int64)EItemSlotCategory::Throwable },
		{ "EItemSlotCategory::Placeable", (int64)EItemSlotCategory::Placeable },
		{ "EItemSlotCategory::Quest", (int64)EItemSlotCategory::Quest },
		{ "EItemSlotCategory::Attachment", (int64)EItemSlotCategory::Attachment },
		{ "EItemSlotCategory::Upgrade", (int64)EItemSlotCategory::Upgrade },
		{ "EItemSlotCategory::HeadArmor", (int64)EItemSlotCategory::HeadArmor },
		{ "EItemSlotCategory::ArmArmor", (int64)EItemSlotCategory::ArmArmor },
		{ "EItemSlotCategory::ChestArmor", (int64)EItemSlotCategory::ChestArmor },
		{ "EItemSlotCategory::LegArmor", (int64)EItemSlotCategory::LegArmor },
		{ "EItemSlotCategory::BackEquipment", (int64)EItemSlotCategory::BackEquipment },
		{ "EItemSlotCategory::HeadEquipment", (int64)EItemSlotCategory::HeadEquipment },
		{ "EItemSlotCategory::ArmEquipment", (int64)EItemSlotCategory::ArmEquipment },
		{ "EItemSlotCategory::LegEquipment", (int64)EItemSlotCategory::LegEquipment },
		{ "EItemSlotCategory::MiscEquipment", (int64)EItemSlotCategory::MiscEquipment },
		{ "EItemSlotCategory::NoSlotRequired", (int64)EItemSlotCategory::NoSlotRequired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	"EItemSlotCategory",
	"EItemSlotCategory",
	Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory()
{
	if (!Z_Registration_Info_UEnum_EItemSlotCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemSlotCategory.InnerSingleton, Z_Construct_UEnum_BigMaze_Alpha_0_EItemSlotCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemSlotCategory.InnerSingleton;
}
// End Enum EItemSlotCategory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_ItemSystem_ItemEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttributeReturnType_StaticEnum, TEXT("EAttributeReturnType"), &Z_Registration_Info_UEnum_EAttributeReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2806043504U) },
		{ EItemActivationType_StaticEnum, TEXT("EItemActivationType"), &Z_Registration_Info_UEnum_EItemActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 202093569U) },
		{ EItemClass_StaticEnum, TEXT("EItemClass"), &Z_Registration_Info_UEnum_EItemClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 503928969U) },
		{ EItemSlotCategory_StaticEnum, TEXT("EItemSlotCategory"), &Z_Registration_Info_UEnum_EItemSlotCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1515261824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_ItemSystem_ItemEnums_h_3696482396(TEXT("/Script/BigMaze_Alpha_0"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_ItemSystem_ItemEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_Public_ItemSystem_ItemEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
