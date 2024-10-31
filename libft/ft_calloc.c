/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:52:11 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/18 13:52:12 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*st;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	st = malloc(total_size);
	if (st == NULL)
	{
		return (NULL);
	}
	ft_memset(st, 0, total_size);
	return (st);
}
/*
int	main(void)
{
	int	i;
	
	i = 0;
	int *all = (int *)ft_calloc(5, sizeof(int));
	if (!all)
	{
		printf("Failled\n");
		return (1);
	}
	while (i++ < 5)
	{
	printf("all[%d] = %d\n", i, all[i]);
	}
	free(all);
	
}*/
