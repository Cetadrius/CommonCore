/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:48:41 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/10 14:19:32 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	long			data;
	int				index;
	struct s_stack	*next;
}	t_stack;

// utility functions

int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
int		stack_size(t_stack **a);
int		is_sorted(t_stack **a);
char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

// movement functions

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, int n);
void	rb(t_stack **b, int n);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int n);
void	rrb(t_stack **b, int n);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a, int n);
void	sb(t_stack **b, int n);
void	ss(t_stack **a, t_stack **b);

// free functions

void	free_stacks(t_stack **a, t_stack **b);
void	free_input(char **str);
void	complete_free(char **str, t_stack **a, t_stack **b, int argc);

//errors management

void	imput_error(char **imput, int ac, t_stack **a, t_stack **b);
void	min_max_error(char **imput, int ac, t_stack **a, t_stack **b);
void	duplicates_error(char **imput, int ac, t_stack **a, t_stack **b);
void	list_error(char **imput, int ac, t_stack **a, t_stack **b);
void	error_manag(char **imput, t_stack **a, t_stack **b, int ac);

//main
int		main(int ac, char **av);

// parce and stacks

char	**imput_args(int ac, char **av, t_stack **a, t_stack **b);
void	fill_stack(char **imput, t_stack **a, t_stack **b);
void	insert_stack(t_stack **a, int n);

// sorting

void	choose_sort(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b, int n);
void	sort_four(t_stack **a, t_stack **b, int n);
void	sort_three(t_stack **a);
void	radix_sort(t_stack **a, t_stack **b);

#endif