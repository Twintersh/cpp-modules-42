#include "Span.hpp"

int main(){
	{ std::cout << "----- classic usage (shortest | lastest)" << std::endl;
		try{
		Span list(10);

			list.addNumber(100);
			list.addNumber(50);
			list.addNumber(5);
			list.addNumber(18);
			list.addNumber(58);
			list.addNumber(24);
			list.addNumber(96);
			list.addNumber(97);

			int shortest = list.shortestSpan();
			unsigned int longest = list.longestSpan();
			std::cout << shortest << " | " << longest << std::endl;
		}catch (std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{ std::cout << "----- addNumbers() vector" << std::endl;
		try{
			Span list(10);
			std::vector<int> vec;

			list.addNumber(100);
			vec.push_back(50);
			vec.push_back(5);
			vec.push_back(18);
			vec.push_back(58);
			vec.push_back(24);
			vec.push_back(96);
			list.addNumbers(vec.begin(), vec.end());

			Span listcpy(list);

			unsigned int shortest = listcpy.shortestSpan();
			unsigned int longest = listcpy.longestSpan();
			std::cout << shortest << " | " << longest << std::endl;
		}catch (std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return(0);
}
