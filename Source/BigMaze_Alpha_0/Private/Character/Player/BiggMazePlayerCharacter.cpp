// Copyright Jade Eye Studios 2025


#include "Character/Player/BiggMazePlayerCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Playerstate.h"
#include "Character/Player/BiggMazePlayerState.h"

ABiggMazePlayerCharacter::ABiggMazePlayerCharacter()
{
    //ASC
    AbilitySystemComponent = nullptr;
}

void ABiggMazePlayerCharacter::PossessedBy(AController* NewController)
{
    Super::PossessedBy(NewController);
    InitializeAbilitySystem();
    BindAttributeChangeDelegates();
}

void ABiggMazePlayerCharacter::UnPossessed()
{
    RemoveAttributeSetFromASC();
    Super::UnPossessed();
}

void ABiggMazePlayerCharacter::OnRep_PlayerState()
{
    Super::OnRep_PlayerState();
    InitializeAbilitySystem();
    BindAttributeChangeDelegates();
}

void ABiggMazePlayerCharacter::BindAttributeChangeDelegates()
{
    ABiggMazePlayerState* PS = GetPlayerState<ABiggMazePlayerState>();
    if (PS)
    {
        PS->AddCharAttributeChangeDelegates();
    }
}

void ABiggMazePlayerCharacter::InitializeAbilitySystem() 
{
    ABiggMazePlayerState* PS = GetPlayerState<ABiggMazePlayerState>();
    if (PS)
    {
        AbilitySystemComponent = Cast<UASC_BiggMaze>(PS->GetAbilitySystemComponent());
        ApplyAttributeSetToASC();
    }
}

void ABiggMazePlayerCharacter::ApplyAttributeSetToASC()
{
    if (AbilitySystemComponent && CharAttributeSet)
    {
        AbilitySystemComponent->InitStats(CharAttributeSet->StaticClass(), nullptr);
        AbilitySystemComponent->InitStats(EquippedItemAttributeSet->StaticClass(), nullptr);
    }
}

void ABiggMazePlayerCharacter::RemoveAttributeSetFromASC()
{
    if (AbilitySystemComponent && CharAttributeSet)
    {
        AbilitySystemComponent->RemoveSpawnedAttribute(CharAttributeSet);
        AbilitySystemComponent->RemoveSpawnedAttribute(EquippedItemAttributeSet);
    }
}
