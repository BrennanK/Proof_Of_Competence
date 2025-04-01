#include "Entity.h"
#include <iostream>
Entity::Entity()
{
	std::cout << "Entity created" << std::endl;
}

Entity::~Entity()
{
	std::cout << "Entity destroyed" << std::endl;
}

void Entity::Print()
{

}
