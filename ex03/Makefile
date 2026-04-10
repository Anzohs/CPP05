# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/10 22:21:58 by jomunoz           #+#    #+#              #
#    Updated: 2026/04/10 22:24:53 by jomunoz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++
FLAGS = -Iinc -Wall -Wextra -Werror -std=c++98

SRC = src/Bureaucrat.cpp src/main.cpp src/AForm.cpp \
	src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp \
	src/ShrubberyCreationForm.cpp src/Intern.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean