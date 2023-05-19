#include "WrongAnimal.hpp"

std::string WrongAnimal::getType(void) const{
	return (_type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "makeSound called" << std::endl;
}

/*
*	Constructors / Destructors
*/

WrongAnimal::WrongAnimal(void){
	std::cout << "Constructor WrongAnimal called" << std::endl;
	_type = "no type";
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy){
	*this = toCopy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Destructor WrongAnimal called" << std::endl;
}