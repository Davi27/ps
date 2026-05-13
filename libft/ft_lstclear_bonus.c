/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:37:32 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 02:59:42 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/* #include <stdio.h>

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
	printf("\nList with nodes removed:\n");

	
	head = a;
	ft_lstclear(&b, del);
	
	for(int j = 0; j < 4; j++)
	{
		printf("\n%s", (char *)head->content);
		head = head->next;
	}
	return (0);
} */