/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:33:35 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 15:09:54 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size != '\0')
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
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
