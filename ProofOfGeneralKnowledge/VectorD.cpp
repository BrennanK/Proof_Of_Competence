#include "VectorD.h"

VectorD::VectorD(float XValue)
{
    X = XValue;
}

float VectorD::getX()
{
    return X;
}

std::string VectorD::typeOfVector()
{
    return "I am one dimensional";
}

void VectorD::printClassName()
{
    std::cout << "Vector D Class" << std::endl;
}
