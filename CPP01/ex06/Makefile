NAME =	harlFilter

SRC = 	main.cpp \
		Harl.cpp \

HEADER = Harl.hpp \

OBJ = $(SRC:.cpp=.o)

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ) $(HEADER) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP) $(FLAGS) -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
