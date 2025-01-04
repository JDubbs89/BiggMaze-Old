// Copyright Jade Eye Studios 2025


#include "PS_BM_Player.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "AS_BM_CharBase.h"
#include "Net/UnrealNetwork.h"

APS_BM_Player::APS_BM_Player()
{
    PrimaryActorTick.bCanEverTick = true;

    // Init AbilitySystemComponent and set replication enabled/type
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    // Init AttributeSet and set replication enabled/type
    AttributeSet = CreateDefaultSubobject<UAS_BM_CharBase>(TEXT("AttributeSet"));

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

    if (AbilitySystemComponent && AttributeSet)
    {
        // Bind playerstate change handles to attribute value change delegates in the ASC
        
        /** Damage */
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetDamageAttribute()).AddUObject(this, &APS_BM_Player::HandleDamageChanged);

        /** Health Attributes */
        // CurrentHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCurrentHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleCurrentHealthChanged);
        // MaxHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleMaxHealthChanged);
        // RegenHealth
        AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetRegenHealthAttribute()).AddUObject(this, &APS_BM_Player::HandleRegenHealthChanged);
    }
}

// Initialize attributes in c++ with gameplay effect (WIP/Optional)
void APS_BM_Player::InitializeAttributes()
{
    if (AbilitySystemComponent && AttributeSet)
    {
        // Apply a gameplay effect to init attributes, like default health, stamina, etc.
        // UGameplayEffect* InitEffect = LoadObject<UGameplayEffect>(nullptr, TEXT("/Game/Path/To/InitEffect"));
        // FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
        //FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutGoingSpec(InitEffect, 1, EffectContext);
        //AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
    }
}

// Handle changes to attributes and propagate them to UI

/** Damage */
void APS_BM_Player::HandleDamageChanged(const FOnAttributeChangeData &Data)
{
    // Trigger blueprint event with new damage value
    OnDamageChanged(Data.NewValue, FGameplayTagContainer());
}

/** Health Attributes */
void APS_BM_Player::HandleCurrentHealthChanged(const FOnAttributeChangeData &Data) // CurrentHealth
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnCurrentHealthChanged(DeltaValue, FGameplayTagContainer());
}

void APS_BM_Player::HandleMaxHealthChanged(const FOnAttributeChangeData &Data) // MaxHealth
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnMaxHealthChanged(DeltaValue, FGameplayTagContainer());
}

void APS_BM_Player::HandleRegenHealthChanged(const FOnAttributeChangeData &Data) // RegenHealth
{
    // Set local variables from old and new values
    float NewValue = Data.NewValue;
    float OldValue = Data.OldValue;
    
    // Set a delta value based on the difference between new and old values
    float DeltaValue = NewValue - OldValue;

    // Trigger blueprint event to update UI
    OnRegenHealthChanged(DeltaValue, FGameplayTagContainer());
}

// Get Lifetime Replicated Props
void APS_BM_Player::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate ASC and AttributeSet
    DOREPLIFETIME(APS_BM_Player, AbilitySystemComponent);
    DOREPLIFETIME(APS_BM_Player, AttributeSet);
}
