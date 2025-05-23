#pragma once
#include <any>
#include <iostream>
void StdAnyExample()
{
	// std::any allows us to store any type of data in a variable without using a list of possible types
	std::any data;

	data = 2;
	data = "Style";

	// Be aware that if you cast the type wrong it throws an exception
	std::string& str=std::any_cast<std::string&>(data);
}