#include "WrongCat.hpp"

void WrongCat::makeSound(void) const{
	std::cout << "Meow !" << std::endl;
}

/*
*	Constructors / Destructors
*/

WrongCat::WrongCat(void){
	std::cout << "Constructor WrongCat called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat& WrongCat::operator=(const WrongCat &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &toCopy) : WrongAnimal(toCopy){
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Destructor WrongCat called" << std::endl;
}
