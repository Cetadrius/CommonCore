/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:14:07 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 12:57:25 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int n)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *a;
	temp2 = (*a)->next;
	while (temp1->next)
	{
		temp1 = temp1->next;
	}
	temp1->next = *a;
	(*a)->next = NULL;
	*a = temp2;
	if (n == 0)
	{
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b, int n)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *b;
	temp2 = (*b)->next;
	while (temp1->next)
	{
		temp1 = temp1->next;
	}
	temp1->next = *b;
	(*b)->next = NULL;
	*b = temp2;
	if (n == 0)
	{
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	ra (a, 1);
	rb (b, 1);
	write(1, "rr\n", 3);
}
