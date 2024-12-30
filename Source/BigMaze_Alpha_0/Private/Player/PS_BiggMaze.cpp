#include "Player/PS_BiggMaze.h"
#include "Characters/AttributeSets/BMAttributeSetBase.h"
#include "Characters/Abilities/BMAbilitySystemComponent.h"
#include "Characters/BMCharacter.h"
#include "Player/BMPlayerController.h"
#include "UI/BMFloatingStatusBarWidget"
#include "UI/BMHudWidget.h"

APS_BiggMaze::APS_BiggMaze()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UBMAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another PS_BiggMaze (Character) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UBMAttributeSetBase>(TEXT("AttributeSetBase"));

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

UAbilitySystemComponent * APS_BiggMaze::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UBMAttributeSetBase * APS_BiggMaze::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool APS_BiggMaze::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void APS_BiggMaze::ShowAbilityConfirmCancelText(bool ShowText)
{
	ABMPlayerController* PC = Cast<ABMPlayerController>(GetOwner());
	if (PC)
	{
		UBMHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmCancelText(ShowText);
		}
	}
}

float APS_BiggMaze::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float APS_BiggMaze::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float APS_BiggMaze::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float APS_BiggMaze::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}

int32 APS_BiggMaze::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}

int32 APS_BiggMaze::GetXP() const
{
	return AttributeSetBase->GetXP();
}

void APS_BiggMaze::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &APS_BiggMaze::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &APS_BiggMaze::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &APS_BiggMaze::HealthRegenRateChanged);
		XPChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetXPAttribute()).AddUObject(this, &APS_BiggMaze::XPChanged);
		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterLevelAttribute()).AddUObject(this, &APS_BiggMaze::CharacterLevelChanged);

		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &APS_BiggMaze::StunTagChanged);
	}
}

void APS_BiggMaze::HealthChanged(const FOnAttributeChangeData & Data)
{
	float Health = Data.NewValue;

	// Update floating status bar
	ABMCharacter* Character = Cast<ABMCharacter>(GetPawn());
	if (Character)
	{
		UBMFloatingStatusBarWidget* CharacterFloatingStatusBar = Character->GetFloatingStatusBar();
		if (CharacterFloatingStatusBar)
		{
			CharacterFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
		}
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	// If the player died, handle death
	if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		if (Character)
		{
			Character->Die();
		}
	}
}

void APS_BiggMaze::MaxHealthChanged(const FOnAttributeChangeData & Data)
{
	float MaxHealth = Data.NewValue;

	// Update floating status bar
	ABMCharacter* Character = Cast<ABMCharacter>(GetPawn());
	if (Character)
	{
		UBMFloatingStatusBarWidget* CharacterFloatingStatusBar = Character->GetFloatingStatusBar();
		if (CharacterFloatingStatusBar)
		{
			CharacterFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
		}
	}

	// Update the HUD
	ABMPlayerController* PC = Cast<ABMPlayerController>(GetOwner());
	if (PC)
	{
		UBMHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxHealth(MaxHealth);
		}
	}
}

void APS_BiggMaze::HealthRegenRateChanged(const FOnAttributeChangeData & Data)
{
	float HealthRegenRate = Data.NewValue;

	// Update the HUD
	ABMPlayerController* PC = Cast<ABMPlayerController>(GetOwner());
	if (PC)
	{
		UBMHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}
}

void APS_BiggMaze::XPChanged(const FOnAttributeChangeData & Data)
{
	float XP = Data.NewValue;

	// Update the HUD
	ABMPlayerController* PC = Cast<ABMPlayerController>(GetOwner());
	if (PC)
	{
		UBMHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetExperience(XP);
		}
	}
}

void APS_BiggMaze::CharacterLevelChanged(const FOnAttributeChangeData & Data)
{
	float CharacterLevel = Data.NewValue;

	// Update the HUD
	ABMPlayerController* PC = Cast<ABMPlayerController>(GetOwner());
	if (PC)
	{
		UBMHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetCharacterLevel(CharacterLevel);
		}
	}
}

void APS_BiggMaze::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.NotCanceledByStun")));

		AbilitySystemComponent->CancelAbilities(&AbilityTagsToCancel, &AbilityTagsToIgnore);
	}
}
