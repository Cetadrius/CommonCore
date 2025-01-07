/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:37:34 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 12:34:45 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_position(t_stack *stack)
{
	int	i;
	int	line;

	i = 0;
	if (stack == NULL)
		return ;
	line = stack_size(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= line)
			stack->abv_med = true;
		else
			stack->abv_med = false;
		stack = stack->next;
		i++;
	}
}

static void	find_target(t_stack *a, t_stack *b)
{
	t_stack	*curr_a;
	t_stack	*target;
	long	best_mach;

	while (b)
	{
		best_mach = LONG_MAX;
		curr_a = a;
		while (curr_a)
		{
			if (curr_a->nbr > b->nbr && curr_a->nbr < best_mach)
			{
				best_mach = curr_a->nbr;
				target = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (best_mach == LONG_MAX)
			b->node = smallest_stack(a);
		else
			b->node = target;
		b = b->next;
	}
}

void	define_cheap(t_stack *b)
{
	long	best_mach;
	t_stack	*best_mach_plate;

	if (b == NULL)
		return ;
	best_mach = LONG_MAX;
	while (b)
	{
		if (b->moves < best_mach)
		{
			best_mach = b->moves;
			best_mach_plate = b;
		}
		b = b->next;
	}
	best_mach_plate->cheap = true;
}

void	set_moves(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = stack_size(a);
	size_b = stack_size(b);
	while (b)
	{
		b->moves = b->index;
		if (!(b->abv_med))
			b->moves = size_b - (b->index);
		if (b->node->abv_med)
			b->moves += b->node->index;
		else
			b->moves += size_a - (b->node->index);
		b = b->next;
	}
}

void	start_tables(t_stack *a, t_stack *b)
{
	start_position(a);
	start_position(b);
	find_target(a, b);
	set_moves(a, b);
	define_cheap(b);
}
