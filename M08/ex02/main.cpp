#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(){
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	{
		std::cout << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	// /* Main 2
	{
		MutantStack<int, std::vector<int> > mstack;
		mstack.push(52);
		mstack.push(45);
		mstack.push(12);
		mstack.push(65);

		MutantStack<int, std::vector<int> > ms2(mstack);

		for (MutantStack<int, std::vector<int> >::iterator it = ms2.begin() ; it != ms2.end() ; it++){
			std::cout << *it << std::endl;
		}
	}
	// */
	return (0);
}