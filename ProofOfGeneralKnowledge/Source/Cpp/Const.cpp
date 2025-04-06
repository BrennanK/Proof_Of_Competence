#include "../Headers/Const.h"

void ConstDemo()
{
	const int TOP_SPEED = 120; // By declaring const keyword we make a promise not to modify the variable

	// TOP_SPEED=150; // THis line would not compile

	int* a = (int*) & TOP_SPEED; // You can use pointer casting to get around the const keyword

	// Const with pointer has a different meaning depending on where the const keyword is placed

	const int* v = a;
	//*v = 300; Putting const before the pointer makes it so that the value in the memory address cannot be modified but the memory address can

	int* const p = new int;

	*p = 300;
	//p = a; //Putting const after the pointer does opposite allowing for the value in the memory adress to be modified but no the memory adress itself

	delete p;
}
