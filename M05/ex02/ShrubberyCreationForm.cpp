#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>
#include <string.h>

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->isSigned()){
		if (executor.getGrade() <= this->getExecGrade()){
			std::string filename = this->_target + "_shrubbery";
			std::ofstream outfile(filename.c_str());
			outfile << "        ccee88oo" << std::endl;
			outfile << "    C8O8O8Q8PoOb o8oo" << std::endl;
			outfile << " dOB69QO8PdUOpugoO9bD" << std::endl;
			outfile << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
			outfile << "    6OuU  /p u gcoUodpP" << std::endl;
			outfile << "      \\\\\\//  /douUP" << std::endl;
			outfile << "        \\\\\\////" << std::endl;
			outfile << "         |||/\\" << std::endl;
			outfile << "         |||\\/" << std::endl;
			outfile << "         |||||" << std::endl;
			outfile << "   .....//||||\\...." << std::endl;
		}else
			throw (ShrubberyCreationForm::GradeTooLowException());
	}else
		throw (ShrubberyCreationForm::FormNotSignedException());
}

const std::string &ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

/*
*	Constructors / Destructors
*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
	// std::cout << CYN "Constructor ShrubberyCreationForm called" WHT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& toCopy) : AForm(toCopy) {
	// std::cout << CYN "Copy constructor ShrubberyCreationForm called" WHT << std::endl;
	*this = toCopy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_target = toCopy.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	// std::cout << RED "Destructor ShrubberyCreationForm called" WHT << std::endl;
}
