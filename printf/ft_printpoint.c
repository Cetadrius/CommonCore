/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:55:23 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/07 11:43:58 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(unsigned long p)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (p >= 16)
	{
		count += ft_putpoint(p / 16);
	}
	count += ft_printc(base[p % 16]);
	return (count);
}

int	ft_printptr(unsigned long pointer)
{
	int	l;

	l = 0;
	if (pointer == 0)
	{
		ft_printstr("(nil)");
		return (5);
	}
	else
	{
		l += ft_printstr("0x");
		l += ft_putpoint(pointer);
	}
	return (l);
}
