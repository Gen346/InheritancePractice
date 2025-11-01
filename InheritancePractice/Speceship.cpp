#include "Spaceship.h"

Spaceship::Spaceship()
{
	mName = "Default";
	mPosition = Vector3(0.0f, 0.0f, 0.0f);
	mVelocity = Vector3(0.0f, 0.0f, 0.0f);
	mFuelLevel = 100;
	mDamage = 0;
}

Spaceship::Spaceship(const std::string& name, const Vector3& pos, const Vector3& vel, int fuel, int damage)
{
	mName = name;
	mPosition = pos;
	mVelocity = vel;
	mFuelLevel = fuel;
	mDamage = damage;
}

void Spaceship::fly()
{
	std::cout << "Spaceship is flying\n";
}

void Spaceship::printStats()
{
	{
		// Print out ship statistics.
		std::cout << "==========================" << std::endl;
		std::cout << "Name = " << mName << std::endl;
		std::cout << "Position = " << mPosition << std::endl;
		std::cout << "Velocity = " << mVelocity << std::endl;
		std::cout << "FuelLevel = " << mFuelLevel << std::endl;
		std::cout << "Damage = " << mDamage << std::endl;
	}
}
