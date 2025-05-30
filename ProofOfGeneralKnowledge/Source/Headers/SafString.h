#pragma once
#include <string>
#include <iostream>
void demoString(std::string& svalue);
class SafString
{
private:
	char* m_String;
	unsigned int bufferSize;

public:
	SafString(const char* s_value);
	SafString(const SafString& saf); // Copy constructor
	~SafString();

	friend std::ostream& operator<<(std::ostream& stream, const SafString& string);
	char& operator[](unsigned int index);
};
void demoSelfMadeStringClass();

