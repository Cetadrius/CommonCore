/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:09:42 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 15:09:44 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"
#include <string.h>

char	*ft_strdup(const char *s)
{
	int	i = ft_strlen(s) +1;
	char	*mal;
	
	if (i = 0)
	{
		return (NULL)
	}
	mal = malloc(i * sizeof(char);
	ft_memcpy(mal, s, i);
	return (mal);
}
