# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 14:47:54 by cadenegr          #+#    #+#              #
#    Updated: 2024/12/04 14:51:55 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	form
SRC				=	main.cpp Form.cpp Bureaucrat.cpp
OBJ				=	$(SRC:.cpp=.o)
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re