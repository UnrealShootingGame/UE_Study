#pragma once

UENUM(BlueprintType)
enum class EPlayerStatus : uint8
{
	EPS_Walking UMETA(DisplayName = "Walking"),
	EPS_Flying UMETA(DisplayName = "Flying"),

	EPS_MAX UMETA(DisplayName = "DefaultMax")
};