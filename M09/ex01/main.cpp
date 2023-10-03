#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || !argv[1][0] || argv[1][0] == ' ' || RPN::calculate(std::string(argv[1]))){
		std::cout << "Error" << std::endl;
		return (1);
	}
}
