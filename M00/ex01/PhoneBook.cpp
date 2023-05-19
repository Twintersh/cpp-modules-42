#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <iomanip>
#include <vector>
#include <stdlib.h>

PhoneBook::PhoneBook( void )
{
	this->index = 0;
	return ;
} 	

PhoneBook::~PhoneBook( void )
{
	return ;
}

bool	PhoneBook::search(void)
{
	int nb_elements;
	bool is_valid = false;
	Contact Temp;

	if (this->index > 8)
		nb_elements = 8;
	else
		nb_elements = this->index;
	std::cout << "\e[34m-----------------Phone-Book------------------" << std::endl;
	if (this->index == 0)
		std::cout << "|    Your awesome Phone Book is empty...    |" << std::endl;
	else
	{
		is_valid = true;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "---------------------------------------------\e[0m" << std::endl;
		for (int i = 0 ; i < nb_elements ; i++)
		{
			Temp = this->Element[i];
			std::cout << "\e[34m|\e[0m";
			std::cout << "     " << i << "    ";
			std::cout << "\e[34m|\e[0m";
			if (Temp.getFirstName().length() >= 10)
				std::cout << std::setw(10) << Temp.getFirstName().substr(0, 9).append(".");
			else
				std::cout << std::setw(10) << Temp.getFirstName();
			std::cout << "\e[34m|\e[0m";
			if (Temp.getLastName().length() >= 10)
				std::cout << std::setw(10) << Temp.getLastName().substr(0, 9).append(".");
			else
				std::cout << std::setw(10) << Temp.getLastName();
			std::cout << "\e[34m|\e[0m";
			if (Temp.getNickname().length() >= 10)
				std::cout << std::setw(10) << Temp.getNickname().substr(0, 9).append(".");
			else
				std::cout << std::setw(10) << Temp.getNickname();
			std::cout << "\e[34m|\e[0m" << std::endl;
		}
	}
	std::cout << "\e[34m---------------------------------------------\e[0m" << std::endl;
	return (is_valid);	
}

void	PhoneBook::menu(void)
{
	std::string str;

	std::cout << "\e[36mADD : add a new contact" << std::endl;
	std::cout << "SEARCH : Display list of contacts" << std::endl;
	std::cout << "EXIT : exit PhoneBook\e[0m" << std::endl;
	do
	{
 		std::cout << "\e[36mPhoneBook📖 \e[0m" << std::flush;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break;
		if (str == "SEARCH")
		{
			if (this->search())
			{
				std::cout << "\e[36mPlease enter an index: \e[0m" << std::flush;
				std::getline(std::cin, str);
				if (std::cin.eof())
					break;
				int	nb = atoi(str.c_str());
				if (str.length() == 1 && isdigit(str[0]) && nb < 8 && nb >= 0 && nb < (int)this->index)
					this->Element[nb].display();
				else
					std::cout << "\e[31m❌ Invalid index\e[0m" << std::endl;
			}
		}
		else if (str == "ADD")
		{
			this->Element[this->index % 8].init();
			this->index++;
		}
	}while (str != "EXIT");
}
