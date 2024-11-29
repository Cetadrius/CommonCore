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

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	rslt;
	int	i;

	sign = 1;
	rslt = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign *= -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= 48 && nptr[i] <= 57)
	{
		rslt *= 10;
		rslt += nptr[i] - 48;
		i++;
	}
	rslt *= sign;
	return (rslt);
}
/*
int main(void)
{
	printf("%d\n%d\n", ft_atoi(" 	-1234!5+TRAA"), atoi(" 	-1234!5+TRAA"));
}

void	main(int argc, char *argv)
{
	if (argc == 2)
	{
		printf("%d\n%d\n", ft_atoi(argv[1]), atoi(argv[1]));
	}
}
*/
