#include "Zombie.hpp"
#include <iostream>

void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}
