/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:54:12 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/31 13:54:14 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;
	
}

int	ft_print_specif(const char form, va_list args)
{
	int	f;
	
	i = 0;
	if (format == 'c')
		f += ft_printc(va_arg(args, int));
	else if (format == 's')
		f += ft_printstr(va_arg(args, char *s));
	else if (format == 'p')
		f += ft_printpoint(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		f += ft_printnbr(va_arg(agrs, int));
	else if (format == 'u')
		f += ft_printunsig(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		f += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		f += ft_printc('%');
	return (f);
}
