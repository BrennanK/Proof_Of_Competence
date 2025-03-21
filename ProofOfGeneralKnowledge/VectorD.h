#pragma once
#include <iostream>
class VectorD
{
public:
	VectorD() = default;
	VectorD(float XValue);
protected:
	float X;
public:
	float getX();
	virtual std::string typeOfVector();
};

