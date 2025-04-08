#pragma once
#include <iostream>
void TempTypeExample();

/*

Something to keep in mind is that with templates in C++ they need to be in the header file only

Templates are somewhat similar to generics in other languages but the with less work on your end
*/

template<typename T>
void PrintMultiTypes(T value)
{
    std::cout << value << std::endl;
};

// Templates can contain multiple parameters and even be used in classes and allow for custom sizing
// This is actually how many structure standard library classes are made such as std::vector and implemented

template<typename Type,int s>
class CustomArray
{
private:
    Type arr[s];

public:
     int GetSize() const { return s; };
};