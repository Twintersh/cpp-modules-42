#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " high fives everybody !" << std::endl;
}

void FragTrap::attack(const std::string& target){
	if (this->_energy && this->_hitPoints){
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!" << std::endl;
		_energy--;
	}else if (!this->_energy){
		std::cout << "FragTrap " << this->_name << " doesn't have enough energy..." << std::endl;
	}else{
		std::cout << "FragTrap " << this->_name << " doesn't have any hit points left..." << std::endl;
	}
}

/*
**	Constructors / Destructors
*/

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "🚧 FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy){
	std::cout << "🚧 FragTrap copy constructor Called" << std::endl;
	*this = toCopy;
}

FragTrap& FragTrap::operator=(const FragTrap &toCopy){
	std::cout << "🚧 FragTrap overload operator = constructor Called" << std::endl;
	if (this == &toCopy)
		return (*this);
	this->_attack = toCopy._attack;
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energy = toCopy._energy;
	return (*this);
}

FragTrap::FragTrap(void){
	std::cout << "🚧 FragTrap void constructor called" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "💥 FragTrap destructor called" << std::endl;
	return ;
}
