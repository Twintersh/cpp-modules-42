#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private :
		FragTrap(void);

	public :
		void highFivesGuys(void);
		void attack(const std::string &target);

		FragTrap(const std::string &name);
		FragTrap(const FragTrap &toCopy);
		FragTrap &operator = (const FragTrap &toCopy);
		~FragTrap(void);
};

#endif
