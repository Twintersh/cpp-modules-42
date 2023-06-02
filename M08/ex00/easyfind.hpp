#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int toFind){
	typename T::iterator	it; 

	it = std::find(container.begin(), container.end(), toFind);
	std::cout << *it << std::endl;
	if (it == container.end())
		throw (std::range_error("item not found"));
	return (it);
}
