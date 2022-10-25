#pragma once

// Forward declarations
class ILogger;

class FuelGauge
{
public:
	FuelGauge(ILogger* logger);
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
};
