/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:23:04 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 13:11:56 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	imput_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	int	i;
	int	j;

	i = 0;
	while (imput[i])
	{
		j = 0;
		while (imput[i][j])
		{
			if ((imput[i][0] == '-' || imput[i][0] == '+') && j == 0)
				j++;
			if (imput[i][j] == 0 || !ft_isdigit(imput[i][j]) || j > 11)
			{
				complete_free(imput, a, b, ac);
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	min_max_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		if (temp->data > INT_MAX || temp->data < INT_MIN)
		{
			complete_free(imput, a, b, ac);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		temp = temp->next;
	}
}

void	duplicates_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *a;
	while (temp1->next)
	{
		temp2 = temp1->next;
		while (temp2)
		{
			if (temp1->data == temp2->data)
			{
				complete_free(imput, a, b, ac);
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}

void	list_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	min_max_error(imput, ac, a, b);
	duplicates_error(imput, ac, a, b);
}
