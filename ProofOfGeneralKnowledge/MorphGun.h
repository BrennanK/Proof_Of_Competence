#pragma once

enum GunType
{
	Shotgun, AssultRifle, MachineGun, RocketLauncher
};

class MorphGun
{
	

public: 
	MorphGun();
	~MorphGun();
private:
	int AmmoCount;
	GunType CurrentMode;

public: 
	const char* GetGunType();
	void SetType(GunType& type);
};