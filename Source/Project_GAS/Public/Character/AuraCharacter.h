// Copyright Fremont

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 *
 */
UCLASS()
class PROJECT_GAS_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();

};
