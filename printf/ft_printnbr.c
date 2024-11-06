/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:33:25 by afilipe-          #+#    #+#             */
/*   Updated: 2024/11/05 13:34:13 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		l;
	char	*number;

	l = 0;
	number = ft_itoa(n);
	l = ft_printstr(number);
	free(number);
	return (l);
}
