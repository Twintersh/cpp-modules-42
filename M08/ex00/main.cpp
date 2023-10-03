#include "easyfind.hpp"

int main(){
	{ std::cout << "------ Find element that exists test:" << std::endl;
		try{
		std::vector<int> element;

		element.push_back(1);
		element.push_back(4);
		element.push_back(2);
		element.push_back(3);

		std::vector<int>::iterator it = easyfind(element, 4);
		std::cout << *it << std::endl;
		}catch (const std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{ std::cout << "------ Find element that does not exist test:" << std::endl;
		try{
		std::vector<int> element;

		element.push_back(1);
		element.push_back(4);
		element.push_back(2);
		element.push_back(3);

		std::vector<int>::iterator it = easyfind(element, 1000);
		std::cout << *it << std::endl;
		}catch (const std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{ std::cout << "------ Freed container test:" << std::endl;
		try{
		std::vector<int> *element = new std::vector<int>;

		element->push_back(1);
		element->push_back(4);
		element->push_back(2);
		element->push_back(3);

		delete element;
		element = NULL;
			std::vector<int>::iterator it = easyfind(*element, 4);
			std::cout << *it << std::endl;
		}catch (const std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return (0);
}
