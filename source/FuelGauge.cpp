#include "FuelGauge.h"

#include "Logger.h"

FuelGauge::FuelGauge(ILogger* logger)
	: fuelLevel(5)
	, logger(logger)
{
}

void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log("Low fuel!");
	}
}
