#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *_brain;
	public :
		void makeSound(void) const;
	
		Cat(void);
		Cat(const Cat &toCopy);
		Cat& operator=(const Cat &toCopy);
		~Cat(void);
};

#endif
