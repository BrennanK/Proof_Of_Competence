#include "Pointers.h"

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