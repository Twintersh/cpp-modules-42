#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private :
	public :
		AForm *makeForm(const std::string &name, const std::string &target);

		Intern(void);
		Intern(const Intern &toCopy);
		Intern &operator = (const Intern &toCopy);
		~Intern(void);
};

#endif
