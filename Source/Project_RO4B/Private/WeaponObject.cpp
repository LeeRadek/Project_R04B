// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponObject.h"
#include "CoreMinimal.h"
#include "ModuleLogicObject.h"

UWeaponObject::UWeaponObject()
{
	ID = FGuid::NewGuid();
}

void UWeaponObject::SetOwner(AActor* Actor)
{
	OwnerActor = Actor;
}

// Initializes the weapon with static and runtime data
void UWeaponObject::InitializeWeapon(
	const FWeaponStaticData& InStaticData, 
	const FWeaponRuntimeData& InRuntimeData)
{
	WeaponStaticData = InStaticData;
	WeaponRuntimeData = InRuntimeData;
	Modules.Empty();
	
	for (const auto& Module : WeaponRuntimeData.Modules)
	{
		if (Module)
		{
			UModuleLogicObject* NewModule = NewObject<UModuleLogicObject>(OwnerActor, Module);
			if (NewModule)
			{
				Modules.Add(NewModule);
				
			}
		}
	}

}

void UWeaponObject::Fire()
{
	Fire_Internal();
}

void UWeaponObject::StopFire()
{
	StopFire_Internal();
}
