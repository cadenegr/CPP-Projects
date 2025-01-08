# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 09:38:58 by cadenegr          #+#    #+#              #
#    Updated: 2024/11/11 09:48:20 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	scavtrap
SRC				=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ				=	$(SRC:.cpp=.o)
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
