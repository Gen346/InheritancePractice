#include <iostream>

#include "Fightership.h"
#include "Boombership.h"




int main()
{
	Fightership fighter("fighter", Vector3(1, 1, 0), Vector3(1, 1, 0), 95, 100, 85);

	Bombership bomber("bomber", Vector3(1, 1, 0), Vector3(1, 1, 0), 95, 100, 85);

	fighter.printStats();
	bomber.printStats();
	std::cout << std::endl;
	fighter.fly();
	fighter.fireLaserGun();
	fighter.fireMissile();
	fighter.fireMissile();
	bomber.fly();
	bomber.dropBomb();
	bomber.dropBomb();
	return 0;
}