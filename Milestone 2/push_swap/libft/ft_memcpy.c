/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:00:27 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 11:00:29 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s;
	char		*t;
	size_t		i;

	i = 0;
	s = (char *)dest;
	t = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		s[i] = t[i];
		i++;
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
	char dest2[20] = "ArrestTheAssassin";
	
	ft_memcpy(dest1, str1, ft_strlen(str1) + 1);
	ft_memcpy(dest2, str1, 10);
	printf("Dest1 (ft_memcpy): %s\n\n", dest1);
	printf("parcial copy;\n");
	printf("Dest2 (ft_memcpy): %s\n\n", dest2);
	
	return (0);
}*/
