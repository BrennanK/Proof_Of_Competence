#include "../Headers/Vector3D.h"



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

Vector3D Vector3D::operator+(const Vector3D& vec) const
{
	return Vector3D(X + vec.X, Y + vec.Y, Z + vec.Z);
}

void Vector3D::printString()
{
	std::cout << "Vector X: " << X << " Y: " << Y << " Z: " << Z << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Vector3D& vec)
{
	return stream << "X: " << vec.getX() << " Y: " << vec.getY() << " Z: " << vec.getZ() << std::endl;
}
