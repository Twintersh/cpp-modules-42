#include "Bureaucrat.hpp"

const std::string &Bureaucrat::getName(void) const{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

void Bureaucrat::increaseGrade(void){
	if (_grade > 1)
		_grade--;
	else
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decreaseGrade(void){
	if (_grade < 150)
		_grade++;
	else
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::executeForm(AForm const &form){
		std::cout << this->_name << " executed " << form.getName() << std::endl;
		form.execute(*this);
}

/*
*	Exceptions
*/

const char * Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("Error: Grade too high!");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("Error: Grade too low!");
}

/*
*	Constructors / Destructors
*/

Bureaucrat::Bureaucrat(void){
	// std::cout << GRN "Void constructor Bureaucrat called" WHT << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	// std::cout << GRN "Constructor Bureaucrat called" WHT << std::endl;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy): _name(toCopy.getName()){
	// std::cout << GRN "Copy constructor Bureaucrat called" WHT << std::endl;
	*this = toCopy;
}

Bureaucrat::~Bureaucrat(void){
	// std::cout << RED "Destructor Bureaucrat called" WHT << std::endl;
}

/*
*	Overload operators
*/

std::ostream& operator << (std::ostream &o, Bureaucrat const &toPrint){
	o << toPrint.getName() << ", bureaucrat grade "
		<< toPrint.getGrade() << ".";
	return (o);
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_grade = toCopy.getGrade();
	return (*this);
}
