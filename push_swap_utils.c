/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 11:39:33 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:35:48 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_num(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

int	char_to_int(char *str, t_stack *stack)
{
	int				i;
	int				neg;
	unsigned long	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (ft_isignal(str[i]) && ft_isdigit(str[i + 1]))
		i++;
	else if (ft_isignal(str[i]) && !ft_isdigit(str[i + 1]))
		error_msg(stack);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error_msg(stack);
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	if ((nb > 2147483648 && neg == -1) || (nb > 2147483647 && neg == 1))
		error_msg(stack);
	return (nb * neg);
}

void	error_msg(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	ft_printf("Error\n");
	exit (1);
}

void	no_repeat(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
				error_msg(stack);
			j++;
		}
		i++;
	}
}
