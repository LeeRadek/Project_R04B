// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModuleLogicObject.generated.h"

/**
 * 
 */
UCLASS(Blueprinttype, Blueprintable)
class PROJECT_RO4B_API UModuleLogicObject : public UObject
{
	GENERATED_BODY()
	
public:
	
	UModuleLogicObject();
	
	//The actor that owns this module
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Module")
	AActor* OwnerActor;
	
	//Initialize the module with its owner actor
	UFUNCTION(BlueprintCallable, Category = "Module")
	void Initialize(AActor* Owner)
	{
		OwnerActor = Owner;
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Module")
	FName ModuleName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Module")
	FText ModuleDescription;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Module")
	UTexture2D* ModuleIcon;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Module")
	FGuid ID;

public:
	
	//Override GetWorld to return the OwnerActor's world
	virtual UWorld* GetWorld() const override
	{
		return OwnerActor ? OwnerActor->GetWorld() : nullptr;
	}
	
	//Module Events
	//Called when the Gameplay Ability is executed
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Module")
	void OnExecute();
	
	//Called when the Gameplay Ability hits a target
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Module")
	void OnHit();
	
	//Called when the Gameplay Ability ends
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Module")
	void OnEnd();
	
	//Called when the module is added to the owner||created
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Module")
	void OnGranted();
	
	//Called when the module is removed from the owner||destoryed
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Module")
	void OnRemoved();
	

};
