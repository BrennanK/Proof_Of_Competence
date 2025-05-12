#pragma once
#include <tuple>
#include "MacroEx.h"

std::tuple<float, int> CreateTuple()
{
	return { 3.45f,709 };
}

void StructuredBindingExample()
{
	// Tis is a structured bnding that allows us to simply return multiple values and separate them without creating an object or structure to house them
	auto [floater, value] = CreateTuple();

	LOG(floater);
	LOG(value);
}