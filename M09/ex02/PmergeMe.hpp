#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <cstdlib>

class PmergeMe
{
	private :
		PmergeMe(void);
		PmergeMe(const PmergeMe &toCopy);
		~PmergeMe(void);
		// PmergeMe &operator= (const PmergeMe &toCopy);

	public :
		static void endMergeVector(std::vector<int> &vect, std::vector<int> &first, std::vector<int> &last);
		static void mergeVector(std::vector<int> &vect);
		static void insertVector(std::vector<int> &vect);
		static void sortVector(std::vector<int> &vect);

		// static void sortList(std::list<int> &list);
};

#endif
