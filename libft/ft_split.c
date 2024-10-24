/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:09:10 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/22 10:09:11 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(char *str, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
		{
			i++;
		}
		if (str[i] && str[i] != c)
		{
			i++;
			counter++;
		}
		while (str[i] && str[i] != c)
		{
			i++;
		}
	}
	return (counter);
}

static void	*ft_free(char **strs, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	caract(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*allocate(char **table, char *src, char c)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (src[k] == c)
		k++;
	while (j < wordcounter(src, c))
	{
		i = 0;
		table[j] = malloc(sizeof(char) * (caract(&src[k], c) + 1));
		if (!table[j])
			return (ft_free(table, j));
		while (src[k] != c && src[k])
			table[j][i++] = src[k++];
		table[j][i] = '\0';
		while (src[k] == c && src[k])
			k++;
		j++;
	}
	table[j] = NULL;
	return (*table);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**table;
	char	*str;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	str = (char *)s;
	table = malloc(sizeof(char *) * (wordcounter(str, c) + 1));
	if (!table)
	{
		return (NULL);
	}
	table[i] = allocate(table, str, c);
	return (table);
}
