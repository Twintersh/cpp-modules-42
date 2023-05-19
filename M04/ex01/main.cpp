#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define NBANIMALS 100

int main(void)
{
	// /* TEST 1 : Does grandmaHome leaks ?
	{
		Animal *grandmaHome[NBANIMALS];
	
		// fill grandma home with adorable buddies
		for (int i = 0 ; i < NBANIMALS ; i++){
			if (i % 2)
				grandmaHome[i] = new Dog();
			else
				grandmaHome[i] = new Cat();
		}
		// kill them
		for (int j = 0 ; j < NBANIMALS ; j++){
			delete grandmaHome[j];
		}
	}
	// */
	/* TEST 2 : Copy constructors / overload operator test
	{
		Cat Rex;
		Cat	Stephane(Rex);

		std::cout << "\n" << Stephane.getType() << "\n" << std::endl;
	}
	// */
	return (0);
}