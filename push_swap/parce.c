/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parce.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:17:57 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/10 11:23:03 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Process command line and prepare the imput;
// Exits if no arguments are provided;
// if only one arg is provided use split to create array;
char	**imput_args(int ac, char **av, t_stack **a, t_stack **b)
{
	char	**imput;

	if (ac < 2)
	{
		free(a);
		free(b);
		exit(1);
	}
	if (ac == 2 && av[1])
	{
		imput = ft_split(av[1], ' ');
		if (!imput)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
	}
	if (ac > 2)
		imput = ++av;
	return (imput);
}

//Fills stack a with the imput values;
//exits and frees if imput is empty;
// fills the first node;
// fils the subsequent nodes;
void	fill_stack(char **imput, t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	i = 0;
	if (!imput[0])
	{
		free(a);
		free(b);
		free_input(imput);
		exit(1);
	}
	*a = (t_stack *)malloc(sizeof(t_stack));
	(*a)->data = ft_atol(imput[i]);
	(*a)->index = -1;
	temp = *a;
	while (imput[++i])
	{
		temp->next = (t_stack *)malloc(sizeof(t_stack));
		temp = temp->next;
		temp->data = ft_atol(imput[i]);
		temp->index = -1;
		temp->next = NULL;
	}
}
