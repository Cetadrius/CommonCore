# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 10:11:27 by afilipe-          #+#    #+#              #
#    Updated: 2025/01/09 13:10:53 by afilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = errors.c free.c ft_split.c parce.c push.c push_swap.c \
reverse.c rotate.c sort.c stack_mag.c swap.c utilityfn.c
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
