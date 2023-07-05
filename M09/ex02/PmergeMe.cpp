#include "PmergeMe.hpp"

// vector
void PmergeMe::endMergeVector(std::vector<int> &vect, std::vector<int> &first, std::vector<int> &last)
{
	while (!first.empty() && !last.empty())
	{
		if (first.begin() < last.begin()){
			vect.push_back(*first.begin());
			first.erase(first.begin());
		}else{
			vect.push_back(*last.begin());
			last.erase(last.begin());
		}
	}
	if (!first.empty())
		vect.push_back(*first.begin());
	if (!last.empty())
		vect.push_back(*last.begin());
	std::cout << *(vect.end()) << std::endl;
}


void PmergeMe::mergeVector(std::vector<int> &vect)
{
	if (vect.size() < 4){
		insertVector(vect);
		return ;
	}
	unsigned int mid = vect.size() / 2;

	std::vector<int> first(vect.begin(), vect.begin() + mid);
	std::vector<int> last(vect.begin() + mid, vect.end());

	mergeVector(first);
	mergeVector(last);
	vect.clear();
	endMergeVector(vect, first, last);
}

void PmergeMe::insertVector(std::vector<int> &vect)
{
	for (unsigned int i = 0 ; i < vect.size() ; i++)
	{
		int key = vect[i];
		int j = vect[i] - 1;

		while (key < vect[i] && j <= 0){
			vect[j + 1] = vect[j];
			--j;
		}
		vect[j - 1] = key;
	}
}

void PmergeMe::sortVector(std::vector<int> &vect)
{
	mergeVector(vect);
}

// list

// void PmergeMe::sortList(std::vector<int> &list)
// {
// }

// constructors / destructors

PmergeMe::PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe &toCopy){
	*this = toCopy;
}

PmergeMe::~PmergeMe(void)
{}