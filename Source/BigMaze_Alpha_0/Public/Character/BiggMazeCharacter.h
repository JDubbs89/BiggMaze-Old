// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BiggMazeCharacter.generated.h"

UCLASS()
class BIGMAZE_ALPHA_0_API ABiggMazeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABiggMazeCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
