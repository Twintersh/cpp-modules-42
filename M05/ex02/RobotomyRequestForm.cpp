#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	if (this->isSigned()){
		if (executor.getGrade() <= this->getExecGrade()){
			if (rand() % 2)
				std::cout << this->_target << " has been robotomized !" << std::endl;
			else
				std::cout << this->_target << " robotomy failed." << std::endl;
		}else
			throw (RobotomyRequestForm::GradeTooLowException());
	}else
		throw (RobotomyRequestForm::FormNotSignedException());
}

const std::string &RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

/*
*	Constructors / Destructors
*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	// std::cout << "Constructor RobotomyRequestForm called" << std::endl;
	srand(time(NULL));
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy) : AForm (toCopy) {
	// std::cout << "Copy constructor RobotomyRequestForm called" << std::endl;
	*this = toCopy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_target = toCopy.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	// std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}
