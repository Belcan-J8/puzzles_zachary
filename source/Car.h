#pragma once

#include "FuelGauge.h"

// Forward declarations
class ILogger;
enum class Color;

class Car
{
public:
	Car(Color logColor);
	void TurnLeft();
	void TurnRight();
	void Accelerate();
	
private:
	FuelGauge fuelGauge;
	ILogger* logger;
};
