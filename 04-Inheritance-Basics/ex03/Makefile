# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 11:44:41 by cadenegr          #+#    #+#              #
#    Updated: 2024/11/11 13:39:29 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	diamond
SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ			=	$(SRC:.cpp=.o)
CXX			=	c++
CXXFLASG	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re