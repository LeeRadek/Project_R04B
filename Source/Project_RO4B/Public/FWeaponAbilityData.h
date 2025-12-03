#pragma once

#include "ModuleLogicObject.h"
#include"ERarity.h"
#include "FWeaponAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAbilityData
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	FName WeaponName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	TSubclassOf<class UGameplayAbility> WeaponAbilityClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	TArray<UModuleLogicObject*> WeaponModules;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	UTexture2D* WeaponIcon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	ERarity WeaponRarity;
	
	FWeaponAbilityData()
	{
		
	}

};