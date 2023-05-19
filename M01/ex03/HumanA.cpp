#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponArmed) : _name(name), _Weapon(&WeaponArmed)
{
	return ;
}


HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void)
{
	if (_Weapon)
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	else
		std::cout << _name << " does not have any weapon" << std::endl;
	return ;
}

void HumanA::setWeapon(Weapon &NewWeapon)
{
	_Weapon = &NewWeapon;
}
