#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : type(newType)
{
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string Weapon::getType(void)
{
	return ((const std::string)Weapon::type);
}

void Weapon::setType(std::string newType)
{
	Weapon::type = newType;
}

