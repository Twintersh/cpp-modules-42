#include "Dog.hpp"

void Dog::makeSound(void) const{
	std::cout << "Waf !" << std::endl;
}

/*
*	Constructors / Destructors
*/

Dog::Dog(void){
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog& Dog::operator=(const Dog &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Destructor Dog called" << std::endl;
}
