#include "FuelGauge.h"

#include "Logger.h"
#include "../lib/termcolor.hpp"

#include <iostream>

FuelGauge::FuelGauge()
	: fuelLevel(5), logger(new RedLogger())
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
