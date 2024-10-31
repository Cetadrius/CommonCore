/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:35:08 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 11:35:10 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "CptCarrotIronfussen";
	char dest1[20];
	char dest2[] = "Overlapping areas test";
	
	ft_memmove(dest1, str1, ft_strlen(str1) + 1);
	ft_memmove(dest2 + 5, str1, 12);
	printf("Dest1 (ft_memcpy): %s\n\n", dest1);
	printf("parcial copy;\n");
	printf("Dest2 (ft_memcpy): %s\n\n", dest2);
	
	return (0);
}*/
