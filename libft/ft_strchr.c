/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:51:36 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 20:22:46 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			len;
	unsigned char	cmp;

	i = 0;
	len = ft_strlen(s);
	cmp = (unsigned char) c;
	while (i <= len)
	{
		if (s[i] == cmp)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	char *s1 = "Walk me home";
	printf("%s\n", s1);
	printf("%s\n", ft_strchr(s1, 'm'));
	return (0);
} */