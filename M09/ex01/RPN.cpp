#include "RPN.hpp"

bool RPN::calculate(const std::string &expression)
{
	std::istringstream	strm(expression);
	std::stack<int>		numbers;
	int	a, b;

	for (std::string str ; strm >> str ;)
	{
		if (str.length() > 1 || (!isdigit(str[0]) && !strchr("+-*/", str[0])))
			return (1);
		if (isdigit(str[0])){
			numbers.push(	str[0] - '0');
			continue;
		}
		if (numbers.size() < 2)
			return (1);
		b = numbers.top();
		numbers.pop();
		a = numbers.top();
		numbers.pop();
		switch (str[0]){
			case ('+'):
				numbers.push(a + b);
				break;
			case ('/'):
				if (b == 0)
					return (1);
				numbers.push(a / b);
				break;
			case ('*'):
				numbers.push(a * b);
				break;
			case ('-'):
				numbers.push(a - b);
				break;
			default:
				return (1);
				break;
		}
	}
	if (numbers.size() > 1)
		return (1);
	std::cout << numbers.top() << std::endl;
	return (0);
}

/*
*	Constructors / Destructors
*/

RPN::RPN(void){
}

RPN::RPN(const RPN& toCopy){
	*this = toCopy;
}

RPN& RPN::operator=(const RPN &toCopy){
	if (this == &toCopy)
		return (*this);
	return (*this);
}

RPN::~RPN(void){
}
