// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_RO4B_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Health)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxHealth)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Damage)


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MovementSpeed)
};
