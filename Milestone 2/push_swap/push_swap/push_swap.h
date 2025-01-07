/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <afilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:37:48 by afilipe-          #+#    #+#             */
/*   Updated: 2025/01/07 13:35:56 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				moves;
	int				push_total;
	bool			abv_med;
	bool			cheap;
	struct s_stack	*node;
	struct s_stack	*next;
	struct s_stack	*prev;	
}					t_stack;

//utillity fuctions

void			ft_putstr_fd(char *s, int fd);
long			ft_atol(const char *str);
char			**ft_split(char *str, char sep);
static char		*next_word(char *str, char sep);
static int		count_words(char *str, char sep);

//Errors

void			free_split(char **argv);
void			clear_stack(t_stack **stack);
void			error(t_stack **a, char **argv, bool flag_argc_2);
int				repeted_values(t_stack *val, int n);
int				syntax(char *strnbr);

//stack utillities

void			join_stack(t_stack **st, int nbr);
t_stack			*last_node(t_stack *list);
t_stack			*smallest_stack(t_stack *stack);
t_stack			*cheap(t_stack *stack);
void			initialize_stack(t_stack **a, char **argv, bool flag_argc_2);
int				stack_size(t_stack *stack);
void			start_position(t_stack *stack);

//stack management

void			start_tables(t_stack *a, t_stack *b);
void			push_swap(t_stack **a, t_stack **b);
void			three_sort(t_stack **a);
void			five_sort(t_stack **a, t_stack **b);
static void		move_plates(t_stack **a, t_stack **b);
static void		find_target(t_stack *a, t_stack *b);
void			define_cheap(t_stack *b);
void			set_moves(t_stack *a, t_stack *b);
bool			stack_sort(t_stack *stack);
static t_stack	*ft_highest(t_stack *stack);

// Main
int				main(int argc, char **argv);

//moves

static void		rotate_both(t_stack **a, t_stack **b, t_stack *cheap_stack);
static void		reverse_rotate_both(t_stack **a, t_stack **b,
					t_stack *cheap_stack);
void			finish_rotation(t_stack **stack, t_stack *top_stack, char name);
static void		rotate(t_stack **stack);
void			ra(t_stack **a, bool check);
void			rb(t_stack **b, bool check);
void			rr(t_stack **a, t_stack **b, bool check);
static void		reverse_rotate(t_stack **stack);
void			rra(t_stack **a, bool check);
void			rrb(t_stack **b, bool check);
void			rrr(t_stack **a, t_stack **b, bool check);
static void		push(t_stack **destination, t_stack **source);
void			pa(t_stack **a, t_stack **b, bool check);
void			pb(t_stack **b, t_stack **a, bool check);
void			sa(t_stack **a, bool check);
void			sb(t_stack **b, bool check);
static void		swap(t_stack **header);
void			ss(t_stack **a, t_stack **b, bool check);

#endif