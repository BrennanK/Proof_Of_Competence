#pragma once
/*
Namespaces exist mostly to prevent naming conflicts and are similar to classes but do not have access modifiers

This is useful for preventing symbol conflicts with written code and libraries

Using the line using namespace x allows for shortening syntax fro x::function() to  
*/
#include <iostream>
#include "MacroEx.h"
namespace LoggerSpace
{
	void cout(const char* value)
	{
		std::cout << "This is a namespace print of value: " << value << std::endl;
	}
	
	int g = 0;
}

// Example below will use cout from std and cout from namespace as example

void NamespaceExample()
{
	using namespace LoggerSpace;
	LoggerSpace::cout("hello");
	cout("Friend");
	LOG(LoggerSpace::g);
	std::cout << "Safari" << std::endl;
}