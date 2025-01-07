/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:48:10 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 11:34:26 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack		*last;
	int			len;

	len = stack_size(*stack);
	if (*stack == NULL || stack == NULL || len == 1)
	{
		return ;
	}
	last = last_node(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack **a, bool check)
{
	reverse_rotate(a);
	if (!check)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, bool check)
{
	reverse_rotate(b);
	if (!check)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, bool check)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!check)
		write(1, "rrr\n", 4);
}
