#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{
	Zombie *horde = zombieHorde(5, "Stephane");

	horde[1].announce();
	horde[0].announce();
	horde[4].announce();

	delete [] horde;
}
