#pragma once
#ifndef BOMBERSHIP_H
#define BOMBERSHIP_H

#include "Spaceship.h"

class Bombership : public Spaceship
{
public:
	Bombership();
	Bombership(
		const std::string& name,
		const Vector3& pos,
		const Vector3& vel,
		int fuel,
		int damage,
		int numBombs);

	void dropBomb();

private:
	int mNumBombs;
};

#endif // !BOMBERSHIP_H
