#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " destructor called" << std::endl;
	return ;
}
