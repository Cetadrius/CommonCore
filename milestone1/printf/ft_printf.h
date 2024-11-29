/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:22:27 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/05 09:22:28 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *format, ...);
int			ft_printhex(unsigned int n, const char c);
int			ft_printnbr(int n);
int			ft_printptr(unsigned long pointer);
int			ft_printstr(char *s);
int			ft_printunsig(unsigned int n);
int			ft_printc(char c);
int			ft_print_specif(va_list args, const char form);
char		*ft_uitoa(unsigned int n);
int			ft_phex(unsigned int n, const char c);
char		*ft_itoa(int n);
char		*ft_strdup(const char *s);
int			ft_strlen(const char *s);

#endif
