#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string _target;

	public :
		void execute(const Bureaucrat &executor) const;
		const std::string &getTarget(void) const;

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &toCopy);
		~PresidentialPardonForm(void);
};

#endif
