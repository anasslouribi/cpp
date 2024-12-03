NAME = BRAIN
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = main.cpp \

OBJ = $(SRCF:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

./%.opp: ./%.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
