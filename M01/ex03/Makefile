CC = c++ 
NAME = unnecessary_violence
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADER = HumanA.hpp HumanB.hpp Weapon.hpp
OBJ=$(SRC:.cpp=.o)
CFLAGS = -Werror -Wall -Wextra -g3 -std=c++98

all : $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

re : fclean all

clean :
	rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
