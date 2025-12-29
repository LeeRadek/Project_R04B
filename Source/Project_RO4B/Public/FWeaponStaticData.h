#pragma once

#include"ERarity.h"
#include "FWeaponStaticData.generated.h"

class UWeaponObject;

USTRUCT(BlueprintType)
struct FWeaponStaticData
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
	
	FWeaponStaticData()
	{
		WeaponName = FName("DefaultWeapon");
		WeaponDescription = FText::FromString("Default Weapon Description");
		WeaponIcon = nullptr;
		WeaponRarity = ERarity::Common;
		WeaponClass = nullptr;
	}

};