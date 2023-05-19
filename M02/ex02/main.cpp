#include "Fixed.hpp"
#include <iomanip>

int main ( void ) {
	Fixed		a(25);
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(Fixed(5.05f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	a = a + 10;
	std::cout << std::setprecision(10) << a << std::endl;
	a = a / 10;
	std::cout << std::setprecision(10) << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}