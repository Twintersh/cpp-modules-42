#include "Span.hpp"

void	Span::addNumber(const int &nb){
	if (_numbers.size() >= _maxNb)
		throw(std::out_of_range("number of elements is max."));
	_numbers.push_back(nb);
}

unsigned int Span::shortestSpan(void){
	if (_numbers.size() <= 1)
		throw (std::out_of_range("there is not enough numbers in the range."));
	unsigned int shortest = UINT_MAX;
	int tmp;
	this->_numbers.sort();
	std::list<int>::iterator it = this->_numbers.begin();
	while (1)
	{
		tmp = *it;
		it++;
		if (it == this->_numbers.end())
			break;
		if ((unsigned)(*it - tmp) < shortest)
			shortest = (unsigned)(*it - tmp);
	}
	return (shortest);
}

unsigned int Span::longestSpan(void){
	if (_numbers.size() <= 1)
		throw (std::out_of_range("there is not enough numbers in the range."));
	return (*std::max_element(this->_numbers.begin(), this->_numbers.end()) -
		*std::min_element(this->_numbers.begin(), this->_numbers.end()));
}

void Span::printContent(void){
	for (std::list<int>::iterator it = this->_numbers.begin() ; it != this->_numbers.end() ; it++)
		std::cout << *it << std::endl;
}

/*
*	Constructors / Destructors
*/

Span::Span(const unsigned int &N) : _maxNb(N){
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
