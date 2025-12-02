// Fill out your copyright notice in the Description page of Project Settings.


#include "TwinstickLibrary.h"


UModuleLogicObject* UTwinstickLibrary::CreateModule(AActor* WorldContextObject, AActor* Owner, TSubclassOf<UModuleLogicObject> Class)
{
	if (!WorldContextObject || !*Class) return nullptr;
	
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
