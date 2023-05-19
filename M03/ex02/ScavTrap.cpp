#include "ScavTrap.hpp"

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->_energy && this->_hitPoints){
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!" << std::endl;
		_energy--;
	}else if (!this->_energy){
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy..." << std::endl;
	}else{
		std::cout << "ScavTrap " << this->_name << " doesn't have any hit points left..." << std::endl;
	}
}

/*
**	Constructors / Destructors
*/

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "🚧 ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy){
	std::cout << "🚧 ScavTrap copy constructor Called" << std::endl;
	*this = toCopy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &toCopy){
	std::cout << "🚧 ScavTrap overload operator = constructor Called" << std::endl;
	if (this == &toCopy)
		return (*this);
	this->_attack = toCopy._attack;
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energy = toCopy._energy;
	return (*this);
}

ScavTrap::ScavTrap(void){
	std::cout << "🚧 ScavTrap void constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "💥 ScavTrap destructor called" << std::endl;
	return ;
}
