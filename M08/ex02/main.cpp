#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(){
	/* Main 1
	{
		MutantStack<int, std::deque<int> > mstack;
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
		return (0);
	}
	// */
	// /* Main 2
	{
		MutantStack<int, std::list<int> > mstack;
		mstack.push(52);
		mstack.push(45);
		mstack.push(12);
		mstack.push(65);
		
		for (MutantStack<int, std::list<int> >::iterator it = mstack.begin() ; it != mstack.end() ; it++){
			std::cout << *it << std::endl;
		}
	}
}