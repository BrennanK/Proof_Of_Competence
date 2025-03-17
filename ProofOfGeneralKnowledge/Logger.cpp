#include "Logger.h"

void Log::WarningLevel(int level)
{
	m_LogLevel = level;
}

void Log::Warn(const char* message)
{
	if (m_LogLevel >= LogLevelWarning)
	{
		std::cout << "[Warning]: " << message << std::endl;
	}
}

void Log::Error(const char* message)
{
	if (m_LogLevel >= LogLevelError)
	{
		std::cout << "[Error]: " << message << std::endl;
	}
}

void Log::Info(const char* message)
{
	if (m_LogLevel >= LogLevelInfo)
	{
		std::cout << "[Info]: " << message << std::endl;
	}
}
