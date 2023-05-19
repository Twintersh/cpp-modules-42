#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "./Contact.hpp"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		Contact Element[8];
		unsigned int index;
		void menu(void);
		bool search(void);
	private :
};

#endif
