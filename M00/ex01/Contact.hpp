#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public :
		Contact(void);
		~Contact(void);
		void init(void);
		void display(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
	private :
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
