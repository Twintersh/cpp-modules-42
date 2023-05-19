#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		ScavTrap(void);

	public :
		void guardGate(void);
		void attack(const std::string &target);

		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &toCopy);
		ScavTrap &operator = (const ScavTrap &toCopy);
		~ScavTrap(void);
};

#endif
