// Copyright Jade Eye Studios 2025

#include "Character/AI/BiggMazeAICharacter.h"
#include "Net/UnrealNetwork.h"

ABiggMazeAICharacter::ABiggMazeAICharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Init AbilitySystemComponent and set replication enabled/type
    AbilitySystemComponent = CreateDefaultSubobject<UASC_BiggMaze>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

    // Init AttributeSets
    AmmoAttributeSet = CreateDefaultSubobject<UAS_Ammunition>(TEXT("AmmoAttributeSet"));
    IngredientAttributeSet = CreateDefaultSubobject<UAS_Ingredients>(TEXT("IngredientAttributeSet"));
}

UAbilitySystemComponent *ABiggMazeAICharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void ABiggMazeAICharacter::AddCharAttributeChangeDelegates()
{
    // Set Handlers for Character Attribute Changes After Possessing a Character
    if (CharAttributeSet)
    {
        /** Health Attributes */
        // CurrentHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetCurrentHealthAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentHealthChanged);
        // MaxHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxHealthChanged);
        // RegenHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetRegenHealthAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleRegenHealthChanged);

        /** Stamina Attributes */
        // CurrentStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetCurrentStaminaAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentStaminaChanged);
        // MaxStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxStaminaChanged);
        // RegenStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetRegenStaminaAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleRegenStaminaChanged);

        /** Leveling Attributes */
        // CurrentLevel
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetCurrentLevelAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentLevelChanged);
        // XPRequired
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetXPRequiredAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleXPRequiredChanged);
        // CurrentXP
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(CharAttributeSet->GetCurrentXPAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentXPChanged);
    }
}

void ABiggMazeAICharacter::AddAmmoAttributeChangeDelegates()
{
    if (AmmoAttributeSet)
    {
        /** PistolAmmo Attributes */
        // CurrentPistolAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentPistolAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentPistolAmmoChanged);
        // MaxPistolAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxPistolAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxPistolAmmoChanged);

        /** RifleAmmo Attributes */
        // CurrentRifleAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRifleAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentRifleAmmoChanged);
        // MaxRifleAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRifleAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxRifleAmmoChanged);

        /** SniperAmmo Attributes */
        // CurrentSniperAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentSniperAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentSniperAmmoChanged);
        // MaxSniperAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxSniperAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxSniperAmmoChanged);

        /** ShotgunAmmo Attributes */
        // CurrentShotgunAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentShotgunAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentShotgunAmmoChanged);
        // MaxShotgunAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxShotgunAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxShotgunAmmoChanged);

        /** RocketAmmo Attributes */
        // CurrentRocketAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRocketAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentRocketAmmoChanged);
        // MaxRocketAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRocketAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxRocketAmmoChanged);

        /** UniversalAmmo Attributes */
        // CurrentUniversalAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentUniversalAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentUniversalAmmoChanged);
        // MaxUniversalAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxUniversalAmmoAttribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxUniversalAmmoChanged);
    }
}

void ABiggMazeAICharacter::AddIngredientAttributeChangeDelegates()
{
    if (IngredientAttributeSet)
    {
        /** Ingredient1 Attributes */
        // CurrentIngredient1
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient1Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient1Changed);
        // MaxIngredient1
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient1Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient1Changed);

        /** Ingredient2 Attributes */
        // CurrentIngredient2
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient2Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient2Changed);
        // MaxIngredient2
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient2Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient2Changed);
        
        /** Ingredient3 Attributes */
        // CurrentIngredient3
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient3Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient3Changed);
        // MaxIngredient3
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient3Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient3Changed);
        
        /** Ingredient4 Attributes */
        // CurrentIngredient4
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient4Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient4Changed);
        // MaxIngredient4
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient4Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient4Changed);
        
        /** Ingredient5 Attributes */
        // CurrentIngredient5
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient5Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient5Changed);
        // MaxIngredient5
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient5Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient5Changed);
        
        /** Ingredient6 Attributes */
        // CurrentIngredient6
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient6Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleCurrentIngredient6Changed);
        // MaxIngredient6
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient6Attribute()).AddUObject(this, &ABiggMazeAICharacter::HandleMaxIngredient6Changed);
        
    }
}

void ABiggMazeAICharacter::BeginPlay()
{
    Super::BeginPlay();

    // Initialize Default Attributes
    InitializeAttributes();

    if (AbilitySystemComponent)
    {
        /** Bind playerstate change handles to attribute value change delegates in the ASC */
        
        AddCharAttributeChangeDelegates(); // Character Attribute Set (Held on Player Character)

        AddAmmoAttributeChangeDelegates(); // Ammo Attribute Set (PlayerState)
    
        AddIngredientAttributeChangeDelegates(); // Ingredient Attribute Set (PlayerState)
    }
}

void ABiggMazeAICharacter::InitializeAttributes()
{
    if (AbilitySystemComponent)
	{
		AbilitySystemComponent->StartupEffectsApplied = true;
	}
}

// Handle changes to attributes and propagate them to UI

/** Health Attributes */
// CurrentHealth
void ABiggMazeAICharacter::HandleCurrentHealthChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentHealthChanged(DeltaValue, FGameplayTagContainer());
}
// MaxHealth
void ABiggMazeAICharacter::HandleMaxHealthChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxHealthChanged(DeltaValue, FGameplayTagContainer());
}
// RegenHealth
void ABiggMazeAICharacter::HandleRegenHealthChanged(const FOnAttributeChangeData &Data) 
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnRegenHealthChanged(DeltaValue, FGameplayTagContainer());
}

/** Stamina Attributes */
//CurrentStamina
void ABiggMazeAICharacter::HandleCurrentStaminaChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentStaminaChanged(DeltaValue, FGameplayTagContainer());
}
//MaxStamina
void ABiggMazeAICharacter::HandleMaxStaminaChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxStaminaChanged(DeltaValue, FGameplayTagContainer());
}
//RegenStamina
void ABiggMazeAICharacter::HandleRegenStaminaChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnRegenStaminaChanged(DeltaValue, FGameplayTagContainer());
}

/** Leveling Attributes */
// CurrentLevel
void ABiggMazeAICharacter::HandleCurrentLevelChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentLevelChanged(DeltaValue, FGameplayTagContainer());
}
// XPRequired
void ABiggMazeAICharacter::HandleXPRequiredChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnXPRequiredChanged(DeltaValue, FGameplayTagContainer());
}
// CurrentXP
void ABiggMazeAICharacter::HandleCurrentXPChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentXPChanged(DeltaValue, FGameplayTagContainer());
}

/** Ammo Attributes */
// Pistol Ammo
void ABiggMazeAICharacter::HandleCurrentPistolAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentPistolAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxPistolAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxPistolAmmoChanged(DeltaValue, FGameplayTagContainer());
}
// Rifle Ammo
void ABiggMazeAICharacter::HandleCurrentRifleAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRifleAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxRifleAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxRifleAmmoChanged(DeltaValue, FGameplayTagContainer());
}
// Sniper Ammo
void ABiggMazeAICharacter::HandleCurrentSniperAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentSniperAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxSniperAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxSniperAmmoChanged(DeltaValue, FGameplayTagContainer());
}
// Shotgun Ammo
void ABiggMazeAICharacter::HandleCurrentShotgunAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentShotgunAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxShotgunAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxShotgunAmmoChanged(DeltaValue, FGameplayTagContainer());
}
// Rocket Ammo
void ABiggMazeAICharacter::HandleCurrentRocketAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRocketAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxRocketAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxRocketAmmoChanged(DeltaValue, FGameplayTagContainer());
}
// Universal Ammo
void ABiggMazeAICharacter::HandleCurrentUniversalAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentUniversalAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxUniversalAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxUniversalAmmoChanged(DeltaValue, FGameplayTagContainer());
}

// Ingredient1
void ABiggMazeAICharacter::HandleCurrentIngredient1Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient1Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient1Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient1Changed(DeltaValue, FGameplayTagContainer());
}
// Ingredient2
void ABiggMazeAICharacter::HandleCurrentIngredient2Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient2Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient2Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient2Changed(DeltaValue, FGameplayTagContainer());
}
// Ingredient3
void ABiggMazeAICharacter::HandleCurrentIngredient3Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient3Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient3Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient3Changed(DeltaValue, FGameplayTagContainer());
}
// Ingredient4
void ABiggMazeAICharacter::HandleCurrentIngredient4Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient4Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient4Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient4Changed(DeltaValue, FGameplayTagContainer());
}
// Ingredient5
void ABiggMazeAICharacter::HandleCurrentIngredient5Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient5Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient5Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient5Changed(DeltaValue, FGameplayTagContainer());
}
// Ingredient6
void ABiggMazeAICharacter::HandleCurrentIngredient6Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient6Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazeAICharacter::HandleMaxIngredient6Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient6Changed(DeltaValue, FGameplayTagContainer());
}

void ABiggMazeAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    // Replicate ASC and AttributeSet
    DOREPLIFETIME(ABiggMazeAICharacter, AmmoAttributeSet);
    DOREPLIFETIME(ABiggMazeAICharacter, IngredientAttributeSet);
}