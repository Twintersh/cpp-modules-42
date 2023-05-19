#include "Cat.hpp"
#include "Brain.hpp"

void Cat::makeSound(void) const{
	std::cout << "Meow !" << std::endl;
}

/*
*	Constructors / Destructors
*/

Cat::Cat(void){
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat& Cat::operator=(const Cat &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_brain = new Brain(*toCopy._brain);
	return (*this);
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy){
	std::cout << "Cat copy constructor called" << std::endl;	
	*this = toCopy;
}

Cat::~Cat(void){
	delete this->_brain;
	std::cout << "Destructor Cat called" << std::endl;
}
