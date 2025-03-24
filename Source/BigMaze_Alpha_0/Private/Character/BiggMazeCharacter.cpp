// Copyright Jade Eye Studios 2025


#include "Character/BiggMazeCharacter.h"
#include "GASFramework/ASCs/ASC_BiggMaze.h"
#include "Net/UnrealNetwork.h"
#include "Character/Player/BiggMazePlayerState.h"

// Sets default values
ABiggMazeCharacter::ABiggMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Init AttributeSets
    CharAttributeSet = CreateDefaultSubobject<UAS_BM_CharBase>(TEXT("AttributeSet"));
	EquippedItemAttributeSet = CreateDefaultSubobject<UAS_EquippedItem>(TEXT("EquippedItemAttributeSet"));
}

// Subclasses Override This
UAbilitySystemComponent *ABiggMazeCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

// Function to return character attribute set from character
class UAS_BM_CharBase* ABiggMazeCharacter::GetCharAttributeSet()
{
	return CharAttributeSet;
}

// Function to return equipped item attribute set from character
UAS_EquippedItem *ABiggMazeCharacter::GetEquippedItemAttributeSet()
{
    return EquippedItemAttributeSet;
}

// Called when the game starts or when spawned
void ABiggMazeCharacter::BeginPlay()
{
	Super::BeginPlay();

	InitializeAttributes();
}

void ABiggMazeCharacter::InitializeAttributes()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->StartupEffectsApplied = true;
	}
}

void ABiggMazeCharacter::InitializeAbilities()
{
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

	DOREPLIFETIME(ABiggMazeCharacter, AbilitySystemComponent);
	DOREPLIFETIME(ABiggMazeCharacter, CharAttributeSet);
	DOREPLIFETIME(ABiggMazeCharacter, EquippedItemAttributeSet);
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
