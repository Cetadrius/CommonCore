/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:11:06 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 11:34:55 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack		*last_plate;
	int			len;

	len = stack_size(*stack);
	if (stack == NULL || *stack == NULL || len == 1)
	{
		return ;
	}
	last_plate = last_node(*stack);
	last_plate->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_plate->next->prev = last_plate;
	last_plate->next->next = NULL;
}

void	ra(t_stack **a, bool check)
{
	rotate(a);
	if (!check)
		write (1, "ra\n", 3);
}

void	rb(t_stack **b, bool check)
{
	rotate(b);
	if (!check)
		write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, bool check)
{
	rotate(a);
	rotate(b);
	if (!check)
		write (1, "rr\n", 3);
}
