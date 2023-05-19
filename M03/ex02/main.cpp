#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

int main(void)
{
	{
		ClapTrap a(BLU "Julien Lepers" WHT);
		ScavTrap b(GRN "Samuel Etienne" WHT);
		FragTrap c(RED "Jean-Luc Reichmann" WHT);
		ClapTrap d(b);

		a.attack(GRN "Samuel Etienne" WHT);
		b.takeDamage(10);
		b.attack(BLU "Julien Lepers" WHT);
		a.takeDamage(100);
		b.attack(BLU "Julien Lepers" WHT);
		a.takeDamage(100);
		a.beRepaired(1000);
		b.guardGate();
		for (int i = 0; i < 9 ; i++){
			a.attack(GRN "Samuel Etienne" WHT);
			if (i != 8) // for the lore
				b.takeDamage(10);
		}

		d = a;

		d.attack(RED "Jean Luc Reichmann" WHT);
		c.highFivesGuys();
	}
	
	return (0);
}