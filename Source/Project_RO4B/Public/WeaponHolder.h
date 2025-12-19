// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponHolder.generated.h"

class UWeaponObject;
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECT_RO4B_API UWeaponHolder : public UObject
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Holder")
	UWeaponObject* Weapon;
};
