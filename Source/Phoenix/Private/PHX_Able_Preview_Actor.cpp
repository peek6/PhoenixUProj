#include "PHX_Able_Preview_Actor.h"
#include "CustomizableCharacterComponent.h"
#include "BipedStateComponent.h"

APHX_Able_Preview_Actor::APHX_Able_Preview_Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Customization = CreateDefaultSubobject<UCustomizableCharacterComponent>(TEXT("Customization"));
    this->ObjectStateComponent = CreateDefaultSubobject<UBipedStateComponent>(TEXT("BipedStateComponent"));
}

