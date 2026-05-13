/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:23:14 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:33:04 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}				t_stack;

void	push_swap(int argc, char **argv);
int		ft_sort(t_stack *stack);
void	init_stack(t_stack *stack, int size);

int		total_num(char **av);
int		char_to_int(char *str, t_stack *stack);
void	error_msg(t_stack *stack);
void	no_repeat(t_stack *stack);

int		sorted_a(int *stack, int size);
int		sorted_b(int *stack, int size);
void	sort_small_a(t_stack *s);
int		sort_small_b(t_stack *s, int b_len);
void	quicksort_3(t_stack *s, int len);

int		sort_big_a(t_stack *stack, int len, int cnt);
int		sort_big_b(t_stack *stack, int len, int cnt);
int		middle_numb(int *middle, int *stack, int size);
void	long_sort(int *long_stack, int size);
int		push(t_stack *stack, int len, int op);

void	pa_op(t_stack *stack);
void	pb_op(t_stack *stack);
void	sa_op(t_stack *stack);
void	sb_op(t_stack *stack);
void	ss_op(t_stack *stack);
void	ra_op(t_stack *stack);
void	rb_op(t_stack *stack);
void	rr_op(t_stack *stack);
void	rra_op(t_stack *stack);
void	rrb_op(t_stack *stack);
void	rrr_op(t_stack *stack);

#endif