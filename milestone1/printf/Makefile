# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 10:58:55 by afilipe-          #+#    #+#              #
#    Updated: 2024/11/05 15:31:40 by afilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_PATH		= .build
SRCS_PATH		= srcs
INC_PATH		= inc
PRINTF_ARC	= libftprintf.a

SRCS	= ft_print_auxft.c \
				ft_printc.c ft_printf.c ft_printhex.c \
				ft_printnbr.c ft_printpoint.c ft_printstr.c \
				ft_printunsig.c ft_itoa.c ft_strlen.c ft_strdup.c \
				ft_util.c

OBJS	= ${SRCS:.c=.o}
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -g

NAME	= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
