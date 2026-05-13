/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:51:53 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:36:44 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_big_a(t_stack *stack, int len, int cnt)
{
	int	middle;
	int	numb;

	if (sorted_a(stack->a, len))
		return (1);
	numb = len;
	if (numb <= 3)
	{
		quicksort_3(stack, len);
		return (1);
	}
	if (!cnt && !middle_numb(&middle, stack->a, len))
		return (0);
	while (len != numb / 2 + numb % 2)
	{
		if (stack->a[0] < middle && (len--))
			pb_op(stack);
		else if (++cnt)
			ra_op(stack);
	}
	while (numb / 2 + numb % 2 != stack->size_a && cnt--)
		rra_op(stack);
	return (sort_big_a(stack, numb / 2 + numb % 2, 0)
		&& sort_big_b(stack, numb / 2, 0));
	return (1);
}

int	sort_big_b(t_stack *stack, int len, int cnt)
{
	int	middle;
	int	numb;

	if (!cnt && sorted_b(stack->b, len))
		while (len--)
			pa_op(stack);
	if (len <= 3)
	{
		sort_small_b(stack, len);
		return (1);
	}
	numb = len;
	if (!middle_numb(&middle, stack->b, len))
		return (0);
	while (len != numb / 2)
	{
		if (stack->b[0] >= middle && len--)
			pa_op(stack);
		else if (++cnt)
			rb_op(stack);
	}
	while (numb / 2 != stack->size_b && cnt--)
		rrb_op(stack);
	return (sort_big_a(stack, numb / 2 + numb % 2, 0)
		&& sort_big_b(stack, numb / 2, 0));
}

int	middle_numb(int *middle, int *stack, int size)
{
	int	*long_stack;
	int	i;

	long_stack = (int *)malloc(size * sizeof(int));
	if (!long_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		long_stack[i] = stack[i];
		i++;
	}
	long_sort(long_stack, size);
	*middle = long_stack[size / 2];
	free(long_stack);
	return (1);
}

void	long_sort(int *long_stack, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (long_stack[i] > long_stack[j])
			{
				temp = long_stack[i];
				long_stack[i] = long_stack[j];
				long_stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	push(t_stack *stack, int len, int op)
{
	if (op == 0)
		pb_op(stack);
	else
		pa_op(stack);
	len--;
	return (len);
}
