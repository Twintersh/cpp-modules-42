#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::ifstream file(argv[1]);
	std::ifstream data("data.csv");

	if (!file.is_open() || !data.is_open()){
		if (!data.is_open())
			std::cout << "Error: Cannot open Data.csv" << std::endl;
		if (!file.is_open())
			std::cout << "Error: Cannot open " << argv[1] << std::endl;
		return (1);
	}

	BitcoinExchange::calculate(file, data);
	return (0);
}
