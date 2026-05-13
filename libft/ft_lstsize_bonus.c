/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:54:04 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 01:28:13 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	printf("%d", ft_lstsize(a));
	return (0);
} */