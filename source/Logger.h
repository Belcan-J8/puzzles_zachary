#pragma once

#include <string>

struct ILogger
{
	virtual void Log(const std::string& string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(const std::string& string);
};

class BlueLogger : public ILogger
{
public:
	void Log(const std::string& string);
};

class RedLogger : public ILogger
{
public:
	void Log(const std::string& string);
};

