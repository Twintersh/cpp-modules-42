#include "Serializer.hpp"

int main(void)
{
	Data atchoum;
	uintptr_t brochette;
	Data *crocodile;

	brochette = Serializer::serialize(&atchoum);
	std::cout << brochette << std::endl;
	crocodile = Serializer::deserialize(brochette);
	std::cout << crocodile << std::endl;
	std::cout << &atchoum << std::endl;

	return (0);
}