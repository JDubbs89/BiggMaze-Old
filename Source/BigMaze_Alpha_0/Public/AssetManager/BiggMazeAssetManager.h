// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "BiggMazeAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API UBiggMazeAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	virtual void StartInitialLoading() override;
};
