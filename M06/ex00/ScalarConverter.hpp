#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;97m"

#define MAXINT 2147483647
#define MININT -2147483648
#define MAXFLOAT 340282346638528859811704183484516925440.0000000000000000
#define MINFLOAT -340282346638528859811704183484516925440.0000000000000000

enum type{
	CHAR, // 0
	INT, // 1
	FLOAT, // 2
	DOUBLE, // 3
	UNKNOWN // 4
};

class ScalarConverter
{
	private :
		static void convertFromChar(const std::string &number);
		static void convertFromFloat(const std::string &number, bool special);
		static void convertFromDouble(const std::string &number);
		static void convertFromInt(const std::string &number);
	
		static type getNumberType(const std::string &number);
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &toCopy);

	public :
		~ScalarConverter(void);
		ScalarConverter &operator = (const ScalarConverter &toCopy);

		static void convert(const std::string &number);
};

#endif
