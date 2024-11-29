/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:54:12 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/05 15:27:07 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_specif(va_list args, const char form)
{
	int	l;

	l = 0;
	if (form == 'c')
		l += ft_printc(va_arg(args, int));
	else if (form == 's')
		l += ft_printstr(va_arg(args, char *));
	else if (form == 'p')
		l += ft_printptr(va_arg(args, unsigned long));
	else if (form == 'd' || form == 'i')
		l += ft_printnbr(va_arg(args, int));
	else if (form == 'u')
		l += ft_printunsig(va_arg(args, unsigned int));
	else if (form == 'x' || form == 'X')
		l += ft_printhex(va_arg(args, unsigned int), form);
	else if (form == '%')
		l += ft_printc('%');
	return (l);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		l;
	va_list	arg;

	i = 0;
	l = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			l += ft_print_specif(arg, format[i + 1]);
			i++;
		}
		else
		{
			l += ft_printc(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (l);
}
