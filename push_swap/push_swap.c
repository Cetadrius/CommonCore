/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:48:23 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/09 13:15:57 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;
	char	**imput;

	a = (t_stack **)malloc(sizeof(t_stack));
	b = (t_stack **)malloc(sizeof(t_stack));
	*b = NULL;
	imput = imput_args(ac, av, a, b);
	imput_error(imput, ac, a, b);
	fill_stack(imput, a, b);
	list_error(imput, ac, a, b);
	insert_stack(a, 0);
	choose_sort(a, b);
	complete_free(imput, a, b, ac);
	return (0);
}
