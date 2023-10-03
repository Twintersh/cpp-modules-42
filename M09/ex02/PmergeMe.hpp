#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <deque>
#include <vector>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <utility>
#include <climits>

typedef std::vector<int>					vector_int;
typedef std::vector<std::pair<int, int> >	vector_pair;

typedef std::deque<int> 					deque_int;
typedef std::deque<std::pair<int, int> >	deque_pair;

template <typename T>
void printContainer(const T &toPrint, std::string msg)
{
	typename T::const_iterator it;
	std::cout << msg;

	for (it = toPrint.begin() ; it != toPrint.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

class PmergeMe
{
	private :
		PmergeMe(void);
		PmergeMe(const PmergeMe &toCopy);
		~PmergeMe(void);
		static vector_int::iterator	binarySearchVector(int target, vector_int &vect);
		static deque_int::iterator 	binarySearchDeque(int target, deque_int &deq);


	public :
		static vector_int			fordJohnsonVector(vector_int X);
		static deque_int			fordJohnsonDeque(deque_int X);
		

};

#endif
