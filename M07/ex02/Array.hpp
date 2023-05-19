#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <class T>
class Array
{
	private:
		int	_length;
		T			*_array;

	public:
		int	size(void) const{
			return (this->_length);
		}
		
		/*	Constructors / destructors	*/
		Array(void) : _length(0){
			_array = new T[0];
		};
		Array(const Array& toCopy) : _array(NULL){
			*this = toCopy;
		};
		Array(int len) : _length(len){
			_array = new T[len];
		};
		~Array(void){
			delete [] this->_array;
		};

		/*	overloads operators	*/
		T		&operator[] (const int &index) const{
			if (index > this->_length - 1 || index < 0)
				throw (std::out_of_range("Invalid index value"));
			return (this->_array[index]);
		};
		Array	&operator = (const Array &toCopy){
			if (this == &toCopy)
				return (*this);
			this->_array = new T[toCopy.size()];
			this->_length = toCopy.size();
			for (int i = 0 ; i < toCopy.size() ; i++)
				this->_array[i] = toCopy._array[i];
			return (*this);
		}; 
};

#endif
