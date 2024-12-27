/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:38:40 by afilipe-          #+#    #+#             */
/*   Updated: 2024/12/09 15:47:45 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(int argc, char **imput_list)
{
	if (argc == 1)
		return (0);
	if (arg_non_nbr(argc, imput_list) == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	if (is_dupl(argc, imput_list) == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	return (1);
}

static int	arg_non_nbr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < (argc - 1))
	{
		j =0 ;
		while (argv[i][j] !='\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
				if (!((j == 0) && (argv[i][j] == '-')))
					return (-1);
				j++;
		}
		i++;
	}
	return (1);
}

static int	is_dupl(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		if (ft_atol(argv[0]) > INT_MAX)
			return (-1);
	}
	i = 0;
	while (i < argc)
	{
			j = (i + 1);
			while (j < (argc - 1))
			{
				if ((ft_atol(argv[i]) > INT_MAX) || (ft_atol(argv[j]) > INT_MAX))
					return (-1);
				if (ft_atol(argv[i]) == ft_atol(argv[j]))
					return (-1);
				j++;
			}
			i++;
	}
	return (0);
}