# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 10:11:27 by afilipe-          #+#    #+#              #
#    Updated: 2025/01/07 12:28:17 by afilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = errors.c push_swap_init.c push_swap.c push.c \
	reverse_rotate.c rotate.c sort.c split.c stack_utils.c \
	stack.c swap.c util.c main.c 
OBJ = $(SRC:.c=.o)
NAME = push_swap
RM = rm -f

all :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) $(GDB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re
