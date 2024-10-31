/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:06:50 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 12:06:53 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
		{
			return ((void *)src + i);
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char *str = "SrgCollon";;
	char c;
	int	i;
	
	c = 'g';
	i = strlen(str);
	printf("ft_memchr result: %p\n", ft_memchr(str, c, i));
	printf("memchr result: %p\n", memchr(str, c, i));
	
	return (0);
}*/
