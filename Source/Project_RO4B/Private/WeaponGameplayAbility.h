// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModuleLogicObject.h"
#include "Abilities/GameplayAbility.h"
#include "WeaponGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API UWeaponGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability")
	FName WeaponName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability")
	UTexture2D* WeaponIcon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability")
	FText WeaponDescription;
	
	// Modules that modify the behavior of this weapon ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability")
	TArray<UModuleLogicObject*> WeaponModules;
	
public:
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
};
