/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:25:17 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 14:58:40 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	len;
	int	i;

	i = 0;
	while (!is_sorted(a))
	{
		len = stack_size(a);
		while (len--)
		{
			if ((*a)->index & 1 << i)
				ra(a, 0);
			else
				pb(a, b);
		}
		while (*b)
		{
			pa(a, b);
		}
		i++;
	}
}

void	sort_three(t_stack **a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->data;
	mid = (*a)->next->data;
	bot = (*a)->next->next->data;
	if (top > mid && mid > bot)
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if (mid > bot && bot > top)
	{
		sa(a, 0);
		ra(a, 0);
	}
	else if (top > bot && bot > mid)
		ra(a, 0);
	else if (mid > top && top > bot)
		rra(a, 0);
	else if (bot > top && top > mid)
		sa(a, 0);
}

void	sort_four(t_stack **a, t_stack **b, int n)
{
	if ((*a)->next->next->next->index == n)
	{
		while ((*a)->index != n)
			rra(a, 0);
	}
	else
		while ((*a)->index != n)
			ra(a, 0);
	if (!is_sorted(a))
	{
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}
}

void	sort_five(t_stack **a, t_stack **b, int n)
{
	if ((*a)->next->next->next->next->index == n
		|| (*a)->next->next->next->index == n)
	{
		while ((*a)->index != n)
			rra(a, 0);
	}
	else
		while ((*a)->index != n)
			ra(a, 0);
	if (!is_sorted(a))
	{
		pb(a, b);
		sort_four(a, b, 1);
		pa(a, b);
	}
}

void	choose_sort(t_stack **a, t_stack **b)
{
	if (stack_size(a) == 2 && !is_sorted(a))
		sa(a, 0);
	if (stack_size(a) == 3 && !is_sorted(a))
		sort_three(a);
	if (stack_size(a) == 4 && !is_sorted(a))
		sort_four(a, b, 0);
	if (stack_size(a) == 5 && !is_sorted(a))
		sort_five(a, b, 0);
	if (stack_size(a) > 5 && !is_sorted(a))
		radix_sort(a, b);
}
