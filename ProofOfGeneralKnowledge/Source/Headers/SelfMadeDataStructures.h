#pragma once
#include <iostream>
#include "MacroEx.h"
struct Velocity3D
{
	float x, y, z;
};

template <typename Type,size_t s>
class SM_Array
{
private:
	Type m_Array[s];
public:
	constexpr size_t Size() const { return s; }; // constexpr is a keyword that allows for a function or variable to be evaluated at
	Type& operator[](size_t index)
	{
		return m_Array[index];
	}
	
	 const Type& operator[](size_t index) const // the 1st const makes sure that the value will be read oSnly, while the 2nd const allows us call a function on a read-only value
	{
		return m_Array[index];
	}
	 Type* data() { return m_Array; }
	
};

void SelfMadeStructureExample()
{
	SM_Array<int, 3> myInts;

	static_assert(myInts.Size() < 10, "The data size is too big"); // One method of evaluating at runtime

	LOG(myInts.Size());

	myInts[0] = 0;

	LOG(myInts[0]);

	const auto& customeArrayRef = myInts;

	myInts[1] = 12;

	LOG(customeArrayRef[1]);

	memset(&myInts[0], 0, myInts.Size() * sizeof(int));
	for (size_t i = 0; i < myInts.Size(); i++)
	{
		LOG(myInts[i]);
	}
}