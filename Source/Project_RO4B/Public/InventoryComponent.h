// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponObject.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( BlueprintType, Blueprintable, ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class PROJECT_RO4B_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	//All weapon items in the inventory
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Inventory")
	TArray<UWeaponObject*> WeaponItems ;
	
	//Currently equipped weapon
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category="Inventory")
	UWeaponObject* CurrentWeapon ;
	
public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	//Adds a weapon to the inventory
	UFUNCTION( BlueprintCallable, Category="Inventory")
	void AddWeaponToInventory();

		
};
