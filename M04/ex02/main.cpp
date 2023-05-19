#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define NBANIMALS 100

int main(void)
{
	// /*	TEST 1 : Classes that inherits from Animal still works
	{
		Dog Rex;
		Rex.makeSound();
		Cat Felix;
		Felix.makeSound();
		std::cout << std::endl;
		
		Animal *Remi = new Dog();
		Animal *ninhoFeaturingGazo = new Cat();

		Remi->makeSound();
		ninhoFeaturingGazo->makeSound();

		delete ninhoFeaturingGazo;
		delete Remi;
	}
	// */
	/* TEST 2 : Cannot use Animal
	{
		Animal tardigrade;
	}
	// */
	return (0);
}