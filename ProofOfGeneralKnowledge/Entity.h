#pragma once
#include <iostream>
class Entity
{
public:
	Entity();
	~Entity();
	void Print();
};

struct OffsetEx
{
	float a, b, c;
};

std::ostream& operator<<(std::ostream& stream, const OffsetEx& offset);
