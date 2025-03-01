// Copyright Jade Eye Studios 2025


#include "Character/BiggMazeCharacter.h"

// Sets default values
ABiggMazeCharacter::ABiggMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABiggMazeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABiggMazeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABiggMazeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

