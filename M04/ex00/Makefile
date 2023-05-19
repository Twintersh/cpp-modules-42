CC = c++ 
NAME = ex00
SRC = Animal.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp main.cpp
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
	clear && ./$(NAME) 

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
