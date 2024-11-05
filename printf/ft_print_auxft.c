/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_auxft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:01:05 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/05 09:01:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_numsize(unsigned int n)
{
	unsigned int	l;

	l = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	l;
	char			*str;

	l = ft_numsize(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[l] = '\0';
	while (n != 0)
	{
		str[l - 1] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (str);
}
