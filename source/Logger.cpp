#include "Logger.h"

#include "../lib/termcolor.hpp"
#include <iostream>

Logger::Logger(Color logColor) :
	logColor(logColor)
{
	
}

void Logger::Log(const std::string& string)
{
	switch (logColor)
	{
		case (Color::RESET):
		{
			std::cout << termcolor::reset;
			break;
		}

		case (Color::YELLOW):
		{
			std::cout << termcolor::yellow;
			break;
		}

		case (Color::CYAN):
		{
			std::cout << termcolor::cyan;
			break;
		}

		case (Color::MAGENTA):
		{
			std::cout << termcolor::magenta;
			break;
		}

		default:
			break;
	}

	std::cout << string << std::endl;
}
