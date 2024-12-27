/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:36:00 by afilipe-          #+#    #+#             */
/*   Updated: 2024/12/19 13:43:16 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	int				sign;
	long int		nbr;
	

	sign = 1;
	nbr = 0;
	if(!nptr)
		return (0);
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		if (*(nptr + 1) == '-' || *(nptr + 1) == '+')
			return (0);
		nptr++;
	}
	nbr = 0;
	while (ft_isdigit(*nptr))
		nbr = nbr * 10 + (*nptr++ - '0');
	return (nbr * sign);
}
int	stack_len(t_stack *stack)
{
	int	count;

	if (stack == NULL)
	{
		return (0);
	}
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);	
}