/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:01:27 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 13:37:23 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, bool check)
{
	swap(a);
	if (!check)
		write(1, "sa\n", 3);
}

void	sb(t_stack **b, bool check)
{
	swap(b);
	if (!check)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, bool check)
{
	swap(a);
	swap(b);
	if (!check)
		write(1, "ss\n", 3);
}

static void	swap(t_stack **header)
{
	int	len;

	len = stack_size(*header);
	if (*header == NULL || header == NULL || len == 1)
		return ;
	*header = (*header)->next;
	(*header)->prev->prev = *header;
	(*header)->prev->next = (*header)->next;
	if ((*header)->next)
	{
		(*header)->next->prev = (*header)->prev;
	}
	(*header)->next = (*header)->prev;
	(*header)->prev = NULL;
}
