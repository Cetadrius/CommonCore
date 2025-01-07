/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:35:29 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 13:30:27 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_sort(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static t_stack	*ft_highest(t_stack *stack)
{
	int		highest;
	t_stack	*highest_plate;

	if (stack == NULL)
		return (0);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->nbr > highest)
		{
			highest = stack->nbr;
			highest_plate = stack;
		}
		stack = stack->next;
	}
	return (highest_plate);
}

void	three_sort(t_stack **a)
{
	t_stack	*highest_plate;

	highest_plate = ft_highest(*a);
	if (highest_plate == *a)
		ra(a, false);
	else if ((*a)->next == highest_plate)
		rra(a, false);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a, false);
}

void	five_sort(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		start_tables(*a, *b);
		finish_rotation(a, smallest_stack(*a), 'a');
		pb(b, a, false);
	}
}
