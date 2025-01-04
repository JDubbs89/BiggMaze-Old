// Copyright Jade Eye Studios 2025


#include "GASFramework/Player/PS_BM_Player.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
#include "Net/UnrealNetwork.h"

APS_BM_Player::APS_BM_Player()
{
    PrimaryActorTick.bCanEverTick = true;

    // Init AbilitySystemComponent and set replication enabled/type
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    // Init AttributeSets
    AttributeSet = CreateDefaultSubobject<UAS_BM_CharBase>(TEXT("AttributeSet"));
    AmmoAttributeSet = CreateDefaultSubobject<UAS_Ammunition>(TEXT("AmmoAttributeSet"));

}

UAbilitySystemComponent* APS_BM_Player::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void APS_BM_Player::BeginPlay()
{
    Super::BeginPlay();

    // Init attributes on game start
    InitializeAttributes();

    if (AbilitySystemComponent && AttributeSet && AmmoAttributeSet)
    {
        // Bind playerstate change handles to attribute value change delegates in the ASC
        
        /** Health Attributes */
        // CurrentHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentHealthChanged);
        // MaxHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxHealthChanged);
        // RegenHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetRegenHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleRegenHealthChanged);

        /** Stamina Attributes */
        // CurrentStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentStaminaAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentStaminaChanged);
        // MaxStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxStaminaChanged);
        // RegenStamina
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetRegenStaminaAttribute()).AddUObject(this, &APS_BM_Player::HandleRegenStaminaChanged);

        /** Leveling Attributes */
        // CurrentLevel
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentLevelAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentLevelChanged);
        // XPRequired
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetXPRequiredAttribute()).AddUObject(this, &APS_BM_Player::HandleXPRequiredChanged);
        // CurrentXP
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentXPAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentXPChanged);
    
        /** PistolAmmo Attributes */
        // CurrentPistolAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentPistolAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentPistolAmmoChanged);
        // MaxPistolAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxPistolAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxPistolAmmoChanged);

        /** RifleAmmo Attributes */
        // CurrentRifleAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRifleAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentRifleAmmoChanged);
        // MaxRifleAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRifleAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxRifleAmmoChanged);

        /** SniperAmmo Attributes */
        // CurrentSniperAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentSniperAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentSniperAmmoChanged);
        // MaxSniperAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxSniperAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxSniperAmmoChanged);

        /** ShotgunAmmo Attributes */
        // CurrentShotgunAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentShotgunAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentShotgunAmmoChanged);
        // MaxShotgunAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxShotgunAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxShotgunAmmoChanged);

        /** RocketAmmo Attributes */
        // CurrentRocketAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentRocketAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentRocketAmmoChanged);
        // MaxRocketAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxRocketAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxRocketAmmoChanged);

        /** UniversalAmmo Attributes */
        // CurrentUniversalAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetCurrentUniversalAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentUniversalAmmoChanged);
        // MaxUniversalAmmo
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AmmoAttributeSet->GetMaxUniversalAmmoAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxUniversalAmmoChanged);
    
    }
}

// Initialize attributes in c++ with gameplay effect (WIP/Optional)
void APS_BM_Player::InitializeAttributes()
{
    if (AbilitySystemComponent && AttributeSet && AmmoAttributeSet)
    {
        // Apply a gameplay effect to init attributes, like default health, stamina, etc.
        // UGameplayEffect* InitEffect = LoadObject<UGameplayEffect>(nullptr, TEXT("/Game/Path/To/InitEffect"));
        // FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
        //FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutGoingSpec(InitEffect, 1, EffectContext);
        //AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
    }
}

// Handle changes to attributes and propagate them to UI

/** Health Attributes */
// CurrentHealth
void APS_BM_Player::HandleCurrentHealthChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleMaxHealthChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleRegenHealthChanged(const FOnAttributeChangeData &Data) 
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
void APS_BM_Player::HandleCurrentStaminaChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleMaxStaminaChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleRegenStaminaChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentLevelChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleXPRequiredChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentXPChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentPistolAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentPistolAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxPistolAmmoChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentRifleAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRifleAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxRifleAmmoChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentSniperAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentSniperAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxSniperAmmoChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentShotgunAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentShotgunAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxShotgunAmmoChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentRocketAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentRocketAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxRocketAmmoChanged(const FOnAttributeChangeData &Data)
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
void APS_BM_Player::HandleCurrentUniversalAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentUniversalAmmoChanged(DeltaValue, FGameplayTagContainer());
}
void APS_BM_Player::HandleMaxUniversalAmmoChanged(const FOnAttributeChangeData &Data)
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxUniversalAmmoChanged(DeltaValue, FGameplayTagContainer());
}

// Get Lifetime Replicated Props
void APS_BM_Player::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate ASC and AttributeSet
    DOREPLIFETIME(APS_BM_Player, AbilitySystemComponent);
    DOREPLIFETIME(APS_BM_Player, AttributeSet);
    DOREPLIFETIME(APS_BM_Player, AmmoAttributeSet);
}
