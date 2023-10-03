#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack(void) : std::stack<T, Container>() {};
		MutantStack(const MutantStack<T, Container> &toCopy) {
			*this = toCopy;
		};
		~MutantStack(void) {};
		MutantStack<T, Container> &operator=(const MutantStack<T, Container> &toCopy){
			if (this == &toCopy)
				return (*this);
			this->std::stack<T, Container>::operator=(toCopy);
			return (*this);
		};

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

		iterator begin() {
			return (this->c.begin());
		}
		iterator end() {
			return (this->c.end());
		}

		const_iterator begin() const { 
			return (this->c.begin());
		}
		const_iterator end() const {
			return (this->c.end());
		}
};

#endif