CC = c++ 
NAME = FragTrap
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ=$(SRC:.cpp=.o)
CFLAGS = -Werror -Wall -Wextra -g3 -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

re : fclean all

clean :
	rm -rf $(OBJ)

run : all
	./$(NAME) 

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
