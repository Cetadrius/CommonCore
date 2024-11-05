/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:55:49 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/04 09:55:50 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsig(unsigned int n)
{
	char	*str;
	int		l;

	l = 0;
	if (n == 0)
	{
		l += write(1, "0", 1);
	}
	else
	{
		str = ft_uitoa((unsigned int)n);
		l = ft_printstr(str);
		free(str);
	}
	return (l);
}
