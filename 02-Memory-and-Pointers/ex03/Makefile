# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 11:16:09 by cadenegr          #+#    #+#              #
#    Updated: 2024/10/15 13:30:11 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	unnecessary_violence
SRC			=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ			=	$(SRC:.cpp=.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re