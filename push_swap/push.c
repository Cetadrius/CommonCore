/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:07:25 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 07:13:57 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	if (!(*b))
		return ;
	temp1 = *b;
	temp2 = (*b)->next;
	temp1->next = *a;
	*b = temp2;
	*a = temp1;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	if (!(*a))
		return ;
	temp1 = *a;
	temp2 = (*a)->next;
	temp1->next = *b;
	*a = temp2;
	*b = temp1;
	write(1, "pb\n", 3);
}
