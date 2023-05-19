#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :
		std::string _type;

	public :
		std::string		getType(void) const;
		void	makeSound(void) const;

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &toCopy);
		WrongAnimal &operator = (const WrongAnimal &toCopy);
		virtual ~WrongAnimal(void);
};

#endif
