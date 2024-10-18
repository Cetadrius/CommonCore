/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:05:44 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 13:05:45 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfb.a"
#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char *t1 = (const unsigned char *)s1;
	const unsigned char *t2 = (const unsigned char *)s2;
	
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
		{
			return (t1[i] - t2[i]);
		}
		i++;
	}
	return (0);
}
