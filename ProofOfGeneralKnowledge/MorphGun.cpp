#include "MorphGun.h"

MorphGun::MorphGun()
{
	AmmoCount = 50;
	CurrentMode = Shotgun;
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
