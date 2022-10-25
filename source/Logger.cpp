#include "Logger.h"

#include "../lib/termcolor.hpp"
#include <iostream>

void Logger::Log(const std::string& string)
{
	std::cout << string << std::endl;
}

void BlueLogger::Log(const std::string& string)
{
	std::cout << termcolor::blue << string << std::endl;
}

void RedLogger::Log(const std::string& string)
{
	std::cout << termcolor::red << string << std::endl;
}
