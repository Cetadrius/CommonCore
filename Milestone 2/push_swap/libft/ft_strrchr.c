/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:39:40 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/17 15:39:42 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	printf("%s %s\n", ft_strrchr("Weatherwax", 'w'), "-> ft_strrchr");
	printf("%s %s\n", strrchr("Weatherwax", 'w'), "-> strrchr");
	printf("%s %s\n", ft_strrchr("Weatherwax", 'e'), "-> ft_strrchr");
	printf("%s %s\n", strrchr("Weatherwax", 'e'), "-> strrchr");
	printf("%s %s\n", ft_strrchr("Weatherwax", 'W'), "-> ft_strrchr");
	printf("%s %s\n", strrchr("Weatherwax", 'W'), "-> strrchr");
	printf("%s %s\n", ft_strrchr("Weatherwax", 'v'), "-> ft_strrchr");
	printf("%s %s\n", strrchr("Weatherwax", 'v'), "-> strrchr");
	return (0);
}*/
