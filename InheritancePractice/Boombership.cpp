#include "Boombership.h"

Bombership::Bombership()
{
	mName = "Default";
	mPosition = Vector3(0.0f, 0.0f, 0.0f);
	mVelocity = Vector3(0.0f, 0.0f, 0.0f);
	mFuelLevel = 100;
	mDamage = 0;
	mNumBombs = 0;
}

Bombership::Bombership(const std::string& name, const Vector3& pos, const Vector3& vel, int fuel, int damage, int numBombs)
	:Spaceship(name, pos, vel, fuel, damage),
	mNumBombs(numBombs)
{}

void Bombership::dropBomb()
{
	if (mNumBombs > 0)
	{
		std::cout << "Dropping bomb.\n";
		--mNumBombs;
	}
	else
	{
		std::cout<<"Out of bombs.\n";
	}
}
