#include "Car.h"

#include "Logger.h"
#include "termcolor.hpp"

#include <iostream>

Car::Car(ILogger* logger)
	: logger(logger), fuelGauge(FuelGauge(logger))
{
}

void Car::TurnLeft()
{
	std::cout << termcolor::blue;
	logger->Log("Turning left");
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	std::cout << termcolor::blue;
	logger->Log("Turning right");
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	std::cout << termcolor::blue;
	logger->Log("Moving ahead");
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
