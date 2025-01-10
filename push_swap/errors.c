/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:23:04 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/10 15:00:21 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_manag(char **imput, t_stack **a, t_stack **b, int ac)
{
	complete_free(imput, a, b, ac);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

// Check for imput errors;
// iterates each imput str and each char in said str;
// check for signals and only allows 1 signal in fron of a number;
// check for non numeric chars;
// frees memory and prints error message in the file descriptor;
void	imput_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	int	i;
	int	j;

	i = 0;
	if (imput[i] == 0)
	{
		error_manag(imput, a, b, ac);
	}
	while (imput[i])
	{
		j = 0;
		while (imput[i][j])
		{
			if ((imput[i][0] == '-' || imput[i][0] == '+') && j == 0)
				j++;
			if (imput[i][j] == 0 || !ft_isdigit(imput[i][j]) || j > 11)
			{
				error_manag(imput, a, b, ac);
			}
			j++;
		}
		i++;
	}
}

// Checks for numbers outside the INT_MAX and INT_MIN limits;
// frees memory and prints error message in the file descriptor;
void	min_max_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		if (temp->data > INT_MAX || temp->data < INT_MIN)
		{
			error_manag(imput, a, b, ac);
		}
		temp = temp->next;
	}
}

// Checks for duplication errors;
// Iterates through every value in str
// frees memory and prints error message in the file descriptor;
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
				error_manag(imput, a, b, ac);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}

//runs both error checks that can be present on the lists;
void	list_error(char **imput, int ac, t_stack **a, t_stack **b)
{
	min_max_error(imput, ac, a, b);
	duplicates_error(imput, ac, a, b);
}
