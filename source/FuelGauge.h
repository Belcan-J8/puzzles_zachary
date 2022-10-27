#pragma once

// Forward declarations
class ILogger;
enum class Color;

class FuelGauge
{
public:
	FuelGauge(Color logColor);
	void DecrementFuelLevel();
	
private:
	int fuelLevel;
	ILogger* logger;
};
