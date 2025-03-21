#pragma once
#include "Vector2D.h"
class Vector3D: public Vector2D
{
public:
	Vector3D(float XValue, float YValue, float ZValue);
protected:
	float Z;
public:
	float getZ();
	std::string typeOfVector() override;
};

