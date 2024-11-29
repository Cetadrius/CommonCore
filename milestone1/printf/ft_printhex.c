/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:56:02 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/04 09:56:03 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, const char c)
{
	if (n == 0)
	{
		return (ft_printc('0'));
	}
	else
	{
		return (ft_phex(n, c));
	}
	return (0);
}

int	ft_phex(unsigned int n, const char c)
{
	char	*hx;
	int		res;

	res = 0;
	if (c == 'x')
	{
		hx = "0123456789abcdef";
	}
	else
	{
		hx = "0123456789ABCDEF";
	}
	if (n >= 16)
	{
		res += ft_phex(n / 16, c);
	}
	write(1, &hx[n % 16], 1);
	res++;
	return (res);
}
