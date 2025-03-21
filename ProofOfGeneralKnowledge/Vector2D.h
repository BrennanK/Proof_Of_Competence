#pragma once
#include "VectorD.h"
class Vector2D: public VectorD
{
public:
	Vector2D() = default;
	Vector2D(float XValue,float YValue);
protected:
	float Y;
public:
	float getY();
};

