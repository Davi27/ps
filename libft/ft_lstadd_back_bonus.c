/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:26:16 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 03:22:55 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	else
		temp->next = new;
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
	printf("%s\n", (char *)ret->content);
	
	t_list *last = ft_lstnew("Last node");
	ft_lstadd_back(&a, last);
	ret = ft_lstlast(a);
	printf("%s\n", (char *)ret->content);
	return (0);
} */