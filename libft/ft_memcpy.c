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

#include "libft.a"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*s = (unsigned char *)dest;
	const unsigned char *t = (const unsigned char *)src;
	
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	while (i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (dest);
}
