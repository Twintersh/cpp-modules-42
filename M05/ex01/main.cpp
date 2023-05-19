#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try{
		Form Formulaire("Affaire Arepassais", 10, 1);
		Bureaucrat a("Denis", 1);
		Bureaucrat b("Nadege", 10);
		Bureaucrat c("Stagiaire" , 150);

		std::cout << Formulaire << std::endl;
		Formulaire.beSigned(a);
		std::cout << Formulaire << std::endl;

	}catch (std::exception &error){
		std::cout << error.what() << std::endl;
		return (-1);
	}
	return (0);
}