#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>

class RPN
{
	private :
	public :
		RPN(void);
		RPN(const RPN &toCopy);
		RPN &operator = (const RPN &toCopy);
		~RPN(void);
};

#endif
