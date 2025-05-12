#pragma once
#include "Entity.h"
void CastingNotes()
{
	//Types of Casting

	//Implicit means you don't specify the compiler does it automatically
	int a = 4;
	double b = a;

	//Explicit means you do specify the type

	int c = 45;
	double d = (double)c; // C style cast

	double s = static_cast<int>(c); // C++ style cast that does compile time type checking to to see if the object type can be cast but does not do run time checking
}



void DynamicCastingNotes()
{
	NPC* npc = new NPC();
	Entity* e = npc; // We can't easily go back to entity without implicit casting
	Entity* e1 = new Enemy();

	// Be aware that in order to use dynamic cast the classes musdt be marked as polymorphic, to do this add a virtual function in the parent class to create a vtable
	NPC* pointer0 = dynamic_cast<NPC*>(e1);
	NPC* pointer1 = dynamic_cast<NPC*>(e);

}