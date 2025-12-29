// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FWeaponRuntimeData.h"
#include "UObject/Object.h"
#include "FWeaponStaticData.h"
#include "WeaponHolder.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PROJECT_RO4B_API UWeaponHolder : public UObject
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Holder")
	FWeaponStaticData WeaponStaticData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Holder")
	FWeaponRuntimeData WeaponRuntimeData;
};