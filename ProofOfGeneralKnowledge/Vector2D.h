#pragma once
#include "VectorD.h"
class Vector2D: public VectorD
{
public:
	Vector2D() :Y(0.0f) { X = 0.0f;};
	Vector2D(float XValue, float YValue) :Y(YValue) { X = XValue;};
protected:
	float Y;
public:
	float getY();
	std::string typeOfVector() override;
	void printClassName() override;
	Vector2D operator+(const Vector2D& vec) const;
	void printString() override;
};

