#pragma once
#include <thread>
#include <chrono>
#include "../Headers/MacroEx.h"

/*
*	We can use std::chrono to build timer objects to measure run tim of perfromance in seconds
*/
struct Timer
{
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
	
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<float> duration = end - start;
		std::cout << duration.count()*1000 << "ms" << std::endl;
	}
};
void TimingNotes();
void FunctionToTime();