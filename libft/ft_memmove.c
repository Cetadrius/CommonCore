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
	unsigned char		*s;
	const unsigned char	*t;
	size_t				i;

	s = (unsigned char *)dest;
	t = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	i = n;
	while (i > 0)
	{
		s[i] = t[i];
		i--;
	}
	return (dest);
}
