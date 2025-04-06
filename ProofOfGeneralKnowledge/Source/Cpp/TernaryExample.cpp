#include "../Headers/TernaryExample.h"
#include<string>
#include <iostream>
void EvenOrOdd(int& value)
{
	// Example of ternaryOperator using even or odd

	bool b = value % 2==0;

	std::string outValue = value % 2 == 0?"Even":"Odd";
	/*
	
	Line 10 is the same as the following in this comment block
	std::string outValue;
	if(value%2==0)
	{
		outValue="Even";
	}

	else
	{
		outValue="Odd";
	}
	
	*/
	std::cout << "the number is " << outValue << std::endl;
}