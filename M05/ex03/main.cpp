#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	try{
	Intern denis;
	AForm *oui;
	Bureaucrat charles("charles", 10);

	// oui = denis.makeForm("robotomy request", "sid");
	oui = denis.makeForm("shrubbery creation", "sid");
	// oui = denis.makeForm("presidential pardon", "sid");
	// oui = denis.makeForm("vjruioewg ebi", "sid");

	oui->beSigned(charles);
	if (oui)
		charles.executeForm(*oui);
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}