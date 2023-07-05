CC = c++ 
NAME = PmergeMe
SRC = main.cpp PmergeMe.cpp
HEADER = PmergeMe.hpp
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

run : all
	clear && ./$(NAME) "5 4 3 2 1" ; echo ""

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
