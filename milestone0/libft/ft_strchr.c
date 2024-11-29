/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:07:43 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/17 15:07:44 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	if (s[i] == (char)c || !c)
	{
		return ((char *) s + i);
	}
	return (NULL);
}
/*
#include <string.h>
int	main(void)
{
	printf("%s %s\n", ft_strchr("Olive", 'A'), "-> ft_strchr");
	printf("%s %s\n", strchr("Olive", 'A'), "-> strchr");
	printf("%s %s\n", ft_strchr("Olive", 'l'), "-> ft_strchr");
	printf("%s %s\n", strchr("Olive", 'l'), "-> strchr");
	printf("%s %s\n", ft_strchr("Olive", 'e'), "-> ft_strchr");
	printf("%s %s\n", strchr("Olive", 'e'), "-> strchr");
	printf("%s %s\n", ft_strchr("Olive", 'v'), "-> ft_strchr");
	printf("%s %s\n", strchr("Olive", 'v'), "-> strchr");
	return (0);
}*/
