#include "../Headers/LambdaNotes.h"
#include "../Headers/MacroEx.h"
void LambdaNotes()
{
	int lamval = 100;
	int modifier = 4;
	// Shorthand most basic version of a lambda expression
	// The [] symbol allows us to pass in variables from outside the lambda expression these can be done the same way as parameters in a function
	//	by value or reference
	auto lambda = [&modifier](int& value) {value *= modifier; LOG(value); };
	lambda(lamval);

	// Lambdas are very similar to function pointers in a sense that it also allows us to pass functions as parameters
	// Lambda expressions are basically ways in which we can have a fuction without necessarily defining a symbol for it

	//Example

	FunctionPasser([]() {LOG("We are passing in a Lambda function to print this statement"); });
	FunctionPasser([]() {int a = 3; int b = 36; int c = a + b; LOG(c); });
	
}

void FunctionPasser(void(*lamb)())
{
	lamb();
}
