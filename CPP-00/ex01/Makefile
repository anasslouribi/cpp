# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 14:55:45 by alouribi          #+#    #+#              #
#    Updated: 2024/11/28 18:22:53 by alouribi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = PhoneBook.cpp

OBJ = $(SRCF:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

./%.opp: ./%.cpp ./PhoneBook.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean