#include "SafString.h"
#include <iostream>
void demoString(std::string& svalue)
{
	std::string value = svalue;
	char y[7] = {'P','l','a','y','e','r','\0'};

	std::cout << value << std::endl;
	std::cout << y << std::endl;
	
	y[3] = 'Y';
	value += " start";
	std::cout << value << std::endl;

	const char* n = "Hi";

	char* b = (char*)n; // This is a way to obtain and extract the value of a const char* or string in C

	std::cout << b << std::endl; 
}