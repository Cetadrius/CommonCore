/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:38:10 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 14:00:37 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap_stack)
{
	while (*a != cheap_stack->node && *b != cheap_stack)
	{
		rr(a, b, false);
	}
	start_position(*a);
	start_position(*b);
}

static void	reverse_rotate_both(t_stack **a, t_stack **b, t_stack *cheap_stack)
{
	while (*a != cheap_stack->node && *b != cheap_stack)
	{
		rrr(a, b, false);
	}
	start_position(*a);
	start_position(*b);
}

void	finish_rotation(t_stack **stack, t_stack *top_stack, char name)
{
	while (*stack != top_stack)
	{
		if (name == 'a')
		{
			if (top_stack->abv_med)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (name == 'b')
		{
			if (top_stack->abv_med)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

static void	move_plates(t_stack **a, t_stack **b)
{
	t_stack	*cheap_plate;

	cheap_plate = cheap(*b);
	if (cheap_plate->abv_med && cheap_plate->node->abv_med)
	{
		rotate_both(a, b, cheap_plate);
	}
	else if (!(cheap_plate->abv_med) && !(cheap_plate->node->abv_med))
		reverse_rotate_both(a, b, cheap_plate);
	finish_rotation(b, cheap_plate, 'b');
	finish_rotation(b, cheap_plate->node, 'a');
	pa(a, b, false);
}

void	push_swap(t_stack **a, t_stack **b)
{
	t_stack		*smallest;
	int			len_a;

	len_a = stack_size(*a);
	if (len_a == 5)
		five_sort(a, b);
	else
	{
		while (len_a-- > 3)
			pb(b, a, false);
	}
	three_sort(a);
	while (*b)
	{
		start_tables(*a, *b);
		move_plates(a, b);
	}
	start_position(*a);
	smallest = smallest_stack(*a);
	if (smallest->abv_med)
		while (*a != smallest)
			ra(a, false);
	else
		while (*a != smallest)
			rra(a, false);
}
