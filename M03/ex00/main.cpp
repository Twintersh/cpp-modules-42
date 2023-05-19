#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Julien Lepers");

	a.attack("Samuel Etienne");
	a.takeDamage(40);
	a.beRepaired(9);
	a.takeDamage(10);
	a.takeDamage(10);
	return (0);
}