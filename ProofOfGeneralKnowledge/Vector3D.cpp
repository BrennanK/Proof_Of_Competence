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
