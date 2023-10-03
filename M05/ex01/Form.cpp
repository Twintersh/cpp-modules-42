#include "Form.hpp"

void	Form::beSigned(const Bureaucrat &a){
	if (a.getGrade() <= _gradeToSign){
		this->_isSigned = true;
		std::cout << a.getName() << " signed " << this->_name << std::endl;
	}else{
		std::cout << a.getName() << " couldn't sign " << this->_name << " because grade too low" << std::endl;
		throw (Form::GradeTooLowException());
	}
}

/*
*	getters
*/

const std::string	&Form::getName(void) const{
	return (this->_name);
}

const int			&Form::getExecGrade(void) const{
	return (this->_gradeToExecute);
}

const int			&Form::getSignGrade(void) const{
	return (this->_gradeToSign);
}

const bool			&Form::isSigned(void) const{
	return (this->_isSigned);
}

/*
*	Constructors / Destructors
*/

Form::Form(std::string name, int toSign, int toExec) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExec){
	std::cout << BLU "Constructor Form called" WHT << std::endl;
	_isSigned = false;
	if (toSign > 150 || toExec > 150){
		throw(Form::GradeTooLowException());
	}else if (toSign < 1 || toExec < 1){
		throw(Form::GradeTooHighException());
	}
}

Form::Form(const Form& toCopy) : _name(toCopy.getName()), _gradeToSign(toCopy.getSignGrade()), _gradeToExecute(toCopy.getExecGrade()) {
	std::cout << BLU "Copy constructor Form called" WHT << std::endl;
	*this = toCopy;
}

Form::~Form(void){
	std::cout << RED "Destructor Form called" WHT << std::endl;
}

// Exceptions

const char *Form::GradeTooLowException::what(void) const throw(){
	return ("Error: Grade too low!");
}

const char *Form::GradeTooHighException::what(void) const throw(){
	return ("Error: Grade too high!");
}

// overloads

std::ostream &operator << (std::ostream &o, Form const &toPrint){
	o << "Form " << toPrint.getName() << ":\nIs Signed: " << toPrint.isSigned()
		<< "\nGrade to execute: " << toPrint.getExecGrade()
		<< "\nGrade to sign: " << toPrint.getSignGrade();
	return (o);
}

Form& Form::operator=(const Form &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_isSigned = toCopy.isSigned();
	return (*this);
}
