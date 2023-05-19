#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

class Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;
		Bureaucrat(void);

	public :
		int					getGrade(void) const;
		const std::string	&getName(void) const;
		void				increaseGrade(void);
		void				decreaseGrade(void);

		Bureaucrat(std::string _name, int grade);
		Bureaucrat(const Bureaucrat &toCopy);
		Bureaucrat &operator = (const Bureaucrat &toCopy);
		~Bureaucrat(void);

		// exceptions
		class GradeTooHighException: public std::exception{
			public :
				virtual const char * what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public :
				virtual const char * what () const throw();
		};
};

std::ostream &operator << (std::ostream &o, Bureaucrat const &toPrint);

#endif
