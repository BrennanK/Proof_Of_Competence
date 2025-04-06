#pragma once
#include "Vector2D.h"
class Vector3D: public Vector2D
{
public:
	Vector3D(float XValue, float YValue, float ZValue) : Z(ZValue) { X = XValue; Y = YValue;};
protected:
	float Z;
public:
	float getZ();
	std::string typeOfVector() override;
	void printClassName() override;
	Vector3D operator+(const Vector3D& vec) const;
	void printString() override;

	
};
std::ostream& operator<<(std::ostream& stream, Vector3D& vec); // Impotant note this must be declared outside the class for thiss to work

