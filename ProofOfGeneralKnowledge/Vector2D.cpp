#include "Vector2D.h"

Vector2D::Vector2D(float XValue, float YValue)
{
    X = XValue;
    Y = YValue;
}

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
