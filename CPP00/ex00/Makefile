NAME =	megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: $(SRC)%.cpp
	$(CPP) $(FLAGS) -c $< -o

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
