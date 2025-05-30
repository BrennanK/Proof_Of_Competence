#include "../Headers/SafString.h"
void demoString(std::string& svalue)
{
	std::string value = svalue;
	char y[7] = {'P','l','a','y','e','r','\0'};

	std::cout << value << std::endl;
	std::cout << y << std::endl;
	
	y[3] = 'Y';
	value += " start";
	std::cout << value << std::endl;

	const char* n = "Hi";

	char* b = (char*)n; // This is a way to obtain and extract the value of a const char* or string in C

	std::cout << b << std::endl; 
}

std::ostream& operator<<(std::ostream& stream, const SafString& string)
{
	stream << string.m_String;
	return stream;
}

void demoSelfMadeStringClass()
{
	SafString me = "Safari";
	SafString me2 = me;
	me[3] = 'o';
	
	// Without a proper Copy constructor when the frame ends at the end of the method the stack will try to free memory from the same location causing a crash
	std::cout << me << std::endl;
	std::cout << me2 << std::endl;
	/* Deep vs Shallow Copy
	* Shallow: A shallow copy just copies the contents of the object in this case 2 member variables and makes a basic copy with the same values as the original without doing the necessary Heap Allocation
	* Deep: Creates a new object that follows defined behavior set by the programmer in this case performed heap allocation for the char* to make sure we aren't trying to free the same memory twice
	With shallow copying any changes made to the original get applied to the copy, but with deep this not the case
	*/
}

SafString::SafString(const char* s_value)
{
	bufferSize = strlen(s_value);
	// Below Line is not guarded for a terminating character meaning that we could end up printing the string with excess random characters
	//m_String = new char[bufferSize];
	m_String = new char[bufferSize+1];
	memcpy(m_String, s_value, bufferSize);
	m_String[bufferSize] = 0;
}

SafString::SafString(const SafString& saf) : bufferSize(saf.bufferSize)
{
	m_String = new char[bufferSize + 1];
	memcpy(m_String, saf.m_String, bufferSize+1);
}

SafString::~SafString()
{
	delete[] m_String;
}

char& SafString::operator[](unsigned int index) //Used to overload the operator for returning a value at an index
{
	return m_String[index];
}


