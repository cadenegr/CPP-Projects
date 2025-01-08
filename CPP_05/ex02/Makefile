# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 11:42:40 by cadenegr          #+#    #+#              #
#    Updated: 2024/12/06 14:09:27 by cadenegr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	aform
SRC				=	main.cpp AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJ				=	$(SRC:.cpp=.o)
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES_TO_CLEAN	=	*_shrubbery

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(FILES_TO_CLEAN)

re:	fclean all

.PHONY: all clean fclean re