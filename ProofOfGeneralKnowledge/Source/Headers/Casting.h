#pragma once
void CastingNotes()
{
	//Types of Casting

	//Implicit means you don't specify the compiler does it automatically
	int a = 4;
	double b = a;

	//Explicit means you do specify the type

	int c = 45;
	double d = (double)c; // C style cast

	double s = static_cast<int>(c); // C++ style cast that does compile time type checking to to see if the object type can be cast but does not do run time checking
}