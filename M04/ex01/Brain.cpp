#include "Brain.hpp"

/*
*	Constructors / Destructors
*/

Brain::Brain(void){
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& toCopy){
	std::cout << "Copy constructor Brain called" << std::endl;
	*this = toCopy;
}

Brain& Brain::operator=(const Brain &toCopy){
	if (this == &toCopy)
		return (*this);
	for (int i = 0 ; i < 100 ; i++){
		this->ideas[i] = toCopy.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void){
	std::cout << "Destructor Brain called" << std::endl;
}
