#include "BitcoinExchange.hpp"

static std::map<std::string, float> BitcoinExchange::_data;

int BitcoinExchange::parsing_file(std::ifstream &file)
{
	
}

void	BitcoinExchange::parsing_data(std::ifstream &data)
{
	std::string line;

	while (getline())
}

// constructors / destructors

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::~BitcoinExchange(void)
{}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &toCopy)
{
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy)
{}