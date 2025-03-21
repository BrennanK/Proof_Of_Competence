// ProofOfGeneralKnowledge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Logger.h"
#include "Debugger_Practice.h"
#include "Pointers.h"
#include "Player.h"
#include "MorphGun.h"
#include "Vector3D.h"

int Log::timesLogged = 0; // Have to add definition of static varaible for Log here or else it will not work

void Demonstration() // Used to show how constructor and destructor work
{
    MorphGun g1;

    GunType type = GunType::AssultRifle;

    // g1.SetType(type);

    //g1.~MorphGun(); You can manually call the destructor

    std::cout << g1.GetGunType() << std::endl;
}

void InheritanceDemo() // Demonstrates inherited variables and method by adding a new axis and value retrieval method per dimension
{
    VectorD D1 = VectorD(350.0f);
    Vector2D D2 = Vector2D(D1.getX(), 319.0f);
    Vector3D D3 = Vector3D(D2.getX(), D2.getY(), 709.4f);

    std::cout << "3D Vector values are " << D3.getX() << ", " << D3.getY() << ", " << D3.getZ() << std::endl;
}

void Print(IPrintable* obj)
{
    obj->printClassName();
}

void VirtualDemo()
{
    VectorD D1 = VectorD(350.0f);
    Vector2D D2 = Vector2D(D1.getX(), 319.0f);
    Vector3D D3 = Vector3D(D2.getX(), D2.getY(), 709.4f);

    VectorD* p1 = &D1;
    Vector2D* p2 = &D2;
    Vector3D* p3 = &D3;

   std::cout << p1->typeOfVector() <<std::endl; // Should say one dimensional
   std::cout << p2->typeOfVector() << std::endl; // Should say two dimensional
   std::cout << p3->typeOfVector() << std::endl;; // Should say three dimensional

    p2 = &D3; 
    p1 = &D2; 
    std::cout << p1->typeOfVector() << std::endl; // using overriding functionality via pollymorphism it will say two dimension even though the pointer is for a one dimensional vector
    std::cout << p2->typeOfVector() << std::endl; // using overriding functionality via pollymorphism it will say three dimension even though the pointer is for a two dimensional vector
    
    Print(p1);
    Print(p2);
    

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

    //Demonstration();

    InheritanceDemo();
    VirtualDemo();
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
