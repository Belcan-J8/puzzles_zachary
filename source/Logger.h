#pragma once

#include <string>

struct ILogger
{
	virtual void Log(const std::string& string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(const std::string& string) override;
};

class BlueLogger : public ILogger
{
public:
	void Log(const std::string& string) override;
};

class RedLogger : public ILogger
{
public:
	void Log(const std::string& string) override;
};

