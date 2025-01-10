/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_mag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:00:27 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 14:06:03 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_stack(t_stack **a, int n)
{
	t_stack	*temp1;
	t_stack	*temp2;
	long	i;

	temp1 = *a;
	while (temp1)
	{
		i = INT_MAX;
		temp2 = *a;
		while (temp2)
		{
			if (temp2->data < i && temp2->index == -1)
				i = temp2->data;
			temp2 = temp2->next;
		}
		temp2 = *a;
		while (temp2)
		{
			if (temp2->data == i)
				temp2->index = n++;
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}
