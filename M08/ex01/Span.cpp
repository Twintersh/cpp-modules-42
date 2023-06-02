#include "Span.hpp"

void	Span::addNumber(const int &nb){
	if ((int)_numbers.size() >= _maxNb)
		throw(std::out_of_range("number of elements is max."));
	_numbers.push_back(nb);
}

void	Span::addNumber(int *arr, const int &arrlen){
	if ((int)_numbers.size() + arrlen > _maxNb)
		throw(std::out_of_range("number of elements is max."));
	for (int i = 0 ; i < arrlen ; i++){
		_numbers.push_back(*arr);
		arr++;
	}
}

int Span::shortestSpan(void){
	if ((int)_numbers.size() <= 1)
		throw (std::out_of_range("there is not enough numbers in the range."));

	int	shortest = INT_MAX;
	int tmp;

	for (std::list<int>::iterator it = _numbers.begin() ; it != _numbers.end() ; it++){
		for (std::list<int>::iterator cur = _numbers.begin() ; cur != _numbers.end() ; cur++){
			tmp = abs(*it - *cur);
			if (tmp < shortest && it != cur)
				shortest = tmp;
		}
	}
	return (shortest);
}

int Span::longestSpan(void){
	if ((int)_numbers.size() <= 1)
		throw (std::out_of_range("there is not enough numbers in the range."));

	int	longest = 0;
	int tmp;

	for (std::list<int>::iterator it = _numbers.begin() ; it != _numbers.end() ; it++){
		for (std::list<int>::iterator cur = _numbers.begin() ; cur != _numbers.end() ; cur++){
			tmp = abs(*it - *cur);
			if (tmp > longest && it != cur)
				longest = tmp;
		}
	}
	return (longest);
}

/*
*	Constructors / Destructors
*/

Span::Span(const int &N) : _maxNb(N){
}

Span::Span(const Span& toCopy){	
	*this = toCopy;
}

Span& Span::operator=(const Span &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_maxNb = toCopy._maxNb;
	this->_numbers = toCopy._numbers;
	return (*this);
}

Span::~Span(void){
}
