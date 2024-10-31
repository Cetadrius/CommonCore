/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:05:44 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 13:05:45 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*t1;
	const unsigned char	*t2;

	i = 0;
	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (t1[i] != t2[i])
		{
			return (t1[i] - t2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str1 = "SrgFredCollon";
	char *str2 = "SrgFredCollon";
	char *str3 = "SrgfredCollon";
	size_t n = ft_strlen(str1);
	int result1 = ft_memcmp(str1, str2, n);
	int result2 = ft_memcmp(str1, str3, n);
	
	printf("ft_memcmp result: %d\n", result1);
	printf("ft_memcmp result: %d\n", memcmp(str1, str2, n));
	printf("ft_memcmp result: %d\n", result2);
	printf("ft_memcmp result: %d\n", memcmp(str1, str3, n));
	
	return (0);
}*/
