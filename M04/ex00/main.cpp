#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// /*	TEST 1 : Creates Animal pointer and changes the value and class it points to.   	
	{
		Animal *a = new Animal();
		std::cout << a->getType() << std::endl;
		a->makeSound();
		delete a;
		
		std::cout << std::endl;

		a = new Dog();
		std::cout << a->getType() << std::endl;
		a->makeSound();
		delete a;

		std::cout << std::endl;
		
		a = new Cat();	
		std::cout << a->getType() << std::endl;
		a->makeSound();
		delete a;
		std::cout << "-- TEST 1 ended --" << std::endl;
	}
	//*/
	/* TEST 2 : Subject test
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		std::cout << "-- TEST 2 ended --" << std::endl;
	}
	//*/
	/*	TEST 3 : Same than the 2nd but with WrongAnimal class, to ensure that Cat does not print cat sound
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the Animal sound
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		std::cout << "-- TEST 3 ended --" << std::endl;
	}
	//*/
	return (0);
}