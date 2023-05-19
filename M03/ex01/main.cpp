#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap a("Julien Lepers");
		ScavTrap b("Samuel Etienne");

		a.attack("Samuel Etienne");
		b.takeDamage(10);
		b.attack("Julien Lepers");
		a.takeDamage(100);
		b.attack("Julien Lepers");
		a.takeDamage(100);
		a.beRepaired(1000);
		b.guardGate();
		for (int i = 0; i < 9 ; i++){
			a.attack("Samuel Etienne");
			if (i != 8) // for the lore
				b.takeDamage(10);
		}
	}
	
	return (0);
}