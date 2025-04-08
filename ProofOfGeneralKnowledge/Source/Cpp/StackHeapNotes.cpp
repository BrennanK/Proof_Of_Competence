#include "../Headers/StackHeapNotes.h"




ScpPointer::ScpPointer(Entity* value):examplePointer(value)
{
	//::cout << "ScpPointer created" << std::endl;
}



ScpPointer::~ScpPointer()
{
	delete examplePointer;
	//std::cout << "ScpPointer destroyed" << std::endl;
}

Entity* ScpPointer::getEntity()
{
	return examplePointer;
}

Entity* ScpPointer::operator->()
{
	return examplePointer;
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

void ArrowOperatorExample()
{
	ScpPointer ptr = new Entity();

	// We could simply access the entity pointer through some bulky means like the below commented line but this is bulky
	//ptr.getEntity()->Print();

	//Instead we can overload the arrow operator -> and get a shorter cleaner result
	ptr->Print();
}

// This is a fun little trick with the arrow operator that lets you see the offset in memory between variables which can be useful for serialization
int OffsetInMemoryExample()
{
	int offset = (int)&((OffsetEx*)nullptr)->c;
	return offset;
}

void StackVsHeap()
{
	/*
		Stack Allocation: If we run this through the debugger and look in memory we will find that stackVal and stackVal2 are sequential in memory.

		Stack vs Heap memory setup:
			1) Stack is a predefined section of memory in our RAM with a max size 2MB though it my be different depends on cpu and all variable on it are placed sequentially
				this is what helps with making stack memory fast as it only needs 1 instruction call to go down the line and once memory needs to be freed it just moves back up the stack

			2) Heap is also a predefined section of memory although it simply has a starting size and can continue to grow with our program up until we run out or cause overflow.
				Heap is considered slower in terms of data as the normal behavior is to just simply find a space in memory with no relation to others which is why we have to use delete/free in order to free the memory

	*/
	float stackVal = 45.9174f;
	float stackVal2 = 0.0f;

	float* heapVal = new float;
	*heapVal = 78.09f;

	float* heapVal2 = new float;
	*heapVal2 = 190.32f;

	delete heapVal;
	delete heapVal2;
}


