#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		static const int	nbFractionalBits = 8;
		int					rawBits;

	public :
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	
		Fixed(void);
		Fixed(const Fixed &toCopy);
		Fixed &operator = (const Fixed &toCopy);
		~Fixed(void);
};

#endif
