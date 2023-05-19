#ifndef FT_TEMPLATE_HPP
#define FT_TEMPLATE_HPP

#include <iostream>

template <class myType>
void swap(myType &a, myType &b)
{
	myType tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class myType>
myType	min(myType &a, myType &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <class myType>
myType max(myType &a, myType &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif

