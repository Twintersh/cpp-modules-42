#include "Animal.hpp"

std::string Animal::getType(void) const{
	return (_type);
}

void Animal::makeSound(void) const{
	std::cout << "makeSound called" << std::endl;
}

/*
*	Constructors / Destructors
*/

Animal::Animal(void){
	std::cout << "Constructor Animal called" << std::endl;
	_type = "no type";
}

Animal::Animal(const Animal& toCopy){
	*this = toCopy;
}

Animal& Animal::operator=(const Animal &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Destructor Animal called" << std::endl;
}