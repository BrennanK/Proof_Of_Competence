#pragma once
#include <memory>
#include "MacroEx.h"
#include "TimingNotes.h"

/*
	Going into disasssembly mode also helps you can do this by:
		1) Set a breakpoint
		2) Run in debug mode or release mode
		3) Hit Ctrl+Alt+D or use Debug>Windows>Disassembly
*/

void BenchMethod1() // Make sure to check code speed by changing mode from Debug to Release for more consistent results
{
	Timer* t = new Timer();
	int value = 0;
	for (int i = 0; i < 1000000; i++)
	{
		value += 2;
	}

	LOG(value);
	delete t;
	__debugbreak();
}