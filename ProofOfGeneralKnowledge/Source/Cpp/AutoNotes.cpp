#include "../Headers/AutoNotes.h"
#include <vector>
#include "../Headers/MacroEx.h";
void AutoNotes()
{
	// The auto keyword allows for weak typing or for the compiler to figure out the typing

	//Example int a=5 could be written as 

	auto a = 5;

	/*
		Something to keep in mind is that while auto is nice for readability don't go crazy

		Another aspect is that while the auto keyword helps with variable declaration you can still only use methods associated with that type
	*/

	// Auto is also useful for shortening long type declarations like iterators

	std::vector<bool> bools;

	bools.push_back(false);
	bools.push_back(true);

	// This is a large initializer for an iterator that can be shortened using the auto keyword
	for (std::vector<bool>::iterator it = bools.begin(); it != bools.end(); it++)
	{
		LOG(*it);
	}

	for (auto it = bools.begin(); it != bools.end(); it++)
	{
		LOG(*it);
	}
}