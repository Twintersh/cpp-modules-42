#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// if a cast from a reference fails, dynamic_cast returns a exception
void identify(Base &p)
{
	std::cout << "reference identify: " << std::flush;
	try{
		A& a = dynamic_cast< A& >(p);
		std::cout << "A" << std::endl;
		(void)a;
	}catch (std::exception &e){}
	try{
		B& b = dynamic_cast< B& >(p);
		std::cout << "B" << std::endl;
		(void)b;
	}catch (std::exception &e){}
	try{
		C& c = dynamic_cast< C& >(p);
		std::cout << "C" << std::endl;
		(void)c;
	}catch (std::exception &e){}
}

// dynamic cast returns NULL if cast fails.
void identify(Base *p)
{
	std::cout << "pointer identify:   " << std::flush;
	if (dynamic_cast< A* >(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast< C* >(p))
		std::cout << "C" << std::endl;
	else if (dynamic_cast< B* >(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

Base *generate (void)
{
	Base *element;
	switch (rand() % 3)
	{
		case (0):
			element = new A;
			std::cout << "element is A" << std::endl;
			break;
		case (1):
			element = new B;
			std::cout << "element is B" << std::endl;
			break;
		case (2):
			element = new C;
			std::cout << "element is C" << std::endl;
			break;
	}
	return (element);
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0 ; i < 10 ; i++)
	{
		{		
			Base *element;
			element = generate();
			identify(element);
			identify(*element);
			std::cout << std::endl;
			delete element;
		}
	}
	return (0);
}