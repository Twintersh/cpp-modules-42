#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private :
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;
		Form(void);

	public :
		void				beSigned(const Bureaucrat &a);
		
		// getters
		const std::string	&getName(void) const;
		const int			&getExecGrade(void) const;
		const int			&getSignGrade(void) const;
		const bool			&isSigned(void) const;

		// Constructors / destructors
		Form(std::string name, int toSign, int toExec);
		Form(const Form &toCopy);
		~Form(void);

		// exceptions
		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what(void) const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char * what(void) const throw();
		};
		Form &operator = (const Form &toCopy);
};

std::ostream &operator << (std::ostream &o, Form const &toPrint);

#endif
