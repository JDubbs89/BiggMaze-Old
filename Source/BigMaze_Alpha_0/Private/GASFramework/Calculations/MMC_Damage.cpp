// Copyright Jade Eye Studios 2025

#include "GASFramework/Calculations/MMC_Damage.h"
#include "GASFramework/AttributeSets/AS_BM_CharBase.h"

UMMC_Damage::UMMC_Damage()
{
    HealthDef.AttributeToCapture = UAS_BM_CharBase::GetCurrentHealthAttribute();
    HealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    HealthDef.bSnapshot = false;
    
    DamageDef.AttributeToCapture = UAS_BM_CharBase::GetDamageAttribute();
    DamageDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    DamageDef.bSnapshot = false;

    RelevantAttributesToCapture.Add(HealthDef);
    RelevantAttributesToCapture.Add(DamageDef);
}

float UMMC_Damage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec & Spec) const
{
    const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluationParameters;
    EvaluationParameters.SourceTags = SourceTags;
    EvaluationParameters.TargetTags = TargetTags;

    float Health = 0.0f;
    GetCapturedAttributeMagnitude(HealthDef, Spec, EvaluationParameters, Health);

    float Damage = 0.0f;
    GetCapturedAttributeMagnitude(DamageDef, Spec, EvaluationParameters, Damage);


    return FMath::Clamp(Damage, 0.0f, Health) * -1;
}  