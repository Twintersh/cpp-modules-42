#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* tmp = new Zombie[N];
	for (int i = 0 ; i < N ; i++)
	{
		tmp[i].setName(name);
	}
	return (tmp);
}
