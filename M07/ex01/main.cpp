#include "iter.hpp"

template <class myType>
void print(myType &p){
	std::cout << p << std::endl;
}

template <class myType>
void addone(myType &nb){
	nb++;
}

int main(void){
	int numbers[] = {1, 2, 3, 4, 5};
	iter(numbers, 5, addone);
	iter(numbers, 5, print);

	std::string words[] = {"Hello", "Hi", "good bye", "fwifgiwe"};
	iter(words, 4, print);
	return (0);
}