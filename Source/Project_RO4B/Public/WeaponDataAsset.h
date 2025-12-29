// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FWeaponRuntimeData.h"
#include "Engine/DataAsset.h"
#include "FWeaponStaticData.h"
#include "WeaponDataAsset.generated.h"


/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API UWeaponDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data Asset")
	FWeaponStaticData WeaponStaticData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data Asset")
	FWeaponRuntimeData StartingWeaponRuntimeData;
	
};
