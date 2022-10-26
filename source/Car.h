#pragma once

#include "FuelGauge.h"

// Forward declarations
class ILogger;

class Car
{
public:
	Car();
	void TurnLeft();
	void TurnRight();
	void Accelerate();
	
private:
	FuelGauge fuelGauge;
	ILogger* logger;
};
