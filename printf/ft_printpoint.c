/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:55:23 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/05 13:35:07 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long pointer)
{
	int	l;

	l = 0;
	if (!pointer)
	{
		ft_printstr("(nill)");
		return (5);
	}
	else
	{
		l += ft_printstr("0x");
		l += ft_phex(pointer, 'x');
	}
	return (l);
}
