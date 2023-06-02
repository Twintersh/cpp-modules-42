#include "RPN.hpp"

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
