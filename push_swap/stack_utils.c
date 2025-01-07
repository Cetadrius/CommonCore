/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:08:52 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 11:37:31 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	join_stack(t_stack **st, int nbr)
{
	t_stack	*stack_a;
	t_stack	*last_stack;

	if (st == NULL)
		return ;
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return ;
	stack_a->next = NULL;
	stack_a->nbr = nbr;
	if (!*st)
	{
		*st = stack_a;
		stack_a->prev = NULL;
	}
	else
	{
		last_stack = last_node(*st);
		last_stack->next = stack_a;
		stack_a->prev = last_stack;
	}
}

t_stack	*last_node(t_stack *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
	{
		list = list->next;
	}
	return (list);
}

int	stack_size(t_stack *stack)
{
	int	count;

	if (stack == NULL)
		return (0);
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}

t_stack	*smallest_stack(t_stack *stack)
{
	long		smallest;
	t_stack		*small_stack;

	if (stack == NULL)
		return (NULL);
	smallest = LONG_MAX;
	while (stack)
	{
		if (stack->nbr < smallest)
		{
			smallest = stack->nbr;
			small_stack = stack;
		}
		stack = stack->next;
	}
	return (small_stack);
}

t_stack	*cheap(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheap)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
