// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "ModuleLogicObject.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TwinStickCharacter.generated.h"

UCLASS()
class PROJECT_RO4B_API ATwinStickCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATwinStickCharacter();
	
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Conponent")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Conponent")
	UCameraComponent* Camera;
	//Upgrades
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Upgrades")
	TArray<UModuleLogicObject*> CharacterUpgrades;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Upgrades")
	TArray<UModuleLogicObject*> WeaponUpgrades;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//Sets a module at the specified index in the CharacterUpgrades array
	UFUNCTION(BlueprintCallable, Category="Modules")
	void SetCharacterModulesAtIndex(int32 Index, UModuleLogicObject* NewModule);
	
	//Sets a module at the specified index in the WeaponUpgrades array
	UFUNCTION(BlueprintCallable, Category="Modules")
	void SetWeaponModulesAtIndex(int32 Index, UModuleLogicObject* NewModule);
	
	UFUNCTION(BlueprintCallable, Category="Modules")
	void RemoveCharacterModule(int32 Index);
	
	UFUNCTION(BlueprintCallable, Category="Modules")
	void RemoveWeaponModule(int32 Index);
};
