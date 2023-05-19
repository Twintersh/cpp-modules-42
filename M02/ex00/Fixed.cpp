#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

Fixed& Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &toCopy)
		return (*this);
	this->rawBits = toCopy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}