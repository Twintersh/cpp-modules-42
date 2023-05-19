#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
		void setWeapon(Weapon &NewWeapon);
		void attack(void);
		HumanA(std::string name, Weapon &WeaponArmed);
		~HumanA(void);
	private :
		HumanA(void){_Weapon = NULL;};
		std::string _name;
		Weapon *_Weapon;
};

#endif
