#include "Instantiate.h"
#include <iostream>
#include <string>
class JetBoard
{
private:
	int speed;
	int M_SPEED;
public: 
	JetBoard() :speed(10),M_SPEED(100) {};
	explicit JetBoard(int& mphs): speed(mphs),M_SPEED(120) {};
	JetBoard(int& mph,int& max) : speed(mph),M_SPEED(max) {};
	int GetSpeed() const { return speed;};
	void SetSpeed(int& spvalue) { speed = spvalue;};
	int GetMSpeed() const { return M_SPEED; };
	void SetMSpeed(int& mpvalue) { M_SPEED = mpvalue;};
};

void CreateAndInstantiateObjectDemo()
{
	int currentSpeed = 90;
	// Examples of Stack Allocation for Objects, where j1 and j2 will live as long as this method and be cleaned up automatically 
	JetBoard j1;
	JetBoard j2 = JetBoard(currentSpeed,currentSpeed);

	// Example of Heap Allocation, where j3 will live as long as the program or until manually deleted/freed
	JetBoard* j3 = new JetBoard(currentSpeed,currentSpeed);
	//JetBoard j3 = new JetBoard(currentSpeed); // This line will have an error as the usage of the new keyword can only be use to create a pointer
	
	std::cout << "[Board 1]" << j1.GetSpeed() << std::endl;
	std::cout << "[Board 2]" << j2.GetSpeed() << std::endl;
	
	std::cout << "[Board 3]" << (*j3).GetSpeed() << std::endl; // One way of dereferencing a pointer
	std::cout << "[Board 3]" << j3->GetSpeed() << std::endl; // Preferred way of dereferencing a pointer

	int MAX_SPEED = 140;

	delete j3; // freeing j3 memory from the heap

	j1.SetSpeed(MAX_SPEED);

	std::cout << "[Board 1]" << j1.GetSpeed() << std::endl;
	std::cout << "[Board 2]" << j2.GetSpeed() << std::endl;

	j2.SetSpeed(currentSpeed);
}

void NewRules()
{
	/*
		Usage of the new Keyword does the following
		1) Calls C method malloc to allocate memory for our pointer
		2) For objects calls the constructor for the object
		3) For array initialization instead of finding in ths case 25 4 byte block memory addreses lined up it instead finds a single 100 byte block instead with a single memory address 
	*/
	float f = 48.025f;

	float* fp = new float; 

	*fp = f;

	JetBoard* jArray = new JetBoard[25];

	std::cout << *fp << std::endl;

	std::cout << sizeof(JetBoard) * 25 << " bytes" << std::endl;

	/*
		Usage of the delete Keyword does the following
		1) Calls C method free to de-allocate memory for our pointer
		2) For objects calls the destructor for the object
		3) For array initialization instead of doing a simple "delete" we do a "delete[]" to designate an array of memory to be deallocated
	*/


	delete fp;
	delete[] jArray;

	std::cout << "End method" << std::endl;
}
void ImplicitAndExplicit()
{
	// Implicit conversion allows for alternative shorthand ways to initialize objects examples below
	int a = 80;
	int b = 300;
	
	JetBoard j(a, b);

	//JetBoard j2 = a; by putting explicit in front of the constructor we disable implicit conversion for that construct making the below statement have a compile error
	JetBoard j2(b); // This method of instantiation is still fine
	JetBoard j3 = (JetBoard)b; // Casting method also works
}