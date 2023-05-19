#include "AForm.hpp"

void AForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > _gradeToExecute)
		throw (AForm::GradeTooHighException());
}

void	AForm::beSigned(const Bureaucrat &a){
	if (a.getGrade() <= _gradeToSign){
		this->_isSigned = true;
		std::cout << a.getName() << " signed " << this->_name << std::endl;
	}else{
		std::cout << a.getName() << " couldn't sign " << this->_name << " because grade too low" << std::endl;
		throw (AForm::GradeTooLowException());
	}
}

/*
*	getters
*/

const std::string	&AForm::getName(void) const{
	return (this->_name);
}

const int			&AForm::getExecGrade(void) const{
	return (this->_gradeToExecute);
}

const int			&AForm::getSignGrade(void) const{
	return (this->_gradeToSign);
}

const bool			&AForm::isSigned(void) const{
	return (this->_isSigned);
}

/*
*	Constructors / Destructors
*/

AForm::AForm(std::string name, int toSign, int toExec) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExec){
	// std::cout << BLU "Constructor AForm called" WHT << std::endl;
	_isSigned = false;
	if (toSign > 150 || toExec > 150){
		throw(AForm::GradeTooLowException());
	}else if (toSign < 1 || toExec < 1){
		throw(AForm::GradeTooHighException());
	}
}

AForm::AForm(const AForm& toCopy) : _name(toCopy.getName()), _gradeToSign(toCopy.getSignGrade()), _gradeToExecute(toCopy.getExecGrade()) {
	// std::cout << BLU "Copy constructor AForm called" WHT << std::endl;
	*this = toCopy;
}

AForm::~AForm(void){
	// std::cout << RED "Destructor AForm called" WHT << std::endl;
}

// Exceptions

const char * AForm::GradeTooLowException::what(void) const throw(){
	return ("Error: Grade too low!");
}

const char * AForm::GradeTooHighException::what(void) const throw(){
	return ("Error: Grade too high!");
}

const char * AForm::FormNotSignedException::what(void) const throw(){
	return ("Error: Form not signed!");
}

// overloads

std::ostream &operator << (std::ostream &o, AForm const &toPrint){
	o << "AForm " << toPrint.getName() << ":\nIs Signed: " << toPrint.isSigned()
		<< "\nGrade to execute: " << toPrint.getExecGrade()
		<< "\nGrade to sign: " << toPrint.getSignGrade();
	return (o);
}

AForm& AForm::operator=(const AForm &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_isSigned = toCopy.isSigned();
	return (*this);
}
