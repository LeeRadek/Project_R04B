#pragma once

UENUM(BlueprintType)
enum class ERarity : uint8
{
	Common = 0 UMETA(DisplayName = "Common"),
	Rare = 1 UMETA(DisplayName = "Rare"),
	Epic = 2 UMETA(DisplayName = "Epic") ,
	Legendary = 3 UMETA(DisplayName = "Legendary"),
	Unique = 4 UMETA(DisplayName = "Unique")
};
