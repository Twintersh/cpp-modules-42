#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <list>
#include <limits.h>

class Span
{
	private :
		int	_maxNb;
		std::list<int> _numbers;

	public :
		void addNumber(const int &nb);
		void addNumber(int *arr, const int &arrlen);

		int shortestSpan(void);
		int longestSpan(void);

		Span(const int &N);
		Span(const Span &toCopy);
		Span &operator = (const Span &toCopy);
		~Span(void);
};

#endif
