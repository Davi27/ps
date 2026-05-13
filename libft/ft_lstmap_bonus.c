/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:09:22 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 08:17:18 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*error_ret(t_list *head, void (*del)(void *))
{
	ft_lstclear(&head, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	void	*new_cont;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_cont = f(lst->content);
		if (!new_cont)
			return (error_ret(head, del));
		temp = ft_lstnew(new_cont);
		if (!temp)
		{
			del(new_cont);
			return (error_ret(head, del));
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
/* 
void	*to_upp(void *str)
{
	int i;
	char *s = (char *)str;
	
	i = 0;
	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return ((void*)s);
}

void	del(void *con)
{
	if (!con)
		return ;
	else
		free(con);
}

int main(void)
{
	t_list *node  = ft_lstnew(ft_strdup("ola"));
	t_list *node1 = ft_lstnew(ft_strdup("ola1"));
	t_list *node2 = ft_lstnew(ft_strdup("ola2"));
	
	ft_lstadd_back(NULL, node);
	ft_lstadd_back(&node, node1);
	ft_lstadd_back(&node, node2);

	t_list *temp;
	temp = node;
	while (temp != NULL)
	{
		printf("lista: %s\n", (char*)temp->content);
		if (temp->next == NULL)
			break;
		temp = temp->next; 		
	}
	t_list *new  = ft_lstnew(ft_strdup("mundo"));
	t_list *new1 = ft_lstnew(ft_strdup("mundo1"));
	t_list *new2 = ft_lstnew(ft_strdup("mundo2"));
	
	ft_lstadd_back(NULL, new);
	ft_lstadd_back(&new, new1);
	ft_lstadd_back(&new, new2);

	printf("new: %s\n", (char*)new->content);
	new = ft_lstmap(node, &to_upp, del);
		
	while (new != NULL)
	{
		printf("new: %s\n", (char*)new->content);
		new = new->next;
	}
} */