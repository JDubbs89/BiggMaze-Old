// Copyright Jade Eye Studios 2025


#include "Character/Player/BiggMazePlayerState.h"
#include "Character/Player/BiggMazePlayerCharacter.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "GASFramework/AttributeSets/AS_Ammunition.h"
#include "GASFramework/AttributeSets/AS_Ingredients.h"
#include "Net/UnrealNetwork.h"

ABiggMazePlayerState::ABiggMazePlayerState()
{
    PrimaryActorTick.bCanEverTick = true;

    // Init AbilitySystemComponent and set replication enabled/type
    AbilitySystemComponent = CreateDefaultSubobject<UASC_BiggMaze>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    // Init AttributeSets
    AmmoAttributeSet = CreateDefaultSubobject<UAS_Ammunition>(TEXT("AmmoAttributeSet"));
    IngredientAttributeSet = CreateDefaultSubobject<UAS_Ingredients>(TEXT("IngredientAttributeSet"));
}

UAbilitySystemComponent *ABiggMazePlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void ABiggMazePlayerState::AddCharAttributeChangeDelegates()
{
    // Set Handlers for Character Attribute Changes After Possessing a Character
    ABiggMazePlayerCharacter* PChar = Cast<ABiggMazePlayerCharacter>(GetPawn());
    if (PChar)
    {
        TObjectPtr<UAS_BM_CharBase> AttributeSet = PChar->GetCharAttributeSet();
        /** Health Attributes */
        // CurrentHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentHealthAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentHealthChanged);
        // MaxHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxHealthChanged);
        // RegenHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetRegenHealthAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleRegenHealthChanged);

        /** Stamina Attributes */
        // CurrentStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentStaminaAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentStaminaChanged);
        // MaxStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxStaminaChanged);
        // RegenStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetRegenStaminaAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleRegenStaminaChanged);

        /** Leveling Attributes */
        // CurrentLevel
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentLevelAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentLevelChanged);
        // XPRequired
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetXPRequiredAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleXPRequiredChanged);
        // CurrentXP
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentXPAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentXPChanged);
    }
}

void ABiggMazePlayerState::BeginPlay()
{
    Super::BeginPlay();

    // Initialize Default Attributes
    InitializeAttributes();

    if (AbilitySystemComponent)
    {
        // Bind playerstate change handles to attribute value change delegates in the ASC
        AddCharAttributeChangeDelegates();

        if (AmmoAttributeSet)
        {
            /** PistolAmmo Attributes */
            // CurrentPistolAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentPistolAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentPistolAmmoChanged);
            // MaxPistolAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxPistolAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxPistolAmmoChanged);

            /** RifleAmmo Attributes */
            // CurrentRifleAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRifleAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentRifleAmmoChanged);
            // MaxRifleAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRifleAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxRifleAmmoChanged);

            /** SniperAmmo Attributes */
            // CurrentSniperAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentSniperAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentSniperAmmoChanged);
            // MaxSniperAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxSniperAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxSniperAmmoChanged);

            /** ShotgunAmmo Attributes */
            // CurrentShotgunAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentShotgunAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentShotgunAmmoChanged);
            // MaxShotgunAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxShotgunAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxShotgunAmmoChanged);

            /** RocketAmmo Attributes */
            // CurrentRocketAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRocketAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentRocketAmmoChanged);
            // MaxRocketAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRocketAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxRocketAmmoChanged);

            /** UniversalAmmo Attributes */
            // CurrentUniversalAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentUniversalAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentUniversalAmmoChanged);
            // MaxUniversalAmmo
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxUniversalAmmoAttribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxUniversalAmmoChanged);
        }
        if (IngredientAttributeSet)
        {
            /** Ingredient1 Attributes */
            // CurrentIngredient1
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient1Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient1Changed);
            // MaxIngredient1
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient1Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient1Changed);

            /** Ingredient2 Attributes */
            // CurrentIngredient2
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient2Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient2Changed);
            // MaxIngredient2
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient2Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient2Changed);
        
            /** Ingredient3 Attributes */
            // CurrentIngredient3
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient3Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient3Changed);
            // MaxIngredient3
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient3Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient3Changed);
        
            /** Ingredient4 Attributes */
            // CurrentIngredient4
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient4Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient4Changed);
            // MaxIngredient4
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient4Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient4Changed);
        
            /** Ingredient5 Attributes */
            // CurrentIngredient5
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient5Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient5Changed);
            // MaxIngredient5
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient5Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient5Changed);
        
            /** Ingredient6 Attributes */
            // CurrentIngredient6
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetCurrentIngredient6Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleCurrentIngredient6Changed);
            // MaxIngredient6
            AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(IngredientAttributeSet->GetMaxIngredient6Attribute()).AddUObject(this, &ABiggMazePlayerState::HandleMaxIngredient6Changed);
        
        }
    }
}

void ABiggMazePlayerState::InitializeAttributes()
{
    if (AbilitySystemComponent)
	{
		AbilitySystemComponent->StartupEffectsApplied = true;
	}
}

// Handle changes to attributes and propagate them to UI

/** Health Attributes */
// CurrentHealth
void ABiggMazePlayerState::HandleCurrentHealthChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleMaxHealthChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleRegenHealthChanged(const FOnAttributeChangeData &Data) 
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
void ABiggMazePlayerState::HandleCurrentStaminaChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleMaxStaminaChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleRegenStaminaChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentLevelChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleXPRequiredChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentXPChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentPistolAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentPistolAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxPistolAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentRifleAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRifleAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxRifleAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentSniperAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentSniperAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxSniperAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentShotgunAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentShotgunAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxShotgunAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentRocketAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRocketAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxRocketAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentUniversalAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentUniversalAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxUniversalAmmoChanged(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient1Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient1Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient1Changed(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient2Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient2Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient2Changed(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient3Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient3Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient3Changed(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient4Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient4Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient4Changed(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient5Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient5Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient5Changed(const FOnAttributeChangeData &Data)
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
void ABiggMazePlayerState::HandleCurrentIngredient6Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentIngredient6Changed(DeltaValue, FGameplayTagContainer());
}
void ABiggMazePlayerState::HandleMaxIngredient6Changed(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxIngredient6Changed(DeltaValue, FGameplayTagContainer());
}

void ABiggMazePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate ASC and AttributeSet
    DOREPLIFETIME(ABiggMazePlayerState, AbilitySystemComponent);
    DOREPLIFETIME(ABiggMazePlayerState, AmmoAttributeSet);
    DOREPLIFETIME(ABiggMazePlayerState, IngredientAttributeSet);
}
