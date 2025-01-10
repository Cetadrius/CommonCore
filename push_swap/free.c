/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 08:13:55 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/10 11:16:41 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// frees the stacks 
void	free_stacks(t_stack **a, t_stack **b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *a;
	while (temp1)
	{
		temp1 = (*a)->next;
		free(*a);
		*a = temp1;
	}
	free(a);
	temp2 = *b;
	while (temp2)
	{
		temp2 = (*b)->next;
		free(*b);
		*b = temp2;
	}
	free(b);
}

/* frees the imput;
frees each str in imput and the array itself; 
to be used after parcing; */
void	free_input(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
}

// completly clear the memory;
void	complete_free(char **str, t_stack **a, t_stack **b, int argc)
{
	if (argc == 2 && str)
	{
		free_input(str);
	}
	free_stacks(a, b);
}
