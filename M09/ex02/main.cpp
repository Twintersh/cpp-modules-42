#include "PmergeMe.hpp"

static bool isNumber(const std::string &nb)
{
	unsigned int i = 0;
	if (nb[0] == '-' || nb[0] == '+')
		i++;
	while (i < nb.length())
	{
		if (!isdigit(nb[i]))
			return (false);
		i++;
	}
	return (true);
}

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Bad number of arguments" << std::endl;
		return (1);
	}

	std::string			tmp(argv[1]);
	std::istringstream	sNumbers(tmp);
	std::string			cur;

	std::vector<int>	vect;
	// std::list<int>		list;

	while (sNumbers >> cur){
		if (!isNumber(cur)){
			std::cout << "Error" << std::endl;
			return (1);
		}
		vect.push_back(atoi(cur.c_str()));
		// list.push_back(atoi(cur.c_str()));
	}

	PmergeMe::sortVector(vect);
	// PmergeMe::sortList(list);
	return (0);
}