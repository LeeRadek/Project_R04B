// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "TwinStickCharacter.generated.h"

UCLASS()
class PROJECT_RO4B_API ATwinStickCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATwinStickCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrades")
	TArray<UGameplayAbility*> CharacterUpgrades;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrades")
	TArray<UGameplayAbility*> WeaponUpgrades;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
