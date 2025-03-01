// Copyright Jade Eye Studios 2025


#include "Character/BiggMazeCharacter.h"
#include "Character/Player/BiggMazePlayerState.h"

// Sets default values
ABiggMazeCharacter::ABiggMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent *ABiggMazeCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}
// Called when the game starts or when spawned
void ABiggMazeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABiggMazeCharacter::InitializeAttributes()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->StartupEffectsApplied = true;
	}
}

void ABiggMazeCharacter::PossessedBy(AController * NewController)
{
	Super::PossessedBy(NewController);

	// Grab the playerstate and set it as a local variable
	ABiggMazePlayerState* PS = GetPlayerState<ABiggMazePlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UASC_BiggMaze>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);
	}
}

void ABiggMazeCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
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

void ABiggMazeCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	ABiggMazePlayerState* PS = GetPlayerState<ABiggMazePlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<UASC_BiggMaze>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
	}
}
