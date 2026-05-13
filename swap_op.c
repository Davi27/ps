/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:05:29 by davimar3          #+#    #+#             */
/*   Updated: 2026/02/27 17:13:01 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_op(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 1)
	{
		temp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = temp;
		ft_printf("sa\n");
	}
}

void	sb_op(t_stack *stack)
{
	int	temp;

	if (stack->size_b > 1)
	{
		temp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = temp;
		ft_printf("sb\n");
	}
}

void	ss_op(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 1 && stack->size_b > 1)
	{
		temp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = temp;
		temp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = temp;
		ft_printf("ss\n");
	}
}
