#include "Vector3D.h"

Vector3D::Vector3D(float XValue, float YValue, float ZValue)
{
	X = XValue;
	Y = YValue;
	Z = ZValue;
}

float Vector3D::getZ()
{
	return Z;
}

std::string Vector3D::typeOfVector()
{
	return "I am three dimensional";
}

void Vector3D::printClassName()
{
	std::cout << "Vector 3D Class" << std::endl;
}
