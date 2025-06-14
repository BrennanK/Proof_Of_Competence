#pragma once
#include <iostream>

class MoveString
{
public:
	MoveString() = default;
	MoveString(const char* data)
	{
		printf("Created!\n");
		m_Size = strlen(data);
		m_Data = new char[m_Size+1];
		m_Data[m_Size] = 0;
		memcpy(m_Data, data, m_Size + 1);
	}

	MoveString(const MoveString& c_Data)
	{
		printf("Copied!\n");
		m_Size = c_Data.m_Size;
		m_Data = new char[m_Size + 1];
		m_Data[m_Size] = 0;
		memcpy(m_Data, c_Data.m_Data, m_Size + 1);
	}

	MoveString(MoveString&& rv_Data) noexcept // This the mov constructor and the point of this is to transfer ownership of an object 
	{
		printf("Moved!\n");
		m_Size = rv_Data.m_Size;
		m_Data = rv_Data.m_Data; // In this case instead of creating new memory we are basically making a pointer to a pointer in memory
		m_Data[m_Size] = 0;
		
		rv_Data.m_Size = 0; // In a move constructor we do have to set the pointer to null and 0 out the size
		rv_Data.m_Data = nullptr;
	}

	MoveString& operator=(MoveString&& other) noexcept // This is the assignment operator for moving data which allows us to reassign a value 
	{													// without allocating new memory
		printf("Assigned!\n");

		if (this != &other)
		{
			delete[] m_Data; // This frees the old memory that was in place 

			m_Size = other.m_Size;
			m_Data = other.m_Data; // In this case instead of creating new memory we are basically making a pointer to a pointer in memory
			

			other.m_Size = 0; // In a move constructor we do have to set the pointer to null and 0 out the size
			other.m_Data = nullptr;
		}
		return *this;
	}

	~MoveString()
	{
		printf("Destroyed!\n");
		delete m_Data;
	}

	void Print()
	{
		for (uint32_t i = 0; i < m_Size; i++)
		{
			printf("%c", m_Data[i]);
		}

		printf("\n");
	}

private:
	char* m_Data;
	uint32_t m_Size;
};

class MoveEntity
{
public:
	MoveEntity(const MoveString& string_Name):name(string_Name)
	{

	}

	MoveEntity(MoveString&& rv_Name) :name((MoveString&&)rv_Name)
	{

	}

	void PrintName()
	{
		name.Print();
	}
private:
	MoveString name;
};

void executeMoveStringExample()
{
	//MoveEntity move(MoveString("Safari"));
	//move.PrintName();

	//MoveString temp = "Hello";
	//MoveString temp2 = (MoveString&&)temp; // This is the static way of performing a move operation to not have a copy occur
	//MoveString temp2=std::move(temp); // This is the dynamic way where it will figure out object typing at runtime
	//temp2 = std::move(temp);
	//temp2 = temp;

	MoveString apple = "Apple";
	MoveString dest;

	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();

	dest = std::move(apple);

	std::cout << "Apple: ";
	apple.Print();
	std::cout << "Dest: ";
	dest.Print();
}