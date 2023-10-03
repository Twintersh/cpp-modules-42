#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try{
		Form forM("Affaire Arepassais", 10, 1);
		Bureaucrat a("Denis", 1);
		Bureaucrat b("Nadege", 10);
		Bureaucrat c("Stagiaire" , 150);

		std::cout << forM << std::endl;
		forM.beSigned(c);
		std::cout << forM << std::endl;

	}catch (std::exception &error){
		std::cout << error.what() << std::endl;
		return (1);
	}
	return (0);
}