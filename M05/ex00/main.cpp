#include "Bureaucrat.hpp"

int main(void)
{
	/* TEST 1 : Overload operator <<, Declaration Class.
	{
		Bureaucrat a("Alphonse", 30);
		std::cout << a << std::endl;
	}
	// */
	// /* TEST 2 : Errors Exceptions
	{
		try{
				// TOO LOW
			// Bureaucrat a("Stephane", 3000);
				// TOO HIGH
			// Bureaucrat b("Nadege", -10);
				// TOO HIGH 2
			Bureaucrat c("Denis", 1);
			std::cout << c << std::endl;
			c.increaseGrade();
				// TOO LOW 2
			// Bureaucrat d("Catherine", 150);
			// std::cout << d << std::endl;
			// d.decreaseGrade();
		}catch (std::exception &error){
			std::cout << error.what() << std::endl;
			return (1);
		}
	}
	// */
	/* TEST 3 Copy constructor / overload operator "="
	{
		Bureaucrat a("Brigitte", 42);
		Bureaucrat b("Michel", 135);
  		std::cout << "BEFORE:" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		b = a;
 		std::cout << "AFTER:" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	// */
	return (0);
}