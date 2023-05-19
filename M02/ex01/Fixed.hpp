#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		static const int	_nbFractionalBits = 8;
		int					_fixedPoint;

	public :
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &toCopy);
		Fixed &operator = (const Fixed &toCopy);
		~Fixed(void);
};

std::ostream &operator << (std::ostream &o, Fixed const &toPrint);

#endif
