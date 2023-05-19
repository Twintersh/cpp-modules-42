#include "Fixed.hpp"

// Constructors / Destructor

Fixed::Fixed(const int value) : _fixedPoint(value << _nbFractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPoint(value * (1 << _nbFractionalBits)) // allows to shift the comma to the left
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}


Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// members functions

float Fixed::toFloat(void) const
{
	return (static_cast <float>(_fixedPoint) / (1 << _nbFractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> _nbFractionalBits);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

// Overload operators

std::ostream& operator << (std::ostream &o, Fixed const &toPrint)
{
	o << toPrint.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &toCopy)
		return (*this);
	this->_fixedPoint = toCopy.getRawBits();
	return (*this);
}
