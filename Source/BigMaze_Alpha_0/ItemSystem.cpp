
#include "ItemSystem.h"

void AItemFunctionalityBase::PrimaryUse_Implementation(const FItem& Item, EItemActivationType ActivationType)
{
    UE_LOG(LogTemp, Warning, TEXT("PrimaryUse called for item: %s with activation type: %d"), *Item.Name, ActivationType);
    // Add primary use logic here
}

void AItemFunctionalityBase::SecondaryUse_Implementation(const FItem& Item, EItemActivationType ActivationType)
{
    UE_LOG(LogTemp, Warning, TEXT("SecondaryUse called for item: %s with activation type: %d"), *Item.Name, ActivationType);
    // Add secondary use logic here
}

void AItemFunctionalityBase::TertiaryUse_Implementation(const FItem& Item, EItemActivationType ActivationType)
{
    UE_LOG(LogTemp, Warning, TEXT("TertiaryUse called for item: %s with activation type: %d"), *Item.Name, ActivationType);
    // Add tertiary use logic here
}

void AItemFunctionalityBase::QuaternaryUse_Implementation(const FItem& Item, EItemActivationType ActivationType)
{
    UE_LOG(LogTemp, Warning, TEXT("QuaternaryUse called for item: %s with activation type: %d"), *Item.Name, ActivationType);
    // Add quaternary use logic here
}

void AItemFunctionalityBase::OnSwapItem_Implementation(const FItem& Item, bool SwapTo)
{
    UE_LOG(LogTemp, Warning, TEXT("QuaternaryUse called for item: %s, swapping to: %d"), *Item.Name, SwapTo);
    // Add swap logic here
}