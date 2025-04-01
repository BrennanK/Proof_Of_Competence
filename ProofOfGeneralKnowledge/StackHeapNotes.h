#pragma once
#include "Entity.h"
class ScpPointer
{
private:
	Entity* examplePointer;

public:
	ScpPointer(Entity* value);
	~ScpPointer();
};
void StackNotes();