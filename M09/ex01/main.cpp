#include "RPN.hpp"

int main(int argc, char **argc)
{
	if (argc != 2)
		return (1);
	RPN::calculate(argv[1])
	return (0);
}