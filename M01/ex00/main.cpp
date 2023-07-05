#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{
	Zombie jim("yo");
	Zombie *pascal = newZombie("pascal");
	randomChump("Siphano");

	pascal->announce();
	jim.announce();
	delete pascal;
}
