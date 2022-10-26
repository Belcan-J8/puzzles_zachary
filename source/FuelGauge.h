#pragma once

// Forward declarations
class ILogger;

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
};
