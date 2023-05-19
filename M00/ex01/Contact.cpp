#include "./Contact.hpp"

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

void Contact::display(void)
{
	std::cout << "\e[34mFirst Name:\e[0m " << this->firstName << std::endl;
	std::cout << "\e[34mLast Name:\e[0m " << this->lastName << std::endl;
	std::cout << "\e[34mNickname:\e[0m " << this->nickname << std::endl;
	std::cout << "\e[34mPhone Number:\e[0m " << this->phoneNumber << std::endl;
	std::cout << "\e[34mDarket Secret:\e[0m " << this->darkestSecret << std::endl;
}

void Contact::init( void )
{
	std::cout << "\e[34mFirst Name: \e[0m" << std::flush;
	std::getline(std::cin, this->firstName);
	std::cout << "\e[34mLast Name: \e[0m" << std::flush;
	std::getline(std::cin, this->lastName);
	std::cout << "\e[34mNickname: \e[0m" << std::flush;
	std::getline(std::cin, this->nickname);
	std::cout << "\e[34mPhone Number: \e[0m" << std::flush;
	std::getline(std::cin, this->phoneNumber);
	std::cout << "\e[34mDarkest Secret: \e[0m" << std::flush;
	std::getline(std::cin, this->darkestSecret);
	std::cout << "\e[32m✅ Contact added !\e[0m" << std::endl;
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
