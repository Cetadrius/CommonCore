/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:32:26 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/10 11:43:23 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift down all elements of stack a by 1.
//The last element becomes the first one
void	rra(t_stack **a, int n)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *a;
	temp2 = *a;
	while (temp2->next->next)
	{
		temp2 = temp2->next;
	}
	while (temp1->next)
	{
		temp1 = temp1->next;
	}
	temp1->next = *a;
	temp2->next = NULL;
	*a = temp1;
	if (n == 0)
		write(1, "rra\n", 4);
}

//Shift down all elements of stack b by 1.
//The last element becomes the first one
void	rrb(t_stack **b, int n)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *b;
	temp2 = *b;
	while (temp2->next->next)
	{
		temp2 = temp2->next;
	}
	while (temp1->next)
	{
		temp1 = temp1->next;
	}
	temp1->next = *b;
	temp2->next = NULL;
	*b = temp1;
	if (n == 0)
		write(1, "rrb\n", 4);
}

// rra and rrb at the same time;
void	rrr(t_stack **a, t_stack **b)
{
	rra (a, 1);
	rrb (b, 1);
	write (1, "rrr\n", 4);
}
