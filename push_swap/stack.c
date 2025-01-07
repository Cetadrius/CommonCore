/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 08:52:56 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 11:36:24 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_stack(t_stack **a, char **argv, bool flag_argc_2)
{
	long	nb;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntax(argv[i]))
		{
			error(a, argv, flag_argc_2);
		}
		nb = ft_atol(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			error(a, argv, flag_argc_2);
		}
		if (repeted_values(*a, (int)nb))
		{
			error(a, argv, flag_argc_2);
		}
		join_stack (a, (int)nb);
		i++;
	}
	if (flag_argc_2)
		free_split(argv);
}
