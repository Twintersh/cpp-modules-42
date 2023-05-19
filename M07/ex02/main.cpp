#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<char> test(3);
	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	
	Array<char> test2(test);
	try{
		std::cout << test2[1] << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
