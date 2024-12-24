// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigMaze_Alpha_0/ItemSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSystem() {}
// Cross Module References
	BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UItemFunctionalityBase();
	BIGMAZE_ALPHA_0_API UClass* Z_Construct_UClass_UItemFunctionalityBase_NoRegister();
	BIGMAZE_ALPHA_0_API UEnum* Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType();
	BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	BIGMAZE_ALPHA_0_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BigMaze_Alpha_0();
// End Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enumerators[] = {
		{ "EItemActivationType::Press", (int64)EItemActivationType::Press },
		{ "EItemActivationType::Hold", (int64)EItemActivationType::Hold },
		{ "EItemActivationType::Release", (int64)EItemActivationType::Release },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType_Statics::Enum_MetaDataParams[] = {
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
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FItemAttribute - A structure to hold attributes for an item.\n */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FItemAttribute - A structure to hold attributes for an item." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique Identifier for the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique Identifier for the Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Value of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Value of the Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Value of the Attribute\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Value of the Attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_MetaData[] = {
		{ "Category", "Item Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines whether the Attribute is Visible\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the Attribute is Visible" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((FItemAttribute*)Obj)->Visible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemAttribute), &Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_MetaData), Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Visible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAttribute_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton, Z_Construct_UScriptStruct_FItemAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAttribute.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Stack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FItem - A structure to represent an item with various properties and attributes.\n */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FItem - A structure to represent an item with various properties and attributes." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique Identifier for the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique Identifier for the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value of the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Stack Size of the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Stack Size of the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Stack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Stack Size Allowed\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Stack Size Allowed" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttribute, METADATA_PARAMS(0, nullptr) }; // 3542693385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Attributes for the Item\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Attributes for the Item" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_MetaData) }; // 3542693385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Associated Functionality Class (UItemFunctionalityBase)\n" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated Functionality Class (UItemFunctionalityBase)" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Class), Z_Construct_UClass_UItemFunctionalityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
		if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
	}
	DEFINE_FUNCTION(UItemFunctionalityBase::execOnSwapItem)
	{
		P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
		P_GET_UBOOL(Z_Param_SwapTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwapItem_Implementation(Z_Param_Out_Item,Z_Param_SwapTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFunctionalityBase::execQuaternaryUse)
	{
		P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
		P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuaternaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFunctionalityBase::execTertiaryUse)
	{
		P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
		P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TertiaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFunctionalityBase::execSecondaryUse)
	{
		P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
		P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemFunctionalityBase::execPrimaryUse)
	{
		P_GET_STRUCT_REF(FItem,Z_Param_Out_Item);
		P_GET_ENUM(EItemActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrimaryUse_Implementation(Z_Param_Out_Item,EItemActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	struct ItemFunctionalityBase_eventOnSwapItem_Parms
	{
		FItem Item;
		bool SwapTo;
	};
	struct ItemFunctionalityBase_eventPrimaryUse_Parms
	{
		FItem Item;
		EItemActivationType ActivationType;
	};
	struct ItemFunctionalityBase_eventQuaternaryUse_Parms
	{
		FItem Item;
		EItemActivationType ActivationType;
	};
	struct ItemFunctionalityBase_eventSecondaryUse_Parms
	{
		FItem Item;
		EItemActivationType ActivationType;
	};
	struct ItemFunctionalityBase_eventTertiaryUse_Parms
	{
		FItem Item;
		EItemActivationType ActivationType;
	};
	static FName NAME_UItemFunctionalityBase_OnSwapItem = FName(TEXT("OnSwapItem"));
	void UItemFunctionalityBase::OnSwapItem(FItem const& Item, bool SwapTo)
	{
		ItemFunctionalityBase_eventOnSwapItem_Parms Parms;
		Parms.Item=Item;
		Parms.SwapTo=SwapTo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UItemFunctionalityBase_OnSwapItem),&Parms);
	}
	static FName NAME_UItemFunctionalityBase_PrimaryUse = FName(TEXT("PrimaryUse"));
	void UItemFunctionalityBase::PrimaryUse(FItem const& Item, EItemActivationType ActivationType)
	{
		ItemFunctionalityBase_eventPrimaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
		ProcessEvent(FindFunctionChecked(NAME_UItemFunctionalityBase_PrimaryUse),&Parms);
	}
	static FName NAME_UItemFunctionalityBase_QuaternaryUse = FName(TEXT("QuaternaryUse"));
	void UItemFunctionalityBase::QuaternaryUse(FItem const& Item, EItemActivationType ActivationType)
	{
		ItemFunctionalityBase_eventQuaternaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
		ProcessEvent(FindFunctionChecked(NAME_UItemFunctionalityBase_QuaternaryUse),&Parms);
	}
	static FName NAME_UItemFunctionalityBase_SecondaryUse = FName(TEXT("SecondaryUse"));
	void UItemFunctionalityBase::SecondaryUse(FItem const& Item, EItemActivationType ActivationType)
	{
		ItemFunctionalityBase_eventSecondaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
		ProcessEvent(FindFunctionChecked(NAME_UItemFunctionalityBase_SecondaryUse),&Parms);
	}
	static FName NAME_UItemFunctionalityBase_TertiaryUse = FName(TEXT("TertiaryUse"));
	void UItemFunctionalityBase::TertiaryUse(FItem const& Item, EItemActivationType ActivationType)
	{
		ItemFunctionalityBase_eventTertiaryUse_Parms Parms;
		Parms.Item=Item;
		Parms.ActivationType=ActivationType;
		ProcessEvent(FindFunctionChecked(NAME_UItemFunctionalityBase_TertiaryUse),&Parms);
	}
	void UItemFunctionalityBase::StaticRegisterNativesUItemFunctionalityBase()
	{
		UClass* Class = UItemFunctionalityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSwapItem", &UItemFunctionalityBase::execOnSwapItem },
			{ "PrimaryUse", &UItemFunctionalityBase::execPrimaryUse },
			{ "QuaternaryUse", &UItemFunctionalityBase::execQuaternaryUse },
			{ "SecondaryUse", &UItemFunctionalityBase::execSecondaryUse },
			{ "TertiaryUse", &UItemFunctionalityBase::execTertiaryUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_SwapTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SwapTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventOnSwapItem_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item_MetaData) }; // 2507555637
	void Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo_SetBit(void* Obj)
	{
		((ItemFunctionalityBase_eventOnSwapItem_Parms*)Obj)->SwapTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo = { "SwapTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms), &Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::NewProp_SwapTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called when the item is switched to or from */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the item is switched to or from" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionalityBase, nullptr, "OnSwapItem", nullptr, nullptr, Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemFunctionalityBase_eventOnSwapItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventPrimaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item_MetaData) }; // 2507555637
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventPrimaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 594687239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the primary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the primary use of the item." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionalityBase, nullptr, "PrimaryUse", nullptr, nullptr, Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventPrimaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemFunctionalityBase_eventPrimaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventQuaternaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item_MetaData) }; // 2507555637
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventQuaternaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 594687239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the quaternary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the quaternary use of the item." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionalityBase, nullptr, "QuaternaryUse", nullptr, nullptr, Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventQuaternaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemFunctionalityBase_eventQuaternaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventSecondaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item_MetaData) }; // 2507555637
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventSecondaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 594687239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the secondary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the secondary use of the item." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionalityBase, nullptr, "SecondaryUse", nullptr, nullptr, Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventSecondaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemFunctionalityBase_eventSecondaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventTertiaryUse_Parms, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item_MetaData) }; // 2507555637
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFunctionalityBase_eventTertiaryUse_Parms, ActivationType), Z_Construct_UEnum_BigMaze_Alpha_0_EItemActivationType, METADATA_PARAMS(0, nullptr) }; // 594687239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function called for the tertiary use of the item. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called for the tertiary use of the item." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionalityBase, nullptr, "TertiaryUse", nullptr, nullptr, Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::PropPointers), sizeof(ItemFunctionalityBase_eventTertiaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemFunctionalityBase_eventTertiaryUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFunctionalityBase);
	UClass* Z_Construct_UClass_UItemFunctionalityBase_NoRegister()
	{
		return UItemFunctionalityBase::StaticClass();
	}
	struct Z_Construct_UClass_UItemFunctionalityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemFunctionalityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BigMaze_Alpha_0,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemFunctionalityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFunctionalityBase_OnSwapItem, "OnSwapItem" }, // 1654927961
		{ &Z_Construct_UFunction_UItemFunctionalityBase_PrimaryUse, "PrimaryUse" }, // 3047329670
		{ &Z_Construct_UFunction_UItemFunctionalityBase_QuaternaryUse, "QuaternaryUse" }, // 4282537251
		{ &Z_Construct_UFunction_UItemFunctionalityBase_SecondaryUse, "SecondaryUse" }, // 1110577949
		{ &Z_Construct_UFunction_UItemFunctionalityBase_TertiaryUse, "TertiaryUse" }, // 2076629669
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFunctionalityBase_Statics::Class_MetaDataParams[] = {
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
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Item Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Variable to set the icon texture of an item to be displayed in widgets. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to set the icon texture of an item to be displayed in widgets." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFunctionalityBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Item Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Variable to set the skeletal mesh of an item for in world display. */" },
#endif
		{ "ModuleRelativePath", "ItemSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to set the skeletal mesh of an item for in world display." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFunctionalityBase, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFunctionalityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFunctionalityBase_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemFunctionalityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFunctionalityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFunctionalityBase_Statics::ClassParams = {
		&UItemFunctionalityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemFunctionalityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFunctionalityBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionalityBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemFunctionalityBase()
	{
		if (!Z_Registration_Info_UClass_UItemFunctionalityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFunctionalityBase.OuterSingleton, Z_Construct_UClass_UItemFunctionalityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemFunctionalityBase.OuterSingleton;
	}
	template<> BIGMAZE_ALPHA_0_API UClass* StaticClass<UItemFunctionalityBase>()
	{
		return UItemFunctionalityBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFunctionalityBase);
	UItemFunctionalityBase::~UItemFunctionalityBase() {}
	struct Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::EnumInfo[] = {
		{ EItemActivationType_StaticEnum, TEXT("EItemActivationType"), &Z_Registration_Info_UEnum_EItemActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 594687239U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ScriptStructInfo[] = {
		{ FItemAttribute::StaticStruct, Z_Construct_UScriptStruct_FItemAttribute_Statics::NewStructOps, TEXT("ItemAttribute"), &Z_Registration_Info_UScriptStruct_ItemAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAttribute), 3542693385U) },
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 2507555637U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemFunctionalityBase, UItemFunctionalityBase::StaticClass, TEXT("UItemFunctionalityBase"), &Z_Registration_Info_UClass_UItemFunctionalityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFunctionalityBase), 644243575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_65303624(TEXT("/Script/BigMaze_Alpha_0"),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jonat_OneDrive_Documents_BigMaze_Alpha_0_0_1_UE_5_3_2joust_brigade_Source_BigMaze_Alpha_0_ItemSystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
