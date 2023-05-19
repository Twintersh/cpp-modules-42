#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;
	public :
		void execute(const Bureaucrat &executor) const;
		const std::string &getTarget(void) const;

		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &toCopy);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &toCopy);
		~RobotomyRequestForm(void);
};

#endif
