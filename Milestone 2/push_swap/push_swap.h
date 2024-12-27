/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:01:14 by afilipe-          #+#    #+#             */
/*   Updated: 2024/12/27 14:13:56 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
#include <stddef.h>

typedef struct stack
{
	int	nbr;
	int	index;
	int	set;
	struct stack	*target;
	struct stack	*next;
	struct stack	*prev;
		
}	t_stack;

long	ft_atol(const char *nptr);

#endif
