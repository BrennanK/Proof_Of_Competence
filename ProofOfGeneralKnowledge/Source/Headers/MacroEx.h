#pragma once
#include <iostream>
#include <string>

/*
* Below is a macro defienition in which we can define a preprocessor command to replace specific keywords with code to make certain actions easier
* the ifdef wrapper allows for the code to be excluded from the release build which is handy for excluding debugging code from release
*/

#ifdef _DEBUG
#define LOG(x) MacroPrint(x)
#else
#define LOG(x)
#endif


template<typename PV>
void MacroPrint(PV Value)
{
	std::cout << Value << std::endl;
}