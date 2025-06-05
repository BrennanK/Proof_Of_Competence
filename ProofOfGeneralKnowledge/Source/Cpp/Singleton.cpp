#include "../Headers/Singleton.h"

void someSingletonFunction()
{
	LOG("We called a Singleton Function!");
}
// It is important for LINKING that we define the static instance here so that the linker has an instance definition for the class
//SingletonExample SingletonExample::s_Instance;

// Above is one way to have an instance in static memory