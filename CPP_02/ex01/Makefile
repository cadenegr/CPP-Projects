# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 14:31:04 by cadenegr          #+#    #+#              #
#    Updated: 2024/10/21 14:34:59 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fixed_point
SRC				=	main.cpp Fixed.cpp
OBJ				=	$(SRC:.cpp=.o)
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re