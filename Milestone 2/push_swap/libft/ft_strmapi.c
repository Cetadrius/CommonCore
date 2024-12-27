/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:59:31 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/22 13:59:34 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	c = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
char to_upper(unsigned int index, char c)
{
    (void)index;
    return (c >= 'a' && c <= 'z') ? c - 32 : c;
}

int	main(void)
{
	char *str = "Millenium hand and srimp!";
	char *result;
	
	result = ft_strmapi(str, to_upper);
	
	if (result != NULL)
	{
		printf("original %s\n", str);
		printf("transfor %s\n", result);
		free(result);
	}
	else
	{
		printf("Allocation failed. \n");
	}
	return (0);
}*/
