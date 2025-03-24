// Copyright Jade Eye Studios 2025

#include "Net/UnrealNetwork.h"
#include "GASFramework/AttributeSets/AS_Ingredients.h"

UAS_Ingredients::UAS_Ingredients()
{
    // Set Default Values for Attributes in Set

    // Ingredient 1
    CurrentIngredient1.SetBaseValue(0.f);
    CurrentIngredient1.SetCurrentValue(0.f);

    MaxIngredient1.SetBaseValue(100.f);
    MaxIngredient1.SetCurrentValue(100.f);

    // Ingredient 2
    CurrentIngredient2.SetBaseValue(0.f);
    CurrentIngredient2.SetCurrentValue(0.f);

    MaxIngredient2.SetBaseValue(100.f);
    MaxIngredient2.SetCurrentValue(100.f);

    // Ingredient 3
    CurrentIngredient3.SetBaseValue(0.f);
    CurrentIngredient3.SetCurrentValue(0.f);

    MaxIngredient3.SetBaseValue(100.f);
    MaxIngredient3.SetCurrentValue(100.f);

    // Ingredient 4
    CurrentIngredient4.SetBaseValue(0.f);
    CurrentIngredient4.SetCurrentValue(0.f);

    MaxIngredient4.SetBaseValue(100.f);
    MaxIngredient4.SetCurrentValue(100.f);

    // Ingredient 5
    CurrentIngredient5.SetBaseValue(0.f);
    CurrentIngredient5.SetCurrentValue(0.f);

    MaxIngredient5.SetBaseValue(100.f);
    MaxIngredient5.SetCurrentValue(100.f);

    // Ingredient 6
    CurrentIngredient6.SetBaseValue(0.f);
    CurrentIngredient6.SetCurrentValue(0.f);

    MaxIngredient6.SetBaseValue(100.f);
    MaxIngredient6.SetCurrentValue(100.f);

}

// Ingredient 1
void UAS_Ingredients::OnRep_CurrentIngredient1(const FGameplayAttributeData &OldCurrentIngredient1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient1, OldCurrentIngredient1);
}

void UAS_Ingredients::OnRep_MaxIngredient1(const FGameplayAttributeData &OldMaxIngredient1)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient1, OldMaxIngredient1);
}

// Ingredient 2
void UAS_Ingredients::OnRep_CurrentIngredient2(const FGameplayAttributeData &OldCurrentIngredient2)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient2, OldCurrentIngredient2);
}

void UAS_Ingredients::OnRep_MaxIngredient2(const FGameplayAttributeData &OldMaxIngredient2)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient2, OldMaxIngredient2);
}

// Ingredient 3
void UAS_Ingredients::OnRep_CurrentIngredient3(const FGameplayAttributeData &OldCurrentIngredient3)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient3, OldCurrentIngredient3);
}

void UAS_Ingredients::OnRep_MaxIngredient3(const FGameplayAttributeData &OldMaxIngredient3)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient3, OldMaxIngredient3);
}

// Ingredient 4
void UAS_Ingredients::OnRep_CurrentIngredient4(const FGameplayAttributeData &OldCurrentIngredient4)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient4, OldCurrentIngredient4);
}

void UAS_Ingredients::OnRep_MaxIngredient4(const FGameplayAttributeData &OldMaxIngredient4)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient4, OldMaxIngredient4);
}

// Ingredient 5
void UAS_Ingredients::OnRep_CurrentIngredient5(const FGameplayAttributeData &OldCurrentIngredient5)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient5, OldCurrentIngredient5);
}

void UAS_Ingredients::OnRep_MaxIngredient5(const FGameplayAttributeData &OldMaxIngredient5)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient5, OldMaxIngredient5);
}

// Ingredient 6
void UAS_Ingredients::OnRep_CurrentIngredient6(const FGameplayAttributeData &OldCurrentIngredient6)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, CurrentIngredient6, OldCurrentIngredient6);
}

void UAS_Ingredients::OnRep_MaxIngredient6(const FGameplayAttributeData &OldMaxIngredient6)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UAS_Ingredients, MaxIngredient6, OldMaxIngredient6);
}

// Pre Attribute Change
void UAS_Ingredients::PreAttributeChange(const FGameplayAttribute &Attribute, float &NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue);

    if (Attribute == GetCurrentIngredient1Attribute())
    {
        const float MaxIngredient1Value = MaxIngredient1.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient1Value);
    }
    else if (Attribute == GetCurrentIngredient2Attribute())
    {
        const float MaxIngredient2Value = MaxIngredient2.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient2Value);
    }
    else if (Attribute == GetCurrentIngredient3Attribute())
    {
        const float MaxIngredient3Value = MaxIngredient3.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient3Value);
    }
    else if (Attribute == GetCurrentIngredient4Attribute())
    {
        const float MaxIngredient4Value = MaxIngredient4.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient4Value);
    }
    else if (Attribute == GetCurrentIngredient5Attribute())
    {
        const float MaxIngredient5Value = MaxIngredient5.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient5Value);
    }
    else if (Attribute == GetCurrentIngredient6Attribute())
    {
        const float MaxIngredient6Value = MaxIngredient6.GetCurrentValue();
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxIngredient6Value);
    }
}

// Post Gameplay Effect Execute
void UAS_Ingredients::PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data)
{
    Super::PostGameplayEffectExecute(Data);

    FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);

    if (Data.EvaluatedData.Attribute == GetCurrentIngredient1Attribute())
    {
        float NewIngredient1 = FMath::Clamp(CurrentIngredient1.GetCurrentValue(), 0.0f, MaxIngredient1.GetCurrentValue());
        SetCurrentIngredient1(NewIngredient1);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentIngredient2Attribute())
    {
        float NewIngredient2 = FMath::Clamp(CurrentIngredient2.GetCurrentValue(), 0.0f, MaxIngredient2.GetCurrentValue());
        SetCurrentIngredient2(NewIngredient2);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentIngredient3Attribute())
    {
        float NewIngredient3 = FMath::Clamp(CurrentIngredient3.GetCurrentValue(), 0.0f, MaxIngredient3.GetCurrentValue());
        SetCurrentIngredient3(NewIngredient3);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentIngredient4Attribute())
    {
        float NewIngredient4 = FMath::Clamp(CurrentIngredient4.GetCurrentValue(), 0.0f, MaxIngredient4.GetCurrentValue());
        SetCurrentIngredient4(NewIngredient4);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentIngredient5Attribute())
    {
        float NewIngredient5 = FMath::Clamp(CurrentIngredient5.GetCurrentValue(), 0.0f, MaxIngredient5.GetCurrentValue());
        SetCurrentIngredient5(NewIngredient5);
    }
    else if (Data.EvaluatedData.Attribute == GetCurrentIngredient6Attribute())
    {
        float NewIngredient6 = FMath::Clamp(CurrentIngredient6.GetCurrentValue(), 0.0f, MaxIngredient6.GetCurrentValue());
        SetCurrentIngredient6(NewIngredient6);
    }

}

// Get Lifetime Replicated Props
void UAS_Ingredients::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicates attributes to all clients

    // Ingredient 1
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient1, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient1, COND_None, REPNOTIFY_Always);

    // Ingredient 2
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient2, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient2, COND_None, REPNOTIFY_Always);

    // Ingredient 3
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient3, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient3, COND_None, REPNOTIFY_Always);

    // Ingredient 4
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient4, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient4, COND_None, REPNOTIFY_Always);

    // Ingredient 5
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient5, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient5, COND_None, REPNOTIFY_Always);

    // Ingredient 6
    // Current
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, CurrentIngredient6, COND_None, REPNOTIFY_Always);
    // Max
    DOREPLIFETIME_CONDITION_NOTIFY(UAS_Ingredients, MaxIngredient6, COND_None, REPNOTIFY_Always);

}