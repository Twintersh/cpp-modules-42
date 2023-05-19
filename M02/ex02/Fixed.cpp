#include "Fixed.hpp"
#include <cmath>

// Constructors / Destructor

Fixed::Fixed( const int value ) : _fixedPoint( value << _nbFractionalBits )
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _fixedPoint( roundf( value * ( 1 << _nbFractionalBits ) ) ) // allows to shift the comma to the left
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( void ) : _fixedPoint( 0 )
{
	// std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &toCopy )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

// members functions

float Fixed::toFloat( void ) const
{
	return ( static_cast <float>( this->getRawBits() ) / ( 1 << _nbFractionalBits ) );
}

int Fixed::toInt( void ) const
{
	return ( this->_fixedPoint >> _nbFractionalBits );
}

int	Fixed::getRawBits( void ) const
{
	return ( this->_fixedPoint );
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

Fixed& Fixed::min( Fixed &nb1, Fixed &nb2 )
{
	if ( nb1.toFloat() < nb2.toFloat() )
		return ( nb1 );
	return ( nb2 );
}

const Fixed& Fixed::min( const Fixed &nb1, const Fixed &nb2 )
{
	if ( nb1.toFloat() < nb2.toFloat() )
		return ( nb1 );
	return ( nb2 );
}

Fixed& Fixed::max( Fixed &nb1, Fixed &nb2 )
{
	if ( nb1.toFloat() > nb2.toFloat() )
		return ( nb1 );
	return ( nb2 );
}

const Fixed& Fixed::max( const Fixed &nb1, const Fixed &nb2 )
{
	if ( nb1.toFloat() > nb2.toFloat() )
		return ( nb1 );
	return ( nb2 );
}


// Overload operators


std::ostream& operator << ( std::ostream &o, Fixed const &toPrint )
{
	o << toPrint.toFloat();
	return ( o );
}

Fixed Fixed::operator + ( const Fixed &rhs )
{
	return ( Fixed( this->toFloat() + rhs.toFloat() ) );
}

Fixed Fixed::operator - ( const Fixed &rhs )
{
	return ( Fixed( this->toFloat() - rhs.toFloat() ) );
}

Fixed Fixed::operator / ( const Fixed &rhs )
{
	return ( Fixed( this->toFloat() / rhs.toFloat() ) );
}

Fixed Fixed::operator * ( const Fixed &rhs )
{
	return ( Fixed( this->toFloat() * rhs.toFloat() ) );
}

bool Fixed::operator > ( const Fixed &rhs )
{
	return ( this->toFloat() > rhs.toFloat() );
}

bool Fixed::operator < ( const Fixed &rhs )
{
	return ( this->toFloat() < rhs.toFloat() );
}

bool Fixed::operator <= ( const Fixed &rhs )
{
	return ( this->toFloat() <= rhs.toFloat() );
}

bool Fixed::operator >= ( const Fixed &rhs )
{
	return ( this->toFloat() >= rhs.toFloat() );
}

bool Fixed::operator == ( const Fixed &rhs )
{
	return ( this->toFloat() == rhs.toFloat() );

}

bool Fixed::operator != ( const Fixed &rhs )
{
	return ( this->toFloat() != rhs.toFloat() );
}

Fixed Fixed::operator ++ ( int )
{
	Fixed tmp( *this );
	tmp._fixedPoint = this->_fixedPoint++;
	return ( tmp );
}

Fixed Fixed::operator -- ( int )
{
	Fixed tmp( *this );
	tmp._fixedPoint = this->_fixedPoint--;
	return ( tmp );
}

Fixed& Fixed::operator ++ ( void )
{
	++this->_fixedPoint;
	return ( *this );
}

Fixed& Fixed::operator -- ( void )
{
	--this->_fixedPoint;
	return ( *this );
}

Fixed& Fixed::operator = ( const Fixed &toCopy )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this == &toCopy )
		return ( *this );
	this->_fixedPoint = toCopy.getRawBits();
	return ( *this );
}
