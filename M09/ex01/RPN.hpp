#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cstring>
#include <sstream>
#include <stack>

class RPN
{
	private :
		RPN(void);
		RPN(const RPN &toCopy);
		RPN &operator = (const RPN &toCopy);
		~RPN(void);

	public :
		static bool calculate(const std::string &expression);
};

#endif
