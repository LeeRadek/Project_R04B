// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "ModuleLogicObject.h"
#include "TwinstickLibrary.generated.h"

class UWeaponObject;
class UModuleLogicObject;
/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API UTwinstickLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	///Adds a module of the specified class to the owner actor. If Owner is null, it will use the WorldContextObject's owner.
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Create Module"), Category="Module")
	static UModuleLogicObject* CreateModule (AActor* WorldContextObject, AActor* Owner, TSubclassOf<UModuleLogicObject> Class);
	
	///Creates a Weapon Object of the specified class and initializes it with the owner actor. If Owner is null, it will use the WorldContextObject's owner.
	UFUNCTION(BlueprintCallable, meta =(WorldContext="WorldContextObject", DisplayName="Create Weapon"), Category="Weapon")
	static UWeaponObject* CreateWeaponObject(AActor* WorldContextObject, AActor* Owner, TSubclassOf<UWeaponObject> Class);

};
