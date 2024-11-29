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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
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
/*
#include <string.h>

int	main(void)
{
	size_t i = 8;
	char dest1[] = "Ahnk";
	char src1[] = " Mopork";
	
	size_t result1_ft = ft_strlcat(dest1, src1, i);
	printf("%zu\n", result1_ft);
	return (0);
}*/
