#include "FuelGauge.h"

#include "Logger.h"
#include "termcolor.hpp"

#include <iostream>

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
		std::cout << termcolor::red;
		logger->Log("Low fuel!");
	}
}
