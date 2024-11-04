/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:55:23 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/04 09:55:25 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	t_printptr(unsigned long pointer)
{
	int	l;
	
	l = 0;
	if (!pointer)
	{
		ft_printc("(nill)");
		return (5);
	}
	else
	{
		l += ft_printstr("0x");
		l += ft_phex(pointer, 'x');
	}
	return (l);
}
