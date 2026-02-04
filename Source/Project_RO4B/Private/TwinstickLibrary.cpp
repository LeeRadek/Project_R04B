// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinstickLibrary.h"
#include "ModuleLogicObject.h"
#include "WeaponObject.h"


UModuleLogicObject* UTwinstickLibrary::CreateModule(AActor* WorldContextObject, AActor* Owner, TSubclassOf<UModuleLogicObject> Class)
{
	if (!WorldContextObject || !Class) return nullptr;
	
	if (!Owner)
	{
		Owner = WorldContextObject;
	}
	if (!Owner)
	{
		return nullptr;
	}
	
	UModuleLogicObject* Obj = NewObject<UModuleLogicObject>(Owner, Class);
	
	Obj->Initialize(Owner);
	return Obj;
}

UWeaponObject* UTwinstickLibrary::CreateWeaponObject(UObject* WorldContextObject, AActor* Owner,
	TSubclassOf<UWeaponObject> Class)
{
	if (!WorldContextObject || !Class) return nullptr;
	
	if (!Owner)
	{
		Owner = Cast<AActor>(WorldContextObject);
	}
	if (!Owner)
	{
		return nullptr;
	}
	
	UWeaponObject* Obj = NewObject<UWeaponObject>(Owner, Class);
	Obj->Initialize(Owner);
	Obj->SetOwner(Owner);
	return Obj;
}


