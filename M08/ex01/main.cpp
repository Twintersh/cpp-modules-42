#include "Span.hpp"

// int main(){
// 	Span oui(1);
// 	int a[] = {2}; 
// 	int len = sizeof(a) / sizeof(int);

// 	try{
// 		oui.addNumber(a, len);
// 		oui.addNumber(3);
		
// 		int shortest = oui.shortestSpan();
// 		int longest = oui.longestSpan();
// 		std::cout << shortest << "|" << longest << std::endl;
// 	}catch (std::exception &e){
// 		std::cout << "Error: " << e.what() << std::endl;
// 	}
// 	return(0);
// }

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
