// Copyright Fremont


#include "Character/AuraEnemy.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);;

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
	
}

void AAuraEnemy::HightLightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);
	WeaponLeft->SetRenderCustomDepth(true);
}

void AAuraEnemy::UnHightLightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
	WeaponLeft->SetRenderCustomDepth(false);
}

void AAuraEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	AbilitySystemComponent->InitAbilityActorInfo(this, this);

}
