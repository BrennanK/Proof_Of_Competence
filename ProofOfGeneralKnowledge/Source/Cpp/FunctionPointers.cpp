#include "../Headers/FunctionPointers.h"
#include "../Headers/MacroEx.h"
void FunctionPointerExample()
{
	int g = 10;
	// Multiple ways of writing function pointers
	
	//void(*function) = PrintSomething; is one way
	
	auto function = PrintSomething; // This the 2nd way

	function();

	typedef void(*PrintingAnInt)(int&);
	PrintingAnInt printI = PrintInt;
	printI(g);
	g = 27;
	PassFunctionExample(printI, g);
}

void PrintSomething()
{
	LOG("Words");
}

void PrintInt(int& a)
{
	LOG(a);
}

void PassFunctionExample(void(*func)(int& a), int& a)
{
	func(a);
}
