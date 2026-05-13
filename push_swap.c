/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:29:12 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:35:08 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(argv[0], ' ');
		push_swap(argc, argv);
	}
	return (0);
}

void	push_swap(int argc, char **argv)
{
	t_stack	stack;
	int		size;
	int		i;
	int		j;

	i = -1;
	j = 0;
	size = total_num(argv);
	init_stack(&stack, size);
	while (++i < size)
		stack.a[i] = char_to_int(argv[i], &stack);
	if (argc == 2)
	{
		while (j < size)
			free(argv[j++]);
		free(argv);
	}
	no_repeat(&stack);
	ft_sort(&stack);
	free(stack.a);
	free(stack.b);
}

int	ft_sort(t_stack *stack)
{
	if (!sorted_a(stack->a, stack->size_a))
	{
		if (stack->size_a == 2)
			sa_op(stack);
		else if (stack->size_a == 3)
			sort_small_a(stack);
		else
			sort_big_a(stack, stack->size_a, 0);
	}
	return (0);
}

void	init_stack(t_stack *stack, int size)
{
	stack->a = malloc(size * sizeof(int));
	if (!stack->a)
		return ;
	stack->size_a = size;
	stack->b = malloc(size * sizeof(int));
	if (!stack->b)
	{
		free(stack->a);
		return ;
	}
	stack->size_b = 0;
}
