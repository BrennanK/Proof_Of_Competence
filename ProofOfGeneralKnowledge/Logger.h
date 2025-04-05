#pragma once
#include <iostream>


//int Log::timesLogged=0;
enum Level
{
    LevelWarning, LevelError, LevelInfo
};
class Log
{
public:

private:
    Level m_LogLevel;
    static int timesLogged;
public:
    void WarningLevel(Level level);
    void Warn(const char* message);
    void Error(const char* message);
    void Info(const char* message);
    static void GetTimesLogged();
    int staticLocalExample();
};