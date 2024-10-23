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
	unsigned char		*s;
	const unsigned char	*t;
	size_t				i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	i = 0;
	s = (unsigned char *)dest;
	t = (const unsigned char *)src;
	while (i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (dest);
}
