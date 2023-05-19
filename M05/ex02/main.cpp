#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	// /* RobotomyRequestForm sign 72, exex 45
	try{
		RobotomyRequestForm a("siphano");
		RobotomyRequestForm b(a);
		Bureaucrat nadine("nadine", 72);
		Bureaucrat serge("serge", 45);

		b.beSigned(nadine);
		for (int i =0 ; i < 20 ; i++){
			b.execute(serge);
		}
		serge.executeForm(b);
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
		return (-1);
	}
	// */
	/* PresidentialPardonForm sign 25, exec 5
	{
		try{
			PresidentialPardonForm a("Macron");
			PresidentialPardonForm b(a);
			Bureaucrat didier("didier", 25);
			Bureaucrat corinne("corinne", 5);		

			b.beSigned(didier);

			b.execute(corinne);
			b.execute(didier);
			std::cout << "Hello" << std::endl;
		}catch (std::exception &e){
			std::cout << e.what() << std::endl;
			return (-1);
		}
	}
	// */
	/* ShrubberyCreationForm sign 145, exec 137
	{
		try{
			ShrubberyCreationForm a("target");
			ShrubberyCreationForm b(a);
			Bureaucrat didier("didier", 137);
			Bureaucrat corinne("corinne", 145);

			b.beSigned(corinne);

			b.execute(didier);
		}catch (std::exception &e){
			std::cout << e.what() << std::endl;
			return (-1);
		}
	}
	// */
	return (0);
}