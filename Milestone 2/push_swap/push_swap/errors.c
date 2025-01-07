/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:56:54 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 12:30:54 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **argv)
{
	int	i;

	i = -1;
	if (argv == NULL || *argv == NULL)
		return ;
	while (argv[i])
	{
		free(argv[i++]);
	}
	free(argv - 1);
}

void	clear_stack(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*curr;

	if (stack == NULL || *stack == NULL)
		return ;
	curr = *stack;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	*stack = NULL;
}

void	error(t_stack **a, char **argv, bool flag_argc_2)
{
	clear_stack(a);
	if (flag_argc_2)
	{
		free_split(argv);
	}
	ft_putstr_fd("Error", 2);
	exit (1);
}

int	repeted_values(t_stack *val, int n)
{
	if (val == NULL)
	{
		return (0);
	}
	while (val)
	{
		if (val->nbr == n)
			return (1);
		val = val->next;
	}
	return (0);
}

int	syntax(char *strnbr)
{
	int		i;
	char	*str;

	i = 0;
	str = strnbr;
	if (!(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
		return (1);
	if ((str[i] == '+' || str[i] == '-')
		&& !(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	while (str[i++])
	{
		if (!(str[i] >= '0' || str[i] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}
