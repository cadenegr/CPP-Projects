# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 10:47:30 by cadenegr          #+#    #+#              #
#    Updated: 2024/10/15 10:52:34 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	references
SRC			=	main.cpp
OBJ			=	$(SRC:.cpp=.o)
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
