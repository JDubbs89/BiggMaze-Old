// Copyright Jade Eye Studios 2025


#include "Character/Player/BiggMazePlayerState.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"
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
}

UAbilitySystemComponent *ABiggMazePlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void ABiggMazePlayerState::BeginPlay()
{
    Super::BeginPlay();

    // Initialize Default Attributes
    InitializeAttributes();
}

void ABiggMazePlayerState::InitializeAttributes()
{
    if (AbilitySystemComponent)
	{
		AbilitySystemComponent->StartupEffectsApplied = true;
	}
}

void ABiggMazePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate ASC and AttributeSet
    DOREPLIFETIME(ABiggMazePlayerState, AbilitySystemComponent);
    DOREPLIFETIME(ABiggMazePlayerState, AmmoAttributeSet);
}
