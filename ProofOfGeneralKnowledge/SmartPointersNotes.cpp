#include "SmartPointersNotes.h"
#include <memory>
void UniquePointerDemo()
{
	/*
		Unique Pointers are smart pointers meaning once they go out of scope they are automatically deleted and free memory
		Unique pointers are also used to be unique in that they are the only pointer to point to that memory address
		Unique pointers help make sure that undefined behavior does not happen by having two pointers try to free the same memory address
	*/

	// Two ways to make a unique pointer 
	std::unique_ptr<Entity> entity(new Entity());
	std::unique_ptr<Entity> entity2 = std::make_unique<Entity>(); // considered the better way due to exception safety and helps prevent memory leaks

	//Can use them like normal pointers
	entity->Print();
}

void SharedPointerDemo()
{
	/*
		Shared Pointers are smart pointers meaning once they go out of scope they are automatically deleted and free memory
		Shared pointers work in that they allow for multiple pointers to address a specific block of memory
		Shared pointers work by making a count controller where each pointer to a specific memory incremented the counter and once that counter hits 0 only then
		will the memory be freed
	*/

	// This example will create a single entity in the beginning on line 30 creating the control block, increment the controller at line 32 but
	// not free the memory and destroy the Entity until line 42

	std::shared_ptr<Entity> sharedEn = std::make_shared<Entity>();
	{
		std::shared_ptr<Entity> sharedEn2 = sharedEn;
	}

	// This example will create the Entity on line 39 but destroy it on line 41 bcause weak pointers do not increment the control block
	std::weak_ptr<Entity> weakptr;
	{
		std::shared_ptr<Entity> sharedw = std::make_shared<Entity>();
		std::shared_ptr<Entity> wshare = sharedw;
	}
}
