#pragma once
#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Vector3.h"
#include <string>

class Spaceship
{
public:
	Spaceship();
	Spaceship(
		const std::string& name,
		const Vector3& pos,
		const Vector3& vel,
		int fuel,
		int damage);
	void fly();
	void printStats();

protected:
	std::string mName;
	Vector3 mPosition;
	Vector3 mVelocity;
	int mFuelLevel;
	int mDamage;
};

#endif // !SPACESHIP_H
