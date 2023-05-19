#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private :
		std::string	_name;
		unsigned int			_hitPoints;
		unsigned int			_energy;
		unsigned int			_attack;
		ClapTrap(void);

	public :
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &toCopy);
		ClapTrap &operator = (const ClapTrap &toCopy);
		~ClapTrap(void);
};

#endif
