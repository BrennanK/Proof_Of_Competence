#include "Entity.h"
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
	std::cout << "Entity says Hello" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const OffsetEx& offset)
{
	return stream << "X: " << offset.a << " Y: " << offset.b << " Z: " << offset.c << std::endl;		
}
