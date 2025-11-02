#include "Fightership.h"

Fightership::Fightership()
{
	mName = "Default";
	mPosition = Vector3(0.0f, 0.0f, 0.0f);
	mVelocity = Vector3(0.0f, 0.0f, 0.0f);
	mFuelLevel = 100;
	mDamage = 0;
	mNumMissiles = 0;
}

Fightership::Fightership(const std::string& name, const Vector3& pos, const Vector3& vel, int fuel, int damage, int numMissiles)
	:Spaceship(name, pos, vel, fuel, damage),
	mNumMissiles (numMissiles)
{}


void Fightership::fireLaserGun()
{
	std::cout << "Firing laser gun.\n";
}

void Fightership::fireMissile()
{
	if (mNumMissiles > 0)
	{
		std::cout << "Firing missile.\n";
		--mNumMissiles;
	}
	else
	{
		std::cout << "You ran out of missiles.\n";
	}
}
