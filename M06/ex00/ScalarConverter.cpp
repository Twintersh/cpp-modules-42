#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &number){
	type numberType = ScalarConverter::getNumberType(number);

	switch (numberType){
		case (0):
			ScalarConverter::convertFromChar(number);
			break;
		case (1):
			ScalarConverter::convertFromInt(number);
			break;
		case (2):
			ScalarConverter::convertFromFloat(number, false);
			break;
		case (3):
			ScalarConverter::convertFromDouble(number);
			break;
		default:
			if (number == "+inf" || number == "-inf" || number == "nan")
				ScalarConverter::convertFromDouble(number);
			else if (number == "+inff" || number == "-inff" || number == "nanf")
				ScalarConverter::convertFromFloat(number, true);
			else
				std::cout << "You can't convert a string." << std::endl;
			break;
	}
}



type ScalarConverter::getNumberType(const std::string &number){
	bool isDecimal = false;
	long unsigned int i = 0;
	if (number.length() == 1 && !isdigit(number[0]))
		return (CHAR);
	if (number[0] == '-' || number[0] == '+')
		i++;
	while (i++ < number.length() - 1){
		if (!isdigit(number[i])){
			if (number[i] == '.' && !isDecimal){
				isDecimal = true;
				continue ;
			}else if (i == (number.length() - 1) && isDecimal && number[i] == 'f')
				return (FLOAT);
			else
				return (UNKNOWN);
		}
	}	
	if (isDecimal)
		return (DOUBLE);
	else
		return (INT);
}

void	ScalarConverter::convertFromFloat(const std::string &number, bool special){
	// `try` to overflow check.
	try {
		if (std::strtod(number.c_str(), NULL) > MAXFLOAT && !special){
			std::cout << "Impossible conversion from float: value is over MAXFLOAT." << std::endl;
			return ;
		}else if (std::strtod(number.c_str(), NULL) < MINFLOAT && !special){
			std::cout << "Impossible conversion from float: value is under MINFLOAT." << std::endl;
			return ;
		}
	}catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}
	float floatNb = strtof(number.c_str(), NULL);

	// print char
	char charNb;
	std::cout << "char  : " << std::flush;
	if (floatNb < -128 || floatNb > 127){
		std::cout << "impossible" << std::endl;
	}else if (floatNb >= 32 && floatNb < 127 ){
		charNb = static_cast<char>(floatNb);
		std::cout << "'" << charNb << "'" << std::endl;
	}else{
		std::cout << "Non displayable" << std::endl;
	}
	
	// print int
	int intNb;
	std::cout << "int   : " << std::flush;
	if (floatNb > MAXINT || floatNb < MININT || std::isnan(floatNb))
		std::cout << "impossible" << std::endl;
	else{
		intNb = static_cast<int>(floatNb);
		std::cout << intNb << std::endl;
	}


	// to get the .0 even if there is no decimal part :
	if (floatNb - static_cast<double>(intNb) == 0.0){
		std::cout << std::setprecision(1) << std::fixed;
	}

	// print float
	std::cout << "float : " << floatNb << "f" << std::endl;

	// print double
	double doubleNb = static_cast<double>(floatNb);
	std::cout << "double: " << doubleNb << std::endl;

	// reset precision
	std::cout << std::setprecision(6) << std::flush;
}

void	ScalarConverter::convertFromDouble(const std::string &number){
	// `try` to overflow check.
	try {
		double doubleNb = std::strtod(number.c_str(), NULL);


		// print char
		char charNb;
		std::cout << "char  : " << std::flush;
		if (doubleNb < -128 || doubleNb > 127){
			std::cout << "impossible" << std::endl;
		}else if (doubleNb >= 32 && doubleNb < 127){
			charNb = static_cast<char>(doubleNb);
			std::cout << "'" << charNb << "'" << std::endl;
		}else{
			std::cout << "Non displayable" << std::endl;
		}

		// print int
		int intNb;
		std::cout << "int   : " << std::flush;
		if (doubleNb > MAXINT || doubleNb < MININT || std::isnan(doubleNb))
			std::cout << "impossible" << std::endl;
		else{
			intNb = static_cast<int>(doubleNb);
			std::cout << intNb << std::endl;
		}

		// to get the .0 even if there is no decimal part :
		if (doubleNb - static_cast<double>(intNb) == 0.0){
			std::cout << std::setprecision(1) << std::fixed;
		}
	
		// print float
		float floatNb;
		std::cout << "float : " << std::flush;
		if (doubleNb > MAXFLOAT || doubleNb < MINFLOAT)
			std::cout << "impossible" << std::endl;
		else{
			floatNb = static_cast<float>(doubleNb);
			std::cout << floatNb << "f" << std::endl;
		}
	
		// print double
		std::cout << "double: " << doubleNb << std::endl;

		// reset precision
		std::cout << std::setprecision(6) << std::flush;
	}catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}
}

void	ScalarConverter::convertFromChar(const std::string &number){
	char charNb = number[0];

	// print char value
	std::cout << "char  : " << "'" << charNb << "'" << std::endl;

	// print int value
	int intNb = static_cast<int>(charNb);
	std::cout << "int   : " << intNb << std::endl;

	// set the precision to get the decimal part (.0) printed
	std::cout << std::setprecision(1) << std::fixed << std::flush;

	// print float value
	float floatNb = static_cast<float>(charNb);
	std::cout << "float : " << floatNb << std::endl;

	// print double value
	double doubleNb = static_cast<double>(charNb);
	std::cout << "double: " << doubleNb << std::endl;

	// reset precision
	std::cout << std::setprecision(6) << std::flush;
}

void	ScalarConverter::convertFromInt(const std::string &number){
	// overflow checking.
	try {
		if (std::strtod(number.c_str(), NULL) > MAXINT){
			std::cout << "Impossible conversion from int: value is over MAXINT." << std::endl;
			return ;
		}else if (std::strtod(number.c_str(), NULL) < MININT){
			std::cout << "Impossible conversion from int: value is under MININT." << std::endl;
			return ;
		}
	}catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}

	int intNb = std::atoi(number.c_str());
	
	// print char value
	char charNb;
	std::cout << "char  : ";
	if (intNb > 127 || intNb < -128){
		std::cout << "Impossible" << std::endl;
	}else{
		charNb = static_cast<char>(intNb);
		if (intNb >= 32 && intNb < 127)
			std::cout << "'" << charNb << "'" 
			<< std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}

	// print int value
	std::cout << "int   : " << intNb << std::endl;
	
	// set the precison to get decimal part (.0) printed
	std::cout << std::setprecision(1) << std::fixed << std::flush;

	// print float value
	float floatNb = static_cast<float>(intNb);
	std::cout << "float : " << floatNb << "f" << std::endl;

	// print double value
	double doubleNb = static_cast<double>(intNb);
	std::cout << "double: " << doubleNb << std::endl;

	// reset precision
	std::cout << std::setprecision(6) << std::flush;
}


/*
*	Constructors / Destructors
*/

ScalarConverter::ScalarConverter(void){
}

ScalarConverter::ScalarConverter(const ScalarConverter& toCopy){
	*this = toCopy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &toCopy){
	if (this == &toCopy)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter(void){
}
