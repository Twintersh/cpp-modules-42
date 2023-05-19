#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target){
	if (this->_energy && this->_hitPoints){
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}else if (!this->_energy){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy..." << std::endl;
	}else{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points left..." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy){
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount
			<< " hit points !" << std::endl;
		_hitPoints += amount;
		this->_energy--;
	}else{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy..." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (!this->_hitPoints){
		std::cout << "ClapTrap " << this->_name << " corpse is hit unnecessarily..." << std::endl;
	}else if (amount >= this->_hitPoints){
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " died 💀" << std::endl;
	}else{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " is hit by " << amount << " damage points !" << std::endl;
	}
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), _attack(0){
	std::cout << "🚧 Constructor called" << std::endl;
}

ClapTrap::ClapTrap(void){
	std::cout << "🚧 Void constructor Called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy){
	std::cout << "🚧 Copy Constructor Called" << std::endl;
	*this = toCopy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_attack = toCopy._attack;
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energy = toCopy._energy;
	return (*this);
}

ClapTrap::~ClapTrap(void){
	std::cout << "💥 Destructor Called" << std::endl;
	return ;
}
