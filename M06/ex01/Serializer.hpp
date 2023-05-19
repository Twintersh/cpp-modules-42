#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <stdint.h>

typedef struct Data{
	int index;
	int number;
}Data;

class Serializer{
	private:
		Serializer(void);
		Serializer(const Serializer &toCopy);

	public:
		static Data*		deserialize(uintptr_t raw);
 		static uintptr_t	serialize(Data *ptr);
		
		Serializer &operator=(const Serializer &toCopy);
		~Serializer(void);
};

#endif