// Copyright Jade Eye Studios 2025

#include "CoreMinimal.h"
#include "ItemEnums.generated.h"

UENUM(BlueprintType)
enum class EAttributeReturnType : uint8
{
    Int UMETA(DisplayName = "Int"),
    Float UMETA(DisplayName = "Float"),
    Bool UMETA(DisplayName = "Bool")
    Str UMETA(DisplayName = "String"),
    Enum UMETA(DisplayName = "Enum"),
    Byte UMETA(DisplayName = "Byte"),
    Vec UMETA(DisplayName = "Vec"),
};


UENUM(BlueprintType)
enum class EItemActivationType : uint8
{
    Press UMETA(DisplayName = "Press"),
    Hold UMETA(DisplayName = "Hold"),
    Release UMETA(DisplayName = "Release")
};

UENUM(BlueprintType)
enum class EItemClass : uint8
{
    Weapon UMETA(DisplayName = "Weapon"),
    Consumable UMETA(DisplayName = "Consumable"),
    Throwable UMETA(DisplayName = "Throwable"),
    Placeable UMETA(DisplayName = "Placeable"),
    Quest UMETA(DisplayName = "Quest"),
    Attachment UMETA(DisplayName = "Attachment"),
    Upgrade UMETA(DisplayName = "Upgrade"),
    Armor UMETA(DisplayName = "Armor"),
    Equipment UMETA(DisplayName = "Equipment")
};

UENUM(BlueprintType)
enum class EItemSlotCategory : uint8
{
    Default UMETA(DisplayName = "Default"), // Any Slot Type
    
    Weapon UMETA(DisplayName = "Weapon"), // Weapon Types
    MeleeWeapon UMETA(DisplayName = "Melee Weapon"),
    RangedWeapon UMETA(DisplayName = "Ranged Weapon"),
    
    Consumable UMETA(DisplayName = "Consumable"), // Useable Items Besides Weapons
    Throwable UMETA(DisplayName = "Throwable"),
    Placeable UMETA(DisplayName = "Placeable"),
    
    Quest UMETA(DisplayName = "Quest"), // Quest Items
    
    Attachment UMETA(DisplayName = "Attachment"), // Attachments/Upgrades
    Upgrade UMETA(DisplayName = "Upgrade"),
    
    HeadArmor UMETA(DisplayName = "Head Armor"), // Armor Types
    ArmArmor UMETA(DisplayName = "Arm Armor"),
    ChestArmor UMETA(DisplayName = "Chest Armor"),
    LegArmor UMETA(DisplayName = "Leg Armor"),
    
    BackEquipment UMETA(DisplayName = "Back Equipment"), // Equipment types
    HeadEquipment UMETA(DisplayName = "Head Equipment"),
    ArmEquipment UMETA(DisplayName = "Arm Equipment"),
    LegEquipment UMETA(DisplayName = "Leg Equipment"),
    MiscEquipment UMETA(DisplayName = "Misc Equipment"),
    
    NoSlotRequired UMETA(DisplayName = "No Slot Required") //Item Doesn't Use Slots
};