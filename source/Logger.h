#pragma once

#include <string>

enum class Color
{
	RESET,
	YELLOW,
	CYAN,
	MAGENTA
};

struct ILogger
{
	virtual void Log(const std::string& string) = 0;
};

class Logger : public ILogger
{
public:
	Logger(Color logColor);
	void Log(const std::string& string) override;

private:
	Color logColor;
};

