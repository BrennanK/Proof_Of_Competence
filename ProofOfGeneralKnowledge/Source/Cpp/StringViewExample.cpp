#include "../Headers/StringViewExample.h"
#include <string>
#include "../Headers/MacroEx.h"

static uint32_t s_AllocCount = 0;

void* operator new(size_t size)
{
	s_AllocCount++;
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}

void PrintName(std::string_view value)
{
	std::cout << value << std::endl;
}

void StringViewExample()
{
	//Below commented code would allocate memory 3 times however we can avoid this by using std::view and changing it from a string to a char
	// std::string_view allows us to have a view of a pointer in memory

	//std::string name = "Safari Guy";

	//std::string firstName = name.substr(0, 6);
	//std::string lastName = name.substr(7, 9);

	const char* name = "Safari Guy";
	std::string_view firstName(name, 6);
	std::string_view lastName(name+7, 9);

	PrintName(name);
	PrintName(firstName);
	PrintName(lastName);
	std::cout << s_AllocCount << " allocations" << std::endl;

	
}
