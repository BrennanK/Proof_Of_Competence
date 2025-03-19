#include "MorphGun.h"
#include <iostream>
MorphGun::MorphGun()
{
	AmmoCount = 50;
	CurrentMode = Shotgun;

	std::cout << "MorphGun created" << std::endl;
}

MorphGun::~MorphGun()
{
	std::cout << "MorphGun destroyed" << std::endl;
}



const char* MorphGun::GetGunType()
{
	switch (CurrentMode)
	{
	case Shotgun:
		return "Shotgun";
		break;
	case AssultRifle:
		return "Assult Rifle";
		break;
	case MachineGun:
		return "Machine Gun";
		break;
	case RocketLauncher:
		return "Peacemaker";
		break;
	default:
		return "Morph Gun";
		break;
	}
}

void MorphGun::SetType(GunType& type)
{
	CurrentMode = type;
}
