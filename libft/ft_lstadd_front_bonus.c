/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:35:43 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 03:16:00 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = (*lst);
	(*lst) = new;
}

/* int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("Node 1"));
	t_list *b = ft_lstnew(ft_strdup("Node 2"));
	t_list *c = ft_lstnew(ft_strdup("Node 3"));
	t_list *alpha = ft_lstnew(ft_strdup("Node 1.2"));
	t_list *head = a;
		
	a->next = b;
	b->next = c;
	printf("%s\n", (char*)head->content);
	ft_lstadd_front(&head, alpha);
	printf("%s\n", (char*)head->content);
} */