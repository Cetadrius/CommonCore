/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:14:24 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 11:22:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **destination, t_stack **source)
{
	t_stack	*stack_to_push;

	if (*source == NULL)
		return ;
	stack_to_push = *source;
	*source = (*source)->next;
	if (*source)
	{
		(*source)->prev = NULL;
	}
	stack_to_push->prev = NULL;
	if (*destination == NULL)
	{
		*destination = stack_to_push;
		stack_to_push->next = NULL;
	}
	else
	{
		stack_to_push->next = *destination;
		stack_to_push->next->prev = stack_to_push;
		*destination = stack_to_push;
	}
}

void	pa(t_stack **a, t_stack **b, bool check)
{
	push(a, b);
	if (!check)
	{
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **b, t_stack **a, bool check)
{
	push(b, a);
	if (!check)
	{
		write(1, "pb\n", 3);
	}
}
