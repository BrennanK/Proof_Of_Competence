#include "../Headers/MorphGun.h"
#include <iostream>
MorphGun::MorphGun(): AmmoCount(50), CurrentMode(Shotgun)
{
	std::cout << "MorphGun created" << std::endl;
}

MorphGun::~MorphGun()
{
	std::cout << "MorphGun" << GetGunType()<<"destroyed" << std::endl;
}

MorphGun::MorphGun(const GunType& gunT, const int& aCount): AmmoCount(aCount),CurrentMode(gunT)
{
	// Be aware that when using Object initialization use Member Initializer list for initializing objects in classes 
	//because if you don't it initializes the member object twice which is a performance hit that should be avoided
}

const char* MorphGun::GetGunType() const
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

const int& MorphGun::GetAmmoCount() const
{
	return AmmoCount;
}
