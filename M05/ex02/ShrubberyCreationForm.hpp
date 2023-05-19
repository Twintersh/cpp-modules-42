#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :
		std::string _target;

	public :
		void execute(const Bureaucrat &executor) const;
		const std::string &getTarget(void) const;

		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &toCopy);
		~ShrubberyCreationForm(void);
};

#endif
