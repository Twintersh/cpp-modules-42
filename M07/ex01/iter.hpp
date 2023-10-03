#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class myType>
void iter(myType *p, size_t len, void (*function)(myType&)){
	for (size_t i = 0 ; i < len ; i++)
		function(p[i]);
}

#endif
