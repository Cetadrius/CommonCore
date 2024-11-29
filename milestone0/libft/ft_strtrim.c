/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:16:12 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/21 16:16:13 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;
	char			*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strrchr(set, s1[i]))
	{
		i++;
	}
	while (j > i && ft_strrchr(set, s1[j - 1]))
	{
		j--;
	}
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char const *str1 = "Bahh Humbug Bahh";
	char const *str2 = "Bahh";
	
	printf("Scrooge mosts famous line is, %s\n", ft_strtrim(str1, str2));
}*/
