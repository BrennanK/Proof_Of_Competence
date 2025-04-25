#include "../Headers/TypePunningNotes.h"
#include "../Headers/MacroEx.h"

/*
* Why does type punning exist?
* Answer: It allows us to perform raw memory operations and can help optimize by not having to perform as many memory copying and memory conversions
*/

struct Container
{
	int x, y;
};


void PunningNotes()
{
	// Type punning allows us to store the exact value of a memory address into the memory of a converted type allowing for less work due to not having to 
	// store a conversion
	int a = 50;
	double& value = *(double*)&a;

	LOG(value);

	Container c = { 12,15 };

	// You can also take structures like structs and convert them into smaller memory allocations like pointers or primitive types
	int* numbers = (int*)&c;

	LOG(numbers[0]);
	LOG(numbers[1]);

	int justY = *(int*)((char*)&c + 4);

	LOG(justY);
}
