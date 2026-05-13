/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:05:09 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 01:50:40 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

void	find_space(void *con)
{
	con = ft_strchr((const char *)con, 32);
	printf("%s\n", (char *)con);
}
void	del(void *con)
{
	if (!con)
		return ;
	else
		free(con);
}
int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("Node 1"));
	t_list *b = ft_lstnew(ft_strdup("Node 2"));
	t_list *c = ft_lstnew(ft_strdup("Node 3"));
	t_list *d = ft_lstnew(ft_strdup("Node 4"));
	t_list *e = ft_lstnew(ft_strdup("Node 5"));
	t_list *head;
	
	head = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;

	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	printf("\nList with function applied:\n");

	head = a;
	ft_lstiter(head, find_space);
	ft_lstclear(&head, del);
	return (0);
} */