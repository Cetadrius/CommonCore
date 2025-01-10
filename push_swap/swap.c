/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:21:16 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 12:58:29 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int n)
{
	int	i;
	int	h;

	i = (*a)->data;
	h = (*a)->index;
	(*a)->data = (*a)->next->data;
	(*a)->index = (*a)->next->index;
	(*a)->next->index = h;
	(*a)->next->data = i;
	if (n == 0)
	{
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **b, int n)
{
	int	i;
	int	h;

	i = (*b)->data;
	h = (*b)->index;
	(*b)->data = (*b)->next->data;
	(*b)->index = (*b)->next->index;
	(*b)->next->index = h;
	(*b)->next->data = i;
	if (n == 0)
	{
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa (a, 1);
	sb (b, 1);
	write(1, "ss\n", 3);
}
