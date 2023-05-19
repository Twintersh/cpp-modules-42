CC = c++ 
NAME = convert
SRC = ScalarConverter.cpp main.cpp
HEADER = ScalarConverter.hpp
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
	./$(NAME) $(ARG)

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
