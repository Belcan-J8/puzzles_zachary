#include "Car.h"
#include "Logger.h"
#include "../lib/termcolor.hpp"

int main(int argc, char* argv[])
{
	Logger logger(Color::RESET);
	logger.Log("Starting application");
	Car firstCar(Color::CYAN);
	Car secondCar(Color::MAGENTA);
	firstCar.TurnLeft();
	firstCar.TurnRight();
	firstCar.Accelerate();
	secondCar.TurnLeft();
	secondCar.TurnRight();
	secondCar.Accelerate();
	logger.Log("Exiting application");
}
