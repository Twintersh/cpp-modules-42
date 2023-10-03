#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::_data;

bool BitcoinExchange::check_date(const std::string &date)
{
	std::istringstream sDate(date);
	char delimiter1, delimiter2;
	int	year, month, day;

	if (!(sDate >> year >> delimiter1 >> month >> delimiter2 >> day) ||
		delimiter1 != '-' || delimiter2 != '-')
		return (false);
	if (month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (month == 2)
	{
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28))
			return (false);
	}
	if (year < 2009 || year > 2022)
		return (false);
	return (true);
}

double	BitcoinExchange::find_closest_date(const std::string &curDate)
{
	map_iterator it;

	it = _data.lower_bound(curDate);
	if (it->first != curDate)
		it--;
	return (it->second);
}

int BitcoinExchange::parsing_file(std::ifstream &file)
{
	std::string	line;
	std::string	date;
	std::string limit;
	char		delimiter;
	double		value;
	double		result;

	std::getline(file, line, '\n');
	if (line != "date | value")
		return (1);
	while (std::getline(file, line, '\n'))
	{
		std::istringstream streamLine(line);
		if ((streamLine >> date >> delimiter >> value) && delimiter == '|'
			&& check_date(date) && streamLine.peek() == EOF)
		{
			if (value < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (value > 1000)
				std::cout << "Error: too large number." << std::endl;
			else
			{
				result = find_closest_date(date) * value;
				std::cout << date << " => " << std::setprecision(8) << value << " = " << result << std::endl;
			}
		}
		else
			std::cout << "Bad input => " << line << std::endl;
	}
	return (0);
}

void	BitcoinExchange::parsing_data(std::ifstream &data)
{
	std::string line;
	size_t npos;

	std::getline(data, line, '\n'); // skip the first line
	while (std::getline(data, line, '\n'))
	{
		npos = line.find(','); 
		_data[line.substr(0, npos)] = 
			std::strtod(line.substr(npos + 1, line.length() - npos).c_str(), NULL);
	}
}

void BitcoinExchange::calculate(std::ifstream &file, std::ifstream &data)
{
	(void)file;
	BitcoinExchange::parsing_data(data);
	if (BitcoinExchange::parsing_file(file))
		std::cout << "Error: bad file format." << std::endl;
}

// constructors / destructors

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::~BitcoinExchange(void)
{}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &toCopy)
{
	(void)toCopy;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy)
{
	(void)toCopy;
}