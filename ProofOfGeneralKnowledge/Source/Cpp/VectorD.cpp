#include "../Headers/VectorD.h"



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

VectorD VectorD::operator+(const VectorD& vec) const
{
    return X + vec.X;
}

void VectorD::printString()
{
    std::cout << "Vector X: " << X << std::endl;
}
