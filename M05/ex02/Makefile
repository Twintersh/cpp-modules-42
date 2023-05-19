CC = c++ 
NAME = ex02
SRC = Bureaucrat.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp main.cpp AForm.cpp
HEADER = Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp AForm.hpp
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
	./$(NAME)

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
