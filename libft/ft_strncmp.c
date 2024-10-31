/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:43:33 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/17 15:43:35 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str1 = "The city Watch";
	char *str2 = "The Assassins guild";
	size_t n;
	
	n = 3;
	printf("Comparing the first %zu chars;\n", n);
	printf("ft function, %d\n", ft_strncmp(str1, str2, n));
	printf("man function, %d\n", strncmp(str1, str2, n));
	
	n = 5;
	printf("Comparing the first %zu chars;\n", n);
	printf("ft function, %d\n", ft_strncmp(str1, str2, n));
	printf("man function, %d\n", strncmp(str1, str2, n));
	
	n = 0;
	printf("Comparing the first %zu chars;\n", n);
	printf("ft function, %d\n", ft_strncmp(str1, str2, n));
	printf("man function, %d\n", strncmp(str1, str2, n));
	
	const char *a = "test\200";
	char *b = "test\0";
	
	n = 6;
	printf("Comparing the first %zu chars;\n", n);
	printf("ft function, %d\n", ft_strncmp(a, b, n));
	printf("man function, %d\n", strncmp(a, b, n));
}*/
