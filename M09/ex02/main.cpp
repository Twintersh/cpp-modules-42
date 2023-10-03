#include "PmergeMe.hpp"

static bool isThereDuplicate(vector_int vect)
{
	std::sort(vect.begin(), vect.end());
	for (vector_int::iterator it = vect.begin() ; it != vect.end() ; it++)
	{
		vector_int::iterator it2 = it;
		it2++;
		if (it2 == vect.end())
			break;
		if (*it == *it2)
			return (false);
	}
	return (true);
}

static bool isValidNumber(const char *nb)
{
	char *endptr;
	long int value = std::strtol(nb, &endptr, 10);
	if (value < INT_MIN || value > INT_MAX)
		return (false);

	unsigned int i = 0;
	if (nb[0] == '-' || nb[0] == '+')
		i++;
	while (nb[i])
	{
		if (!isdigit(nb[i]))
			return (false);
		i++;
	}
	return (true);
}

int main(int argc, char **argv)
{
	if (argc < 3){
		std::cout << "Error: Bad number of arguments." << std::endl;
		return (1);
	}

	std::vector<int>	vect;
	std::deque<int>		deq;
	clock_t 			start, vecClock, deqClock;
	double 				vecTime, deqTime;

	for (int i = 1 ; i < argc ; i++)
	{
		if (!isValidNumber(argv[i])){
			std::cout << "Error: All inputs must be int values." << std::endl;
			return (1);
		}
		vect.push_back(atoi(argv[i]));
		deq.push_back(atoi(argv[i]));
	}
	if (!isThereDuplicate(vect))
	{
		std::cout << "Error: duplicate numbers found in the range." << std::endl;
		return (1);
	}

	printContainer(vect, "Before:\n");
	start = clock();
	vect = PmergeMe::fordJohnsonVector(vect);
	vecClock = clock();
	deq = PmergeMe::fordJohnsonDeque(deq);
	deqClock = clock();
	printContainer(vect, "After:\n");
	vecTime = (vecClock - start) / (double) CLOCKS_PER_SEC * 1000000.0;
	deqTime = (deqClock - vecClock) / (double) CLOCKS_PER_SEC * 1000000.0;

	std::cout << "\ntime to process a range of " << vect.size() << " elements with std::vector : " << std::fixed << std::setprecision(3) << vecTime << " us" << std::endl;
	std::cout << "time to process a range of " << deq.size() << " elements with std::deque : " << std::fixed << std::setprecision(3) << deqTime << " us" << std::endl;

	return (0);
}
