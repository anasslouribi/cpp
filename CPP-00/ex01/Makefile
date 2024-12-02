# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 14:55:45 by alouribi          #+#    #+#              #
#    Updated: 2024/12/02 15:41:41 by alouribi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCF = PhoneBook.cpp Contact.cpp

OBJ = $(SRCF:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

./%.opp: ./%.cpp ./PhoneBook.hpp ./Contact.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean