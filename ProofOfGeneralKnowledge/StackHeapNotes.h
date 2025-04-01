#pragma once
class Entity
{
public:
	Entity();
	~Entity();
};
class ScpPointer
{
private:
	Entity* examplePointer;

public:
	ScpPointer(Entity* value);
	~ScpPointer();
};
void StackNotes();