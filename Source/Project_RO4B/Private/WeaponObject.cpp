// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "WeaponObject.h"

UWeaponObject::UWeaponObject()
{
	
}

void UWeaponObject::SetOwner(AActor* Actor)
{
	OwnerActor = Actor;
}

void UWeaponObject::Fire()
{
	Fire_Internal();
}

void UWeaponObject::StopFire()
{
	StopFire_Internal();
}
