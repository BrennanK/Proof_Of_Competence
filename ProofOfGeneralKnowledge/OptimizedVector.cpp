#include "OptimizedVector.h"
#include <vector>
void STDVectorNotes()
{
	/*
	
	2 optimizations can be done here:
	1) Every time we add a new element we are having to dynamically changing the size and thus reqqquiring a copy
	2) When adding an element to the vector we are having to pass an object in which makes a copy of the object to pass in

	Fixes:
	1) Since we know in this case that we will have a max size we can specify or reserve that space in memory using reserve() method
	2) We can pass the parameters for the object instead of the whole object itself using emplace_back()
	*/
	std::vector<OffsetEx>en;
	en.reserve(3);


	en.emplace_back(4,5,6);
	en.emplace_back(1,2,3);
	en.emplace_back(7,8,9);
	/*
	for (int i = 0; i < en.size(); i++)
	{
		std::cout << en[i];
	}

	en.erase(en.begin() + 1);

	//ALternative way of looping similar to for each loop in other languages
	for (OffsetEx& o : en)
	{
		std::cout << o;
	}
	*/
}
