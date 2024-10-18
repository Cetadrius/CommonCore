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

#include "libft.a"
#include <string.h>

void	*ft_memset(void *s, int c, unsigned int n)
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
