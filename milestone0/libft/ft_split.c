/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:42:44 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/25 12:42:46 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcounter(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep && *s)
			s++;
		if (*s)
			count++;
		while (*s != sep && *s)
			s++;
	}
	return (count);
}

static int	ft_memory_control(char **str, int pos, size_t m)
{
	int	i;

	i = 0;
	str[pos] = malloc(m);
	if (str[pos] == NULL)
	{
		while (i < pos)
		{
			free(str[i++]);
		}
		free (str);
		return (1);
	}
	return (0);
}

static int	ft_allocate(char **str, char const *s, char sep)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (*s)
	{
		while (*s == sep && *s)
			++s;
		while (*s != sep && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_memory_control(str, i, len +1))
				return (1);
			ft_strlcpy(str[i], s - len, len +1);
			i++;
			len = 0;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**strs;

	if (!s)
		return (NULL);
	len = wordcounter(s, c);
	strs = malloc((len + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_allocate(strs, s, c))
	{
		return (NULL);
	}
	strs[len] = NULL;
	return (strs);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char const *str1 = "Coal, spikes, chains, axes, maces";
	char sep = ' ';
	char **result = ft_split(str1, sep);
	int i = 0;
	
	while (result[i])
	{
		printf("things found in a medival fair %s\n", result[i]);
		i++;
	}
}*/
