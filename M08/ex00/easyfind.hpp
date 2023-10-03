#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int toFind){
	typename T::iterator	it;

	if (&container == (void *)0)
		throw (std::range_error("invalid container"));

	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (std::range_error("item not found"));
	return (it);
}
