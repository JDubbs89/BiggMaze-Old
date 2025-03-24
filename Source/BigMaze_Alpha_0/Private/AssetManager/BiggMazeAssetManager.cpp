// Copyright Jade Eye Studios 2025


#include "AssetManager/BiggMazeAssetManager.h"
#include "AbilitySystemGlobals.h"

void UBiggMazeAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();
    UAbilitySystemGlobals::Get().InitGlobalData();
}