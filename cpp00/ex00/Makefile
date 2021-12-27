# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/29 16:34:58 by alpascal          #+#    #+#              #
#    Updated: 2021/12/26 17:38:22 by alpascal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREEN = `tput setaf 2`
RED = `tput setaf 1`
END = `tput sgr0`

NAME 	= megaphone

SRCS	= megaphone.cpp

OBJ		= $(SRCS:.cpp=.o)

RM 		= rm -rf
CC 		= clang++

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) -Wall -Wextra -Werror $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) binary is ready !$(END)"

%.o: %.c
	@echo "$(GREEN)Compiling source files to objects $<$ ...$(END)"
	$(CC) -Wall -Wextra -Werror -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)
	@echo "$(RED)$(NAME) removed$(END)"

re: clean fclean all
