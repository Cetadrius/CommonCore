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

#include "libft.a"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *src = (const unsigned char *)s;
	unsigned char t = (unsigned char)c;
	
	i = 0;
	while (i < n)
	{
		if (src[i] == t)
		{
			return ((void *)&src[i]);
		}
		i++;
	}
	return (NULL);
}
