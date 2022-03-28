NAME =	ex02

SRC = main.cpp \

OBJ = $(SRC:.cpp=.o)

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
