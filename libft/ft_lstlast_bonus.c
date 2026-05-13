/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:59:11 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 01:49:07 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	
	t_list *a = ft_lstnew("Node 1");
	t_list *b = ft_lstnew("Node 2");
	t_list *c = ft_lstnew("Node 3");
	t_list *d = ft_lstnew("Node 4");
	t_list *e = ft_lstnew("Node 5");
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	t_list	*ret = ft_lstlast(a);
	printf("%s", (char *)ret->content);
	return (0);
} */