#include "Intern.hpp"

AForm *Intern::makeForm(const std::string &name, const std::string &target){
	std::string formsNames[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i;

	for (i = 0 ; i < 3 ; i++){
		if (formsNames[i] == name)
			break;
	}
	switch (i){
		case (0) :
			std::cout << "Intern creates Robotomy Request Form" << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case (1) :
			std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case (2) :
			std::cout << "Intern creates Presidential Pardon Form" << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		default :
			std::cout << "Intern can't create " << name << " Form" << std::endl;
			return (NULL);
			break;
		}
}

/*
*	Constructors / Destructors
*/

Intern::Intern(void){
	// std::cout << "Constructor Intern called" << std::endl;
}

Intern::Intern(const Intern& toCopy){
	// std::cout << "Copy constructor Intern called" << std::endl;
	*this = toCopy;
}

Intern& Intern::operator=(const Intern &toCopy){
	if (this == &toCopy)
		return (*this);
	return (*this);
}

Intern::~Intern(void){
	// std::cout << "Destructor Intern called" << std::endl;
}
