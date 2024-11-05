# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 10:58:55 by afilipe-          #+#    #+#              #
#    Updated: 2024/11/05 10:58:58 by afilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
CFLAGS			+= -g

BUILD_PATH		= .build
SRCS_PATH		= srcs
INC_PATH		= inc
LIB_PATH		= lib

SRCS	= ft_print_auxft.c \
				ft_printc.c ft_printf.c ft_printhex.c \
				ft_printnbr.c ft_printpoint.c ft_printstr.c \
				ft_printunsig.c

OBJS	= ${SRCS:.c=.o}
LIBFT = ./libft/libft.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

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