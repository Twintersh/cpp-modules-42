#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <list>
#include <limits.h>
#include <algorithm>
#include <vector>

class Span
{
	private :
		unsigned int	_maxNb;
		std::list<int> _numbers;

	public :
		void addNumber(const int &nb);
		void printContent(void);

		template <typename T>
		void addNumbers(T first, T last){
			this->_numbers.insert(this->_numbers.end(), first, last);
		};

		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		Span(const unsigned int &N);
		Span(const Span &toCopy);
		Span &operator = (const Span &toCopy);
		~Span(void);
};

#endif
