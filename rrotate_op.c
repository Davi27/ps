/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:23:19 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:36:03 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_op(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->size_a > 1)
	{
		i = stack->size_a;
		temp = stack->a[i - 1];
		while (--i)
			stack->a[i] = stack->a[i - 1];
		stack->a[i] = temp;
		ft_printf("rra\n");
	}
}

void	rrb_op(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->size_b > 1)
	{
		i = stack->size_b;
		temp = stack->b[i - 1];
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[i] = temp;
		ft_printf("rrb\n");
	}
}

void	rrr_op(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->size_a > 1 && stack->size_b > 1)
	{
		i = stack->size_a;
		temp = stack->a[i - 1];
		while (--i)
			stack->a[i] = stack->a[i - 1];
		stack->a[i] = temp;
		i = stack->size_b;
		temp = stack->b[i - 1];
		while (--i)
			stack->b[i] = stack->b[i - 1];
		stack->b[i] = temp;
		ft_printf("rrr\n");
	}
}
