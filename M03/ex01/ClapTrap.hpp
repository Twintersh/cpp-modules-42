#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected :
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energy;
		unsigned int	_attack;

		ClapTrap(void);

	public :
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &toCopy);
		ClapTrap &operator = (const ClapTrap &toCopy);
		~ClapTrap(void);
};

#endif
