// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameFramework/PlayerController.h"
#include "TwinsticPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API ATwinsticPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Data")
	FGameplayAbilityTargetDataHandle TargetData;
};
