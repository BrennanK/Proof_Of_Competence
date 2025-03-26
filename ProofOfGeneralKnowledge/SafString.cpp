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
}