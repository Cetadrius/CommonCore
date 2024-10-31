/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:25:10 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 08:25:13 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *big1 = "The seamstress guild";
	const char *little1 = "The";
	const char *little2 = "guild";
	const char *little3 = "Nobby";
	size_t n = 20;
	
	char *result1 = ft_strnstr(big1, little1, n);
	char *result2 = ft_strnstr(big1, little2, n);
	char *result3 = ft_strnstr(big1, little3, n);
	printf("result1 %s\n", result1);
	printf("result2 %s\n", result2);
	printf("result3 %s\n", result3);
	
	return (0);
}*/
