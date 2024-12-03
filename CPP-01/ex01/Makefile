NAME = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = Zombie.cpp zombieHorde.cpp  main.cpp \

OBJ = $(SRCF:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

./%.opp: ./%.cpp ./Zombie.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
