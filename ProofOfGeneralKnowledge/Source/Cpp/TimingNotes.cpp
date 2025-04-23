#include "../Headers/TimingNotes.h"

void TimingNotes()
{
	/*
	using namespace std::literals::chrono_literals;

	auto start = std::chrono::high_resolution_clock::now();

	std::this_thread::sleep_for(1s);

	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float>duration = end - start;

	LOG(duration.count());
	*/
	FunctionToTime();
}

void FunctionToTime()
{
	Timer t;
	for (int i = 0; i < 100; i++)
	{
		//std::cout << "Hi!" <<std::endl;
		std::cout << "Hi!\n";
	}
}
