#pragma once
#include <iostream>

class Log
{
public:
	const int LogLevelWarning = 0;
	const int LogLevelError = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel=LogLevelInfo;
public:
	void WarningLevel(int level);
	void Warn(const char* message);
	void Error(const char* message);
	void Info(const char* message);
};