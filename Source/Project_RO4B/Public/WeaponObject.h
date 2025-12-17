// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FWeaponAbilityData.h"
#include "WeaponObject.generated.h"


/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API UWeaponObject : public UObject
{
	GENERATED_BODY()
	
public:
	
	UWeaponObject();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FWeaponAbilityData WeaponData;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	AActor* OwnerActor;
	
public:
	
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Initialize(AActor* Owner)
	{
		OwnerActor = Owner;
	}
	
	virtual UWorld* GetWorld() const override
	{
		return OwnerActor ? OwnerActor->GetWorld() : nullptr;
	}
	
	
};
