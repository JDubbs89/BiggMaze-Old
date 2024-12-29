// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/ItemSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSystem() {}

// Begin Cross Module References
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_AItemFunctionalityBase();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_AItemFunctionalityBase_NoRegister();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UItemDefault();
BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UItemDefault_NoRegister();
BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType();
BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to represent different item activation types.\n */" },
#endif
		{ "Hold.DisplayName", "Hold" },
		{ "Hold.Name", "EItemActivationType::Hold" },
		{ "ModuleRelativePath", "ItemSystem.h" },
		{ "Press.DisplayName", "Press" },
		{ "Press.Name", "EItemActivationType::Press" },
		{ "Release.DisplayName", "Release" },
		{ "Release.Name", "EItemActivationType::Release" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to represent different item activation types." },
#endif
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

// Begin ScriptStruct FItemAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAttribute;
class UScriptStruct* FItemAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAttribute, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("ItemAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAttribute.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<FItemAttribute>()
{
	return FItemAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FItemAttribute - A structure to hold attributes for an item.\n */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FItemAttribute - A structure to hold attributes for an item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique Identifier for the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique Identifier for the Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Value of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Value of the Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Value of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Value of the Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines whether the Attribute is Visible\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the Attribute is Visible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxValue;
	static void NewProp_Visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
void Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((FItemAttribute*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemAttribute), &Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visible_MetaData), NewProp_Visible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	&NewStructOps,
	"ItemAttribute",
	Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers),
	sizeof(FItemAttribute),
	alignof(FItemAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton, Z_Construct_UScriptStruct_FItemAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton;
}
// End ScriptStruct FItemAttribute

// Begin ScriptStruct FItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Item;
class UScriptStruct* FItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, (UObject*)Z_Construct_UPackage__Script_BigMaze_Alpha_0(), TEXT("Item"));
	}
	return Z_Registration_Info_UScriptStruct_Item.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FItem - A structure to represent an item with various properties and attributes.\n */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FItem - A structure to represent an item with various properties and attributes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique Identifier for the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique Identifier for the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value of the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Stack Size of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Stack Size of the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Stack Size Allowed\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Stack Size Allowed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackWeight_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Attributes for the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Attributes for the Item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Associated Functionality Class (AItemFunctionalityBase)\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated Functionality Class (AItemFunctionalityBase)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Stack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stack_MetaData), NewProp_Stack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStack_MetaData), NewProp_MaxStack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_StackWeight = { "StackWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, StackWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackWeight_MetaData), NewProp_StackWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttribute, METADATA_PARAMS(0, nullptr) }; // 3073608223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 3073608223
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Parts_Inner = { "Parts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDefault_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Parts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parts_MetaData), NewProp_Parts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemFunctionalityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_StackWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Parts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Parts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	nullptr,
	&NewStructOps,
	"Item",
	Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
	sizeof(FItem),
	alignof(FItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItem()
{
	if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
}
// End ScriptStruct FItem

// Begin Class AItemFunctionalityBase Function OnSwapItem
struct ItemFunctionalityBase_eventOnSwapItem_Parms
{
	FItem Item;
	bool SwapTo;
};
static const FName NAME_AItemFunctionalityBase_OnSwapItem = FName(TEXT("OnSwapItem"));
void AItemFunctionalityBase::OnSwapItem(FItem const& Item, bool SwapTo)
{
	UFunction* Func = FindFunctionChecked(NAME_AItemFunctionalityBase_OnSwapItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFunctionalityBase_eventOnSwapItem_Parms Parms;
		Parms.Item=Item;
		Parms.SwapTo=SwapTo ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSwapItem_Implementation(Item, SwapTo);
	}
}
struct Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called when the item is switched to or from */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the item is switched to or from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_SwapTo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwapTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventOnSwapItem_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2564804863
void Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo_SetBit(void* Obj)
{
	((ItemFunctionalityBase_eventOnSwapItem_Parms*)Obj)->SwapTo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo = { "SwapTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms), &Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemFunctionalityBase, nullptr, "OnSwapItem", nullptr, nullptr, Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemFunctionalityBase::execOnSwapItem)
{
	P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
	P_GET_UBOOL(Z_Param_SwapTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwapItem_Implementation(Z_Param_Out_Item,Z_Param_SwapTo);
	P_NATIVE_END;
}
// End Class AItemFunctionalityBase Function OnSwapItem

// Begin Class AItemFunctionalityBase Function PrimaryUse
struct ItemFunctionalityBase_eventPrimaryUse_Parms
{
	FItem Item;
	EItemActivationType ActivationType;
};
static const FName NAME_AItemFunctionalityBase_PrimaryUse = FName(TEXT("PrimaryUse"));
void AItemFunctionalityBase::PrimaryUse(FItem const& Item, EItemActivationType ActivationType)
{
	UFunction* Func = FindFunctionChecked(NAME_AItemFunctionalityBase_PrimaryUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFunctionalityBase_eventPrimaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PrimaryUse_Implementation(Item, ActivationType);
	}
}
struct Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the primary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the primary use of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventPrimaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2564804863
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventPrimaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 651093556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemFunctionalityBase, nullptr, "PrimaryUse", nullptr, nullptr, Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventPrimaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFunctionalityBase_eventPrimaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemFunctionalityBase::execPrimaryUse)
{
	P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
	P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrimaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
	P_NATIVE_END;
}
// End Class AItemFunctionalityBase Function PrimaryUse

// Begin Class AItemFunctionalityBase Function QuaternaryUse
struct ItemFunctionalityBase_eventQuaternaryUse_Parms
{
	FItem Item;
	EItemActivationType ActivationType;
};
static const FName NAME_AItemFunctionalityBase_QuaternaryUse = FName(TEXT("QuaternaryUse"));
void AItemFunctionalityBase::QuaternaryUse(FItem const& Item, EItemActivationType ActivationType)
{
	UFunction* Func = FindFunctionChecked(NAME_AItemFunctionalityBase_QuaternaryUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFunctionalityBase_eventQuaternaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		QuaternaryUse_Implementation(Item, ActivationType);
	}
}
struct Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the quaternary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the quaternary use of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventQuaternaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2564804863
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventQuaternaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 651093556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemFunctionalityBase, nullptr, "QuaternaryUse", nullptr, nullptr, Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventQuaternaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFunctionalityBase_eventQuaternaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemFunctionalityBase::execQuaternaryUse)
{
	P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
	P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuaternaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
	P_NATIVE_END;
}
// End Class AItemFunctionalityBase Function QuaternaryUse

// Begin Class AItemFunctionalityBase Function SecondaryUse
struct ItemFunctionalityBase_eventSecondaryUse_Parms
{
	FItem Item;
	EItemActivationType ActivationType;
};
static const FName NAME_AItemFunctionalityBase_SecondaryUse = FName(TEXT("SecondaryUse"));
void AItemFunctionalityBase::SecondaryUse(FItem const& Item, EItemActivationType ActivationType)
{
	UFunction* Func = FindFunctionChecked(NAME_AItemFunctionalityBase_SecondaryUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFunctionalityBase_eventSecondaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SecondaryUse_Implementation(Item, ActivationType);
	}
}
struct Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the secondary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the secondary use of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventSecondaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2564804863
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventSecondaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 651093556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemFunctionalityBase, nullptr, "SecondaryUse", nullptr, nullptr, Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventSecondaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFunctionalityBase_eventSecondaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemFunctionalityBase::execSecondaryUse)
{
	P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
	P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SecondaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
	P_NATIVE_END;
}
// End Class AItemFunctionalityBase Function SecondaryUse

// Begin Class AItemFunctionalityBase Function TertiaryUse
struct ItemFunctionalityBase_eventTertiaryUse_Parms
{
	FItem Item;
	EItemActivationType ActivationType;
};
static const FName NAME_AItemFunctionalityBase_TertiaryUse = FName(TEXT("TertiaryUse"));
void AItemFunctionalityBase::TertiaryUse(FItem const& Item, EItemActivationType ActivationType)
{
	UFunction* Func = FindFunctionChecked(NAME_AItemFunctionalityBase_TertiaryUse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFunctionalityBase_eventTertiaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		TertiaryUse_Implementation(Item, ActivationType);
	}
}
struct Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the tertiary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the tertiary use of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventTertiaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2564804863
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventTertiaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 651093556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemFunctionalityBase, nullptr, "TertiaryUse", nullptr, nullptr, Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventTertiaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFunctionalityBase_eventTertiaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemFunctionalityBase::execTertiaryUse)
{
	P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
	P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TertiaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
	P_NATIVE_END;
}
// End Class AItemFunctionalityBase Function TertiaryUse

// Begin Class AItemFunctionalityBase
void AItemFunctionalityBase::StaticRegisterNativesAItemFunctionalityBase()
{
	UClass* Class = AItemFunctionalityBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSwapItem", &AItemFunctionalityBase::execOnSwapItem },
		{ "PrimaryUse", &AItemFunctionalityBase::execPrimaryUse },
		{ "QuaternaryUse", &AItemFunctionalityBase::execQuaternaryUse },
		{ "SecondaryUse", &AItemFunctionalityBase::execSecondaryUse },
		{ "TertiaryUse", &AItemFunctionalityBase::execTertiaryUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemFunctionalityBase);
UClass* Z_Construct_UClass_AItemFunctionalityBase_NoRegister()
{
	return AItemFunctionalityBase::StaticClass();
}
struct Z_Construct_UClass_AItemFunctionalityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for item functionality within a UDataAsset.\n */" },
#endif
		{ "IncludePath", "ItemSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for item functionality within a UDataAsset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefault_MetaData[] = {
		{ "Category", "Item Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Variable to give an item default values to pull from. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to give an item default values to pull from." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemFunctionalityBase_OnSwapItem, "OnSwapItem" }, // 535808984
		{ &Z_Construct_UFunction_AItemFunctionalityBase_PrimaryUse, "PrimaryUse" }, // 2641712214
		{ &Z_Construct_UFunction_AItemFunctionalityBase_QuaternaryUse, "QuaternaryUse" }, // 3764620713
		{ &Z_Construct_UFunction_AItemFunctionalityBase_SecondaryUse, "SecondaryUse" }, // 356440506
		{ &Z_Construct_UFunction_AItemFunctionalityBase_TertiaryUse, "TertiaryUse" }, // 717287422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemFunctionalityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemFunctionalityBase_Statics::NewProp_ItemDefault = { "ItemDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemFunctionalityBase, ItemDefault), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefault_MetaData), NewProp_ItemDefault_MetaData) }; // 2564804863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemFunctionalityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemFunctionalityBase_Statics::NewProp_ItemDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemFunctionalityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemFunctionalityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemFunctionalityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemFunctionalityBase_Statics::ClassParams = {
	&AItemFunctionalityBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemFunctionalityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemFunctionalityBase_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemFunctionalityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemFunctionalityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemFunctionalityBase()
{
	if (!Z_Registration_Info_UClass_AItemFunctionalityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemFunctionalityBase.OuterSingleton, Z_Construct_UClass_AItemFunctionalityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemFunctionalityBase.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<AItemFunctionalityBase>()
{
	return AItemFunctionalityBase::StaticClass();
}
AItemFunctionalityBase::AItemFunctionalityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemFunctionalityBase);
AItemFunctionalityBase::~AItemFunctionalityBase() {}
// End Class AItemFunctionalityBase

// Begin Class UItemDefault
void UItemDefault::StaticRegisterNativesUItemDefault()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDefault);
UClass* Z_Construct_UClass_UItemDefault_NoRegister()
{
	return UItemDefault::StaticClass();
}
struct Z_Construct_UClass_UItemDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefault_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Default Item Variable */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Item Variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDefault>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDefault_Statics::NewProp_ItemDefault = { "ItemDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefault, ItemDefault), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefault_MetaData), NewProp_ItemDefault_MetaData) }; // 2564804863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefault_Statics::NewProp_ItemDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefault_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDefault_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefault_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDefault_Statics::ClassParams = {
	&UItemDefault::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDefault_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefault_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDefault_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDefault()
{
	if (!Z_Registration_Info_UClass_UItemDefault.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDefault.OuterSingleton, Z_Construct_UClass_UItemDefault_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDefault.OuterSingleton;
}
template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UItemDefault>()
{
	return UItemDefault::StaticClass();
}
UItemDefault::UItemDefault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDefault);
UItemDefault::~UItemDefault() {}
// End Class UItemDefault

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemActivationType_StaticEnum, TEXT("EItemActivationType"), &Z_Registration_Info_UEnum_EItemActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 651093556U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemAttribute::StaticStruct, Z_Construct_UScriptStruct_FItemAttribute_Statics::NewStructOps, TEXT("ItemAttribute"), &Z_Registration_Info_UScriptStruct_ItemAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAttribute), 3073608223U) },
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 2564804863U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemFunctionalityBase, AItemFunctionalityBase::StaticClass, TEXT("AItemFunctionalityBase"), &Z_Registration_Info_UClass_AItemFunctionalityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemFunctionalityBase), 940419570U) },
		{ Z_Construct_UClass_UItemDefault, UItemDefault::StaticClass, TEXT("UItemDefault"), &Z_Registration_Info_UClass_UItemDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDefault), 2262136077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_1505972823(TEXT("/Script/BigMaze_Alpha_0"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
