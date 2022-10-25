#include "Car.h"
#include "Logger.h"
#include "termcolor.hpp"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car(&logger);
	car.TurnLeft();
	car.TurnRight();
	car.Accelerate();
	std::cout << termcolor::reset;
	logger.Log("Exiting application");
}
