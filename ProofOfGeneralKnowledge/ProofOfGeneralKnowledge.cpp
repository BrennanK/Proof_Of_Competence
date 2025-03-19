// ProofOfGeneralKnowledge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Logger.h"
#include "Debugger_Practice.h"
#include "Pointers.h"
#include "Player.h"
#include "MorphGun.h"


int Log::timesLogged = 0; // Have to add definition of static varaible for Log here or else it will not work

void Demonstration() // Used to show how constructor and destructor work
{
    MorphGun g1;

    GunType type = GunType::AssultRifle;

    // g1.SetType(type);

    //g1.~MorphGun(); You can manually call the destructor

    std::cout << g1.GetGunType() << std::endl;
}

int main()
{
    //useAPointer();
    //int v = 5;

    //PassByPointer(&v);
    //std::cout << v << std::endl;
    
    //PassByReference(v);
    //std::cout << v << std::endl;

   /* Player p;
    Position3D ppos;
    ppos.x = 100;
    ppos.y = 200;
    ppos.z = 300;
    
    p.setPlayerPosition(ppos);

    std::cout<<"X: " << p.getPosition().x << " Y: " << p.getPosition().y << " Z: " << p.getPosition().z << std::endl;
    */

    // showcasing that we can use both static and non-static methods in a class

    //Log log; // non static instance with non-static methods

    //log.WarningLevel(Level::LevelInfo); 
    //log.Info("Hello");
    //log.Error("Hello");
    //
    //// static method and variable showcase
    //Log::GetTimesLogged();

    Demonstration();
    
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
