/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:41:30 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/17 13:41:32 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	dst_len = 0;
	unsigned int	src_len = 0;
	unsigned int	i = 0;
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	i = dst_len;
	while (*src && (i + 1 < size))
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
