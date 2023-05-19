#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;
		AForm(void);

	public :
		virtual void		beSigned(const Bureaucrat &a);
		virtual void		execute(Bureaucrat const &executor) const = 0;

		// getters
		const std::string	&getName(void) const;
		const int			&getExecGrade(void) const;
		const int			&getSignGrade(void) const;
		const bool			&isSigned(void) const;

		// Constructors / destructors
		AForm(std::string name, int toSign, int toExec);
		AForm(const AForm &toCopy);
		virtual ~AForm(void);

		// exceptions
		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what(void) const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char * what(void) const throw();
		};
		class FormNotSignedException : public std::exception{
			public :
				virtual const char * what(void) const throw();
		};
		AForm &operator = (const AForm &toCopy);
};

std::ostream &operator << (std::ostream &o, AForm const &toPrint);

#endif
