#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public :
		void makeSound(void) const;

		Dog(void);
		Dog(const Dog &toCopy);
		Dog& operator=(const Dog &toCopy);
		~Dog(void);
};

#endif
