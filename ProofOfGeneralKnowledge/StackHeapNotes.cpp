#include "StackHeapNotes.h"
#include <iostream>



ScpPointer::ScpPointer(Entity* value):examplePointer(value)
{
	//::cout << "ScpPointer created" << std::endl;
}



ScpPointer::~ScpPointer()
{
	delete examplePointer;
	//std::cout << "ScpPointer destroyed" << std::endl;
}


void StackNotes()
{
	int d = 35;
	// Stack memory is based on the idea of scoped lifetime called a stack frame
	// An example of this is a local variable where it is initialized in a function but is gone forever once the function call is ended 
	
	/*In the below example the Scp Pointer class variable p1 will be initialized in the curly brackets and be gone forever once those brackets end
		Below is a list of steps:
		1) Memory is allocated for p1 and the construcor is called 
		2)This initializes the entity pointr and assings a value to it on the heap
		3) When it reaches the end of the brackets the Class destructor is called 
		4) The class destructor is called and the entity pointer is deleted 
		5) This saves us the trouble of having to manually delete the pointers ourselves and leaves it up to the destructor

	*/
	{
		ScpPointer p1 = new Entity();
	}
	
}

Entity::Entity()
{
	std::cout << "Entity created" << std::endl;
}

Entity::~Entity()
{
	std::cout << "Entity destroyed" << std::endl;
}
