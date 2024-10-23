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

// number of words
static int	word(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i])
		{
			i++;
		}
		if (str[i] && str[i] != c)
		{
			i++;
			j++;
		}
		while (str[i] && str[i] != c)
		{
			i++;
		}
	}
	return (j);
}

static void	*cleanmem(char **mat)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

static int	caracters(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	allocandfill(char **grd, char *src, char c)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (str[k] == c)
		k++;
	while (j < word(src, c))
	{
		i = 0;
		grd[j] = malloc(sizeof(char) * (caracters(&src[k], c) + 1));
		if (grd[j] == NULL)
			return (cleanmem(grid, j));
		while (src[k != c && src[k]])
		{
			grd[j][i++] = src[k++];
		}
		grd[j][i] = '\0';
		while (src[k] == c && src[k])
			k++;
		j++;
	}
	grd[j] = Null;
	return (*grd);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**grd;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	grd = ((char *)malloc (sizeof(char) * (word(str + c) + 1)));
	if (!grd)
		return (NULL);
	grd[j] = allocandfill(grd, str, c);
	return (grd);
}
