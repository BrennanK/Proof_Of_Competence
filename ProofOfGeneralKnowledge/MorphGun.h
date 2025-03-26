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

	MorphGun(const GunType& gunT, const int& aCount);
private:
	int AmmoCount;
	GunType CurrentMode;

public: 
	const char* GetGunType() const;
	void SetType(GunType& type);
	const int& GetAmmoCount() const;
};