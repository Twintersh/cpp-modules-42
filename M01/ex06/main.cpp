#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string level(argv[1]);
		std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int index;
		Harl Harl;
		for (index = 0; index < 4; index++)
		{
			if (!level.compare(levels[index]))
				break ;
		}
		switch (index)
		{
		case ( 0 ):
			Harl.complain("DEBUG");
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case ( 1 ):
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case ( 2 ):
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case ( 3 ):
			Harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "Error: Bad number of arguments" << std::endl;
	}
}
