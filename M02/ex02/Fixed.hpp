#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		static const int	_nbFractionalBits = 8;
		int					_fixedPoint;

	public :
		static Fixed&			min( Fixed &nb1, Fixed &nb2 );
		static const Fixed&		min( const Fixed &nb1, const Fixed &nb2 );
		static Fixed&			max( Fixed &nb1, Fixed &nb2 );
		static const Fixed&		max( const Fixed &nb1, const Fixed &nb2 );

		int						getRawBits( void ) const;
		void					setRawBits( int const raw );
		float					toFloat( void ) const;
		int						toInt( void ) const;

		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &toCopy );
		
		Fixed &operator = ( const Fixed &toCopy );

		Fixed operator + ( const Fixed &rhs );
		Fixed operator - ( const Fixed &rhs );
		Fixed operator / ( const Fixed &rhs );
		Fixed operator * ( const Fixed &rhs );

		bool operator > ( const Fixed &rhs );
		bool operator < ( const Fixed &rhs );
		bool operator >= ( const Fixed &rhs );
		bool operator <= ( const Fixed &rhs );
		bool operator == ( const Fixed &rhs );
		bool operator != ( const Fixed &rhs );

		Fixed operator ++ ( int );
		Fixed operator -- ( int );
		Fixed& operator ++ ( void );
		Fixed& operator -- ( void );

		~Fixed( void );
};

std::ostream &operator << ( std::ostream &o, Fixed const &toPrint );

#endif
