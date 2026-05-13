/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:41:34 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 23:55:08 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	unsigned char		c1;

	s1 = s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (*s1 == c1)
			return ((void *)s1);
		s1++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*receive; 
	receive = ft_memchr("Procuramos um char nessa string\n", 115, 33);
	printf("%s", receive);
	return (0);
} */