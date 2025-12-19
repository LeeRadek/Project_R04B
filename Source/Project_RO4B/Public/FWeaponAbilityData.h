#pragma once

#include"ERarity.h"
#include "FWeaponAbilityData.generated.h"

class UWeaponObject;

USTRUCT(BlueprintType)
struct FWeaponAbilityData
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	FName WeaponName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	FText WeaponDescription;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	UTexture2D* WeaponIcon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	ERarity WeaponRarity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Ability Data")
	TSubclassOf<UWeaponObject> WeaponClass;
	
	FWeaponAbilityData()
	{
		
	}

};