// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponObject.generated.h"

class UWeaponDataAsset;
class UModuleLogicObject;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class PROJECT_RO4B_API UWeaponObject : public UObject
{
	GENERATED_BODY()
	
public:
	
	UWeaponObject();
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	TArray<UModuleLogicObject*> Modules;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	AActor* OwnerActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	UWeaponDataAsset* WeaponDataAsset;
	
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
	
	//Sets the owner actor of this weapon
	virtual void SetOwner(AActor* Actor)
	
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();
	
	UFUNCTION(BlueprintImplementableEvent , Category="Weapon", DisplayName="Fire")
	void Fire_Internal();
	
	UFUNCTION(BlueprintCallable, Category="Weapon")
	virtual void StopFire() ;
	
	UFUNCTION(BlueprintImplementableEvent, DisplayName="Stop Fire", Category="Weapon")
	void StopFire_Internal();
};
