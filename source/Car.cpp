#include "Car.h"

#include "Logger.h"
#include "../lib/termcolor.hpp"

#include <iostream>

Car::Car(Color logColor)
	: logger(new Logger(logColor)),
	fuelGauge(FuelGauge(Color::YELLOW))
{
}

void Car::TurnLeft()
{
	logger->Log("Turning left");
	fuelGauge.DecrementFuelLevel();
}

void Car::TurnRight()
{
	logger->Log("Turning right");
	fuelGauge.DecrementFuelLevel();
}

void Car::Accelerate()
{
	logger->Log("Moving ahead");
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
