#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <limits.h>
#include <algorithm>

typedef typename std::map<std::string, double>::iterator map_iterator;

class BitcoinExchange
{
	private :
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &toCopy);
		BitcoinExchange &operator = (const BitcoinExchange &toCopy);


		static void			parsing_data(std::ifstream &data);
		static int			parsing_file(std::ifstream &file);
		static bool			check_date(const std::string &date);
		static double		find_closest_date(const std::string &curDate);

		static std::map<std::string, double> _data;

	public :
		static void calculate(std::ifstream &file, std::ifstream &data);
};

#endif
