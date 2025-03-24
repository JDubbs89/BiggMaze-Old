// Copyright Jade Eye Studios 2025


#include "GASFramework/Calculations/MMC_HealthRegen.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"

UMMC_HealthRegen::UMMC_HealthRegen()
{
    HealthDef.AttributeToCapture = UAS_BM_CharBase::GetCurrentHealthAttribute();
    HealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    HealthDef.bSnapshot = false;
    
    MaxHealthDef.AttributeToCapture = UAS_BM_CharBase::GetMaxHealthAttribute();
    MaxHealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    MaxHealthDef.bSnapshot = false;
    
    RegenHealthDef.AttributeToCapture = UAS_BM_CharBase::GetRegenHealthAttribute();
    RegenHealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    RegenHealthDef.bSnapshot = false;

    RelevantAttributesToCapture.Add(HealthDef);
    RelevantAttributesToCapture.Add(MaxHealthDef);
    RelevantAttributesToCapture.Add(RegenHealthDef);
}

float UMMC_HealthRegen::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec &Spec) const
{
    const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluationParameters;
    EvaluationParameters.SourceTags = SourceTags;
    EvaluationParameters.TargetTags = TargetTags;

    float Health = 0.0f;
    GetCapturedAttributeMagnitude(HealthDef, Spec, EvaluationParameters, Health);
    float MaxHealth = 0.0f;
    GetCapturedAttributeMagnitude(MaxHealthDef, Spec, EvaluationParameters, MaxHealth);
    float RegenHealth = 0.0f;
    GetCapturedAttributeMagnitude(RegenHealthDef, Spec, EvaluationParameters, RegenHealth);
    
    


    return FMath::Clamp(MaxHealth - Health, 0.0f, RegenHealth);
}