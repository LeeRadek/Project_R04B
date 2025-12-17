// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "TwinstickASC.generated.h"

/**
 * 
 */
UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECT_RO4B_API UTwinstickASC : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "TwinAbility")
	FGameplayAbilityTargetDataHandle TargetData;
	
};
