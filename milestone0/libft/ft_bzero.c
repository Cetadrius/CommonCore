/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:28:01 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 10:28:03 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = '\0';
		ptr++;
	}
}
/*#include <strings.h>

int main(void)
{
	char str1[] = "NobbyNobbs";
	char str2[] = "NobbyNobbs";
	
	ft_bzero(str1, 5);
	bzero(str2, 5);
	
	printf("ft_bzero result: %s\n", str1);
	printf("bzero result: %s\n", str2);
	
	return (0);
}*/
