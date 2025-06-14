#pragma once
#include <iostream>

// Below is a operator overload for the new operator 
void* operator new(size_t size)
{
	//std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}
// Below is an operator overload for delete operator to see when memory is being freed
void operator delete(void* memory,size_t size)
{
	//std::cout << "Freeing " << size << " bytes\n";
	free(memory);
}

struct Object
{
	int x, y, z;
};

void memoryTrackingExample()
{
	std::string s= "Sam";

	Object* obj = new Object;
	delete obj;
}