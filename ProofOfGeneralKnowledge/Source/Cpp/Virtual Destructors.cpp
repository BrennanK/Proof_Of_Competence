#include "../Headers/VirtualDestructors.h"
#include "../Headers/MacroEx.h"
/*
Virtual destructors are similar to virtual methods but act a bit differently.
Virtual destructors are used to ensure that polymorphism based destruction of an object occurs.

In the example below if we did not mark the parent destructor as virtual then only the parent destructor 
is called instead of both the parent and child destructors
*/
class Parent
{

public:
	Parent()
	{
		LOG("Parent has been constructed!");
	}
virtual	~Parent()
	{
		LOG("Parent has been destroyed!");
	}
};

class Child:public Parent
{
private:
	bool* isLeak;
public:
	Child()
	{
		LOG("Child has been constructed!");
		isLeak = new bool;
	}
	~Child()
	{
		LOG("Child has been destroyed!");
		delete isLeak;
	}
};
void VirtualDestructionExample()
{
	//Parent p = Parent();
	Parent* cp = new Child();
	delete cp;
}