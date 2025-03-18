#include "Logger.h"

void Log::WarningLevel(Level level)
{
	m_LogLevel = level;
}

void Log::Warn(const char* message)
{
	if (m_LogLevel >= Level::LevelWarning)
	{
		std::cout << "[Warning]: " << message << std::endl;
		timesLogged++;
	}
}

void Log::Error(const char* message)
{
	if (m_LogLevel >= Level::LevelError)
	{
		std::cout << "[Error]: " << message << std::endl;
		timesLogged++;
	}
}

void Log::Info(const char* message)
{
	if (m_LogLevel >= Level::LevelInfo)
	{
		std::cout << "[Info]: " << message << std::endl;
		timesLogged++;
	}
}

void Log::GetTimesLogged()
{
	std::cout<<"Number of times Logged is: "<<timesLogged<<std::endl;
}


