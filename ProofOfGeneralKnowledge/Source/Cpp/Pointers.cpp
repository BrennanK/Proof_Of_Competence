#include "../Headers/Pointers.h"

void useAPointer()
{
	int x = 4;
	int* ptr = nullptr;
	ptr = &x;
	int* ptr2 = &x+1;
	*ptr = 5;
	*ptr2 = 6;

	*ptr2 = 13;
}

void basicReference()
{
	int var = 8;

	int& ref = var; // This allows us to create a reference to a variable without creating a new variable to act as a pointer
}

void PassByPointer(int* value)
{
	(*value)+= 3; // Parenthesis needed to dereference the pointer before adding
}

void PassByReference(int& value)
{
	value--; // Pass by reference to avoid the need to dereference
}
