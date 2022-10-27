#include "FuelGauge.h"

#include "Logger.h"
#include "../lib/termcolor.hpp"

#include <iostream>

FuelGauge::FuelGauge(Color logColor)
	: fuelLevel(5), logger(new Logger(logColor))
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
