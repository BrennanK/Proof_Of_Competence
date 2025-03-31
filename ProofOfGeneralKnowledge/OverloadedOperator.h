#pragma once
#include "Vector3D.h"

void OperatorOverloadDemo()
{
	VectorD v1 = VectorD(90.0f) + VectorD(45.0f);
	Vector2D v2 = Vector2D(35.0f, 180.0f) + Vector2D(53.0f, 10.0f);
	Vector3D v3 = Vector3D(1.0f, 2.0f, 3.0f) + Vector3D(4.0f, 5.0f, 6.0f);

	v1.printString();
	v2.printString();
	v3.printString();

	std::cout << v3;
}