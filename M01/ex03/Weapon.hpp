#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
		const std::string getType(void);
		void setType(std::string newType);
		Weapon(std::string newType);
		Weapon(void);
		~Weapon(void);
	private :
		std::string type;
};

#endif
