CC = c++ 
NAME = PmergeMe
SRC = main.cpp PmergeMe.cpp
HEADER = PmergeMe.hpp
OBJ=$(SRC:.cpp=.o)
CFLAGS = -Werror -Wall -Wextra -std=c++98 -g3

all : $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

re : fclean all

clean :
	rm -rf $(OBJ)

run : all
	clear && valgrind ./$(NAME) `shuf -i 0-3000 -n 300 | tr "\n" " "` ; echo ""

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all

	# clear && valgrind ./$(NAME) 9 8 7 6 5 4 3 2 1 ; echo ""
 