/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:38:30 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 09:38:32 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	rslt;
	int	i;
	
	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
