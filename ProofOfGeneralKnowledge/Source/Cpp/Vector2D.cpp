#include "../Headers/Vector2D.h"



float Vector2D::getY()
{
    return Y;
}

std::string Vector2D::typeOfVector()
{
    return "I am two dimensional";
}

void Vector2D::printClassName()
{
    std::cout << "Vector 2D Class" << std::endl;
}

Vector2D Vector2D::operator+(const Vector2D& vec) const
{
    return Vector2D(X+vec.X,Y+vec.Y);
}

void Vector2D::printString()
{
    std::cout << "Vector X: " << X <<" Y: " << Y << std::endl;
}


