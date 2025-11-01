#pragma once
#ifndef FIGHTERSHIP_H
#define FIGHTERSHIP_H

#include "Spaceship.h"

class Fightership : public Spaceship
{
public:
	Fightership();
	Fightership(
		const std::string& name,
		const Vector3& pos,
		const Vector3& vel,
		int fuel,
		int damage,
		int numMissiles);

	void fireLaserGun();
	void fireMissile();

private:
	int mNumMissiles;
};

#endif // !FIGHTERSHIP_H

