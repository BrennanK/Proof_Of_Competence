#pragma once
#include "Entity.h"
class ScpPointer
{
private:
	Entity* examplePointer;

public:
	ScpPointer(Entity* value);
	~ScpPointer();
	Entity* getEntity();
	Entity* operator->();
};
void StackNotes();
void ArrowOperatorExample();
int OffsetInMemoryExample();
void StackVsHeap();