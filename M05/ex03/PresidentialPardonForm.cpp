#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (this->isSigned()){
		if (executor.getGrade() <= this->getExecGrade())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		else
			throw (PresidentialPardonForm::GradeTooLowException());
	}else
		throw (PresidentialPardonForm::FormNotSignedException());
}

const std::string &PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

/*
*	Constructors / Destructors
*/

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	// std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy) : AForm(toCopy) {
	// std::cout << "Copy constructor PresidentialPardonForm called" << std::endl;
	*this = toCopy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_target = toCopy.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	// std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}
