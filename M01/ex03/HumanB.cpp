#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_Weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	if (_Weapon)
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	else
		std::cout << _name << " does not have any weapon" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &NewWeapon)
{
	_Weapon = &NewWeapon;
}