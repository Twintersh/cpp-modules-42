#include "easyfind.hpp"

int main(){
	std::vector<int> element;

	element.push_back(1);
	element.push_back(2);
	element.push_back(3);
	element.push_back(4);

	try{
		std::vector<int>::iterator it = easyfind(element, 4);
		std::cout << *it << std::endl;
	}catch (const std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}