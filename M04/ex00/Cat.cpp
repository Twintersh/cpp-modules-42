#include "Cat.hpp"

void Cat::makeSound(void) const{
	std::cout << "Meow !" << std::endl;
}

/*
*	Constructors / Destructors
*/

Cat::Cat(void){
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat& Cat::operator=(const Cat &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy){
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Destructor Cat called" << std::endl;
}
