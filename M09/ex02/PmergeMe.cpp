#include "PmergeMe.hpp"

template <typename Temp>
static typename Temp::iterator ft_find(Temp&container, int target)
{
	for (typename Temp::iterator it = container.begin() ; it != container.end() ; it++){
		if (it->first == target)
			return (it);
	}
	return (container.end());
}

// DEQUE

deque_int PmergeMe::fordJohnsonDeque(deque_int X)
{
	int n = X.size();
	deque_pair deqPair;
	deque_int S;

	if (n == 1)
		return (X);
	// create the pairs
	for (deque_int::iterator it = X.begin() ; it != X.end() ; it++)
	{
		deque_int::iterator it2 = it;
		it++;
		if (it == X.end())
			break;
		std::pair<int, int> pair;
		pair.first = (*it > *it2) ? *it : *it2;
		pair.second = (*it > *it2) ? *it2 : *it;
		deqPair.push_back(pair);
	}
	// put max of each pair into S
	for (deque_pair::iterator it = deqPair.begin() ; it != deqPair.end() ; it++)
		S.push_back(it->first);

	if (X.size() % 2)
		S.push_back(X.back());
	S = PmergeMe::fordJohnsonDeque(S);
	// Put the element that was paired with the first element in S at the top (avoid one step)
	deque_pair::iterator smallest = ft_find(deqPair, S.front());
	if (smallest != deqPair.end()){
		S.insert(S.begin(), smallest->second);
		deqPair.erase(smallest);
	}
	// Binary search to put the paired elements in S
	for (deque_pair::iterator it = deqPair.begin() ; it != deqPair.end() ; it++)
		S.insert(PmergeMe::binarySearchDeque(it->second, S), it->second);
	
	return (S);
}

deque_int::iterator PmergeMe::binarySearchDeque(int target, deque_int &deq)
{
	int left = 0;
	int right = deq.size();
	int mid;
	
	while (left <= right){
		mid = (right + left) / 2;
		if (deq[mid] > target)
			right = mid - 1;
		else if (deq[mid] < target) 
			left = mid + 1;
	}
	deque_int::iterator it = deq.begin();
	std::advance(it, left);
	return (it);
}


// VECTORS

vector_int PmergeMe::fordJohnsonVector(vector_int X)
{
	int n = X.size();
	vector_pair vectPair;
	vector_int S;

	if (n == 1)
		return (X);
	// create the pairs
	for (vector_int::iterator it = X.begin() ; it != X.end() ; it++)
	{
		vector_int::iterator it2 = it;
		it++;
		if (it == X.end())
			break;
		std::pair<int, int> pair;
		pair.first = (*it > *it2) ? *it : *it2;
		pair.second = (*it > *it2) ? *it2 : *it;
		vectPair.push_back(pair);
	}
	// put max of each pair into S
	for (vector_pair::iterator it = vectPair.begin() ; it != vectPair.end() ; it++)
		S.push_back(it->first);

	if (X.size() % 2)
		S.push_back(X.back());
	S = PmergeMe::fordJohnsonVector(S);
	// Put the element that was paired with the first element in S at the top (avoid one step)
	vector_pair::iterator smallest = ft_find(vectPair, S.front());
	if (smallest != vectPair.end()){
		S.insert(S.begin(), smallest->second);
		vectPair.erase(smallest);
	}
	// Binary search to put the paired elements in S
	for (vector_pair::iterator it = vectPair.begin() ; it != vectPair.end() ; it++)
		S.insert(PmergeMe::binarySearchVector(it->second, S), it->second);
	
	return (S);
}

vector_int::iterator PmergeMe::binarySearchVector(int target, vector_int &vect)
{
	int left = 0;
	int right = vect.size();
	int mid;
	
	while (left <= right){
		mid = (right + left) / 2;
		if (vect[mid] > target)
			right = mid - 1;
		else if (vect[mid] < target) 
			left = mid + 1;
	}
	vector_int::iterator it = vect.begin();
	std::advance(it, left);
	return (it);
}

// constructors / destructors

PmergeMe::PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe &toCopy)
{
	*this = toCopy;
}

PmergeMe::~PmergeMe(void)
{}