# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 11:41:43 by cadenegr          #+#    #+#              #
#    Updated: 2024/11/12 15:50:18 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	abstract
SRC			=	main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ			=	$(SRC:.cpp=.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f	$(NAME)

re: fclean all

.PHONY: all clean fclean re