#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
		void setWeapon(Weapon &NewWeapon);
		void attack(void);
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);
	private :
		std::string _name;
		Weapon *_Weapon;
};

#endif
