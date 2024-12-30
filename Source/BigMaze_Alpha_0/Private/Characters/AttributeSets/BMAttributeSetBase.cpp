#include "Characters/AttributeSets/BMAttributeSetBase.h"
#include "Characters/BMCharacter.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "Player/BMPlayerController.h"

UBMAttributeSetBase::UBMAttributeSetBase()
{
    // Cache tags
	HitDirectionFrontTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Front"));
	HitDirectionBackTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Back"));
	HitDirectionRightTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Right"));
	HitDirectionLeftTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Left"));    
}

void UBMAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue)

    // If a max value changes, adjust current to keep current % of current to max
    if(Attribute == GetMaxHealthAttribute())
    {
        AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
    }
    else if (Attribute == GetMoveSpeedAttribute())
    {
        NewValue = FMath::Clamp<float>(NewValue, 150, 1000);
    }
}

void UBMAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);

	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
    ABMCharacter* TargetCharacter = nullptr;
    if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
    {
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
        TargetCharacter = Cast<ABMCharacter>(TargetActor);        
    }

	// Get the Source actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
    ABMCharacter* SourceCharacter = nullptr;
	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
    {
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceController == nullptr && SourceActor != nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}

        if (SourceController)
        {
            SourceCharacter = Cast<ABMCharacter>(SourceController->GetPawn());
        }
        else
        {
            SourceCharacter = Cast<ABMCharacter>(SourceActor);
        }

		// Set the causer actor based on context if it's set
		if (Context.GetEffectCauser())
		{
			SourceActor = Context.GetEffectCauser();
		}
    }

	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Try to extract a hit result
		FHitResult HitResult;
		if (Context.GetHitResult())
		{
			HitResult = *Context.GetHitResult();
		}

		// Store a local copy of the amount of damage done and clear the damage attribute
		const float LocalDamageDone = GetDamage();
		SetDamage(0.f);
	
		if (LocalDamageDone > 0.0f)
		{
			// If character was alive before damage is added, handle damage
			// This prevents damage being added to dead things and replaying death animations
			bool WasAlive = true;

			if (TargetCharacter)
			{
				WasAlive = TargetCharacter->IsAlive();
			}

			if (!TargetCharacter->IsAlive())
			{
				//UE_LOG(LogTemp, Warning, TEXT("%s() %s is NOT alive when receiving damage"), TEXT(__FUNCTION__), *TargetCharacter->GetName());
			}

			// Apply the health change and then clamp it
			const float NewHealth = GetHealth() - LocalDamageDone;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));

			if (TargetCharacter && WasAlive)
			{
				// This is the log statement for damage received. Turned off for live games.
				//UE_LOG(LogTemp, Log, TEXT("%s() %s Damage Received: %f"), TEXT(__FUNCTION__), *GetOwningActor()->GetName(), LocalDamageDone);

				// Play HitReact animation and sound with a multicast RPC.
				const FHitResult* Hit = Data.EffectSpec.GetContext().GetHitResult();

				if (Hit)
				{
					EBMHitReactDirection HitDirection = TargetCharacter->GetHitReactDirection(Data.EffectSpec.GetContext().GetHitResult()->Location);
					switch (HitDirection)
					{
					case EBMHitReactDirection::Left:
						TargetCharacter->PlayHitReact(HitDirectionLeftTag, SourceCharacter);
						break;
					case EBMHitReactDirection::Front:
						TargetCharacter->PlayHitReact(HitDirectionFrontTag, SourceCharacter);
						break;
					case EBMHitReactDirection::Right:
						TargetCharacter->PlayHitReact(HitDirectionRightTag, SourceCharacter);
						break;
					case EBMHitReactDirection::Back:
						TargetCharacter->PlayHitReact(HitDirectionBackTag, SourceCharacter);
						break;
					}
				}
				else
				{
					// No hit result. Default to front.
					TargetCharacter->PlayHitReact(HitDirectionFrontTag, SourceCharacter);
				}

				// Show damage number for the Source player unless it was self damage
				if (SourceActor != TargetActor)
				{
					ABMPlayerController* PC = Cast<ABMPlayerController>(SourceController);
					if (PC)
					{
						PC->ShowDamageNumber(LocalDamageDone, TargetCharacter);
					}
				}

				if (!TargetCharacter->IsAlive())
				{
					UE_LOG(LogTemp, Log, TEXT("Character has been killed."));
				}
			}
		}
	}// Damage
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		// Handle other health changes.
		// Health loss should go through Damage.
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	} // Health
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		// Handle mana changes.
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	} // Mana
	else if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		// Handle stamina changes.
		SetStamina(FMath::Clamp(GetStamina(), 0.0f, GetMaxStamina()));
	}                                
}

void UBMAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, MoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, CharacterLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBMAttributeSetBase, XP, COND_None, REPNOTIFY_Always);
}

void UBMAttributeSetBase::AdjustAttributeForMaxChange(FGameplayAttributeData & AffectedAttribute, const FGameplayAttributeData & MaxAttribute, float NewMaxValue, const FGameplayAttribute & AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UBMAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, Health, OldHealth);
}

void UBMAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, MaxHealth, OldMaxHealth);
}

void UBMAttributeSetBase::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, HealthRegenRate, OldHealthRegenRate);
}

void UBMAttributeSetBase::OnRep_MoveSpeed(const FGameplayAttributeData& OldMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, MoveSpeed, OldMoveSpeed);
}

void UBMAttributeSetBase::OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, CharacterLevel, OldCharacterLevel);
}

void UBMAttributeSetBase::OnRep_XP(const FGameplayAttributeData& OldXP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBMAttributeSetBase, XP, OldXP);
}