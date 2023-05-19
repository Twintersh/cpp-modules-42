#include "Dog.hpp"
#include "Brain.hpp"

void Dog::makeSound(void) const{
	std::cout << "Waf  !" << std::endl;
}

/*
*	Constructors / Destructors
*/

Dog::Dog(void){
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog& Dog::operator=(const Dog &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_brain = new Brain(*toCopy._brain);
	return (*this);
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog::~Dog(void){
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}
