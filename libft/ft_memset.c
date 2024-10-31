/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:02:47 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/17 10:02:49 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;
	unsigned char	*end;

	i = (unsigned char *)s;
	end = i + n;
	while (i < end)
	{
		*i = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "NobbyNobbs";
	int	x = 'N';
	int	i;
	char thewatch[sizeof(str1)];

	i = 0;
	strcpy(thewatch, str1);
	ft_memset(thewatch, x, ft_strlen(str1));
	memset(thewatch, x, ft_strlen(str1));
	if (i < ft_strlen(str1))
	{
		printf("Personal (ft_memset): %s\n\n", thewatch);
		printf("parcial copy;\n");
		printf("Original (memset): %s\n\n", thewatch);
	}
	
	return (0);
}*/
