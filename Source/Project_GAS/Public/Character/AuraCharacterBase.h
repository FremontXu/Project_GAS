// Copyright Fremont

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"

#include "AuraCharacterBase.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;

UCLASS(Abstract)
class PROJECT_GAS_API AAuraCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category =  "Combat")
	TObjectPtr<UStaticMeshComponent> Weapon;
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<UStaticMeshComponent> WeaponLeft;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;


};
