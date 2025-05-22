#pragma once
#include "MacroEx.h"
#include <variant>

void VariantExample()
{
	// STD Variant allows for possibility of having data be multiple types below is how we can create and assign data to a variant
	std::variant <std::string, int> data;
	data = "Safari";
	data = 43;

	// How to access data from a varient
	LOG(std::get<int>(data));

	// Ways to tell type of data in variant
	int in=data.index(); // returns an size_t of what index in the list of types the variant is in this case it is 1
	auto* value = std::get_if<int>(&data);// use get_if function to return a pointer   would be nullptr if type is not matching;

	// One interesting note is that the size of a variant in memry is the total of all types listed added together
	LOG(sizeof(data));
}