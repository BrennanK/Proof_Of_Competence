// ProofOfGeneralKnowledge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Debugger_Practice.h"
#include "Pointers.h"
#include "Player.h"
int main()
{
    //useAPointer();
    //int v = 5;

    //PassByPointer(&v);
    //std::cout << v << std::endl;
    
    //PassByReference(v);
    //std::cout << v << std::endl;

    Player p;

    int px = 100;
    int py = 200;
    int pz = 300;
    
    p.setX(px);
    p.setY(py);
    p.setZ(pz);

    std::cout << p.getAxis('x') << ", " << p.getAxis('y') << ", " << p.getAxis('z') << std::endl;

    
    std::cin.get() ; //
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
