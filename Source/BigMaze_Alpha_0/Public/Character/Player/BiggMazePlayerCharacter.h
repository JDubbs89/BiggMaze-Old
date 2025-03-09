// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "Character/BiggMazeCharacter.h"
#include "BiggMazePlayerCharacter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = BiggMaze)
class BIGMAZE_ALPHA_0_API ABiggMazePlayerCharacter : public ABiggMazeCharacter
{
	GENERATED_BODY()

public:

	ABiggMazePlayerCharacter();

    virtual void PossessedBy(AController* NewController) override;
    virtual void UnPossessed() override;
    virtual void OnRep_PlayerState() override;

protected:

    void BindAttributeChangeDelegates();

    // Attribute change handlers
    void OnAttributeChanged(const FOnAttributeChangeData& Data, FName AttributeName);

    void InitializeAbilitySystem();
    void ApplyAttributeSetToASC();
    void RemoveAttributeSetFromASC();
};
