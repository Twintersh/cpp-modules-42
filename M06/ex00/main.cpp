#include "ScalarConverter.hpp"

// /*

int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Error: Invalid number of arguments." << std::endl;
	return (0);
}

// */
/* TEST MAIN

int main(void)
{
	std::cout << RED "basic float" WHT << std::endl;
	ScalarConverter::convert("110.344545f");
	std::cout << std::endl;

	std::cout << RED "basic int" WHT << std::endl;
	ScalarConverter::convert("340");
	std::cout << std::endl;

	std::cout << RED "basic char" WHT << std::endl;
	ScalarConverter::convert("&");
	std::cout << std::endl;

	std::cout << RED "basic double" WHT << std::endl;
	ScalarConverter::convert("42.000042");
	std::cout << std::endl;

	std::cout << RED "MAX int" WHT << std::endl;
	ScalarConverter::convert("+2147483647");
	std::cout << std::endl;

	std::cout << RED "int overflow" WHT << std::endl;
	ScalarConverter::convert("2147483648");
	std::cout << std::endl;

	std::cout << RED "float overflow" WHT << std::endl;
	ScalarConverter::convert("3402823466385288598117041834847990000000.0000000000000000f");
	std::cout << std::endl;

	std::cout << RED "double overflow" WHT << std::endl;
	ScalarConverter::convert("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999.9");
	std::cout << std::endl;

	std::cout << RED "+inf" WHT << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;

	std::cout << RED "+inff" WHT << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;

	std::cout << RED "+nan" WHT << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;

	return (0);
}

// */