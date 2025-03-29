#include "Instantiate.h"
#include <iostream>
#include <string>
class JetBoard
{
private:
	int speed;
public: 
	JetBoard() :speed(10) {};
	JetBoard(int& mph) : speed(mph) { speed = mph;};
	int GetSpeed() const { return speed;};
	void SetSpeed(int& spvalue) { speed = spvalue;};
};

void CreateAndInstantiateObjectDemo()
{
	int currentSpeed = 90;
	// Examples of Stack Allocation for Objects, where j1 and j2 will live as long as this method and be cleaned up automatically 
	JetBoard j1;
	JetBoard j2 = JetBoard(currentSpeed);

	// Example of Heap Allocation, where j3 will live as long as the program or until manually deleted/freed
	JetBoard* j3 = new JetBoard(currentSpeed);
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
