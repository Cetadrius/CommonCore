/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crate_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:16:43 by afilipe-          #+#    #+#             */
/*   Updated: 2024/12/27 14:50:31 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_stack(int argc, char **argv, int imput_type)
{
	t_stack	*stack;
	int	i;

	stack = ft_calloc(sizeof(t_stack), (argc +1));
	if (stack == NULL)
		return (NULL);
	
	i = 0;
	while (i < (argc - 1))
	{
		if (imput_type == 1)
		{
			stack[i].nbr = ft_atoi(argv[i]);
			stack[i].set = 1;
		}
		else
		{
			stack[i].nbr = 0;
			stack[i].set = 0;
		}
		stack[i].index = i;
		++i;
	}
	stack[i].index = -1;
	return (stack);
}