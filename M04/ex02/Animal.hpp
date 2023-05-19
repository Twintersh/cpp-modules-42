#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string _type;

	public :
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

		Animal(void);
		Animal(const Animal &toCopy);
		Animal &operator = (const Animal &toCopy);
		virtual ~Animal(void);
};

#endif
