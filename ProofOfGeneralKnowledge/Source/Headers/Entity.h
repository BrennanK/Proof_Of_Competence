#pragma once
#include <iostream>
class Entity
{
public:
	Entity();
	~Entity();
	void Print();
	virtual void methodForVtable() {};
};

class Enemy : public Entity
{

};

class NPC : public Entity
{

};

struct OffsetEx
{
	float a, b, c;



	OffsetEx(float av,float bv,float cv) :a(av), b(bv), c(cv)
	{

	}

	OffsetEx(const OffsetEx& off) : a(off.a),b(off.b),c(off.c)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const OffsetEx& offset);
