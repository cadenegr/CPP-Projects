# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 13:30:41 by cadenegr          #+#    #+#              #
#    Updated: 2024/12/04 13:36:40 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat
SRC			=	main.cpp Bureaucrat.cpp
OBJ			=	$(SRC:.cpp=.o)
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re