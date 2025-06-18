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

/*
Goals:

Ability to resize
Constructor
Destructor
Copy
Move
*/

template<typename dt,size_t s>
class ArrayList
{
private:
	dt* m_data;
	size_t m_size;
public: 
	ArrayList() :m_size(s) { m_data = new dt[s]; };
	~ArrayList() { delete[] m_data; }; // Need to fix this so that no problem occurs in having the same memory freed twice
	ArrayList(const ArrayList& data):m_size(data.m_size)
	{
		m_data = new dt[m_size];
		memcpy(m_data, data.m_data, m_size * sizeof(dt));
		//delete[] data.m_data;
	}

public:
	size_t size() { return m_size; }
	dt& operator[](size_t index){ return m_data[index];}

	void AddIndex(dt Item)
	{
		// To DO

	}
	void PrintList()
	{
		for (size_t i = 0; i < m_size; i++)
		{
			std::cout << "List Item[" << i << "]: " << m_data[i] << "\n";
		}
	}
};

void SelfMadeStructureExample()
{
#pragma region Static_Array_Example
	SM_Array<int, 3> myInts;

	static_assert(myInts.Size() < 10, "The data size is too big"); // One method of evaluating at runtime

	//LOG(myInts.Size());

	myInts[0] = 0;

	//LOG(myInts[0]);

	const auto& customeArrayRef = myInts;

	myInts[1] = 12;

	//LOG(customeArrayRef[1]);

	memset(&myInts[0], 0, myInts.Size() * sizeof(int));
	for (size_t i = 0; i < myInts.Size(); i++)
	{
		//LOG(myInts[i]);
	}
#pragma endregion

#pragma region Array_List_Example
	ArrayList<std::string, 2>Names;
	std::cout << "The ArrayList Size is: "<<Names.size()<<"\n";
	Names[0] = "Safari";
	Names[1] = "rules";
	std::cout << "Names index 0: " << Names[0] << "\n";

	ArrayList<std::string, 2> Names2 = Names;

	LOG("Names");
	Names.PrintList();

	LOG("Names2");
	Names.PrintList();
#pragma endregion 
}

