#pragma once
#include <array>
#include "MacroEx.h"
void StdArrayExample();
template<size_t T>
void PrintArray(const std::array<int, T>& arr)
{

	for (int b : arr)
	{
		LOG(b);
	}
};