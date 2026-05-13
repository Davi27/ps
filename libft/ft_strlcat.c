/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:33:23 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 17:43:40 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = ft_strlen(src);
	i = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (d_len + s_len);
	while (d_len + i < size - 1 && src[i])
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < size)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/* Test */
/* #include <stdio.h>
int	main(void)
{
	char s1[] = "Procurando ";
	char *s2 = "Neeeemmmoooo";
	printf("s1:%s\n", s1);
	ft_strlcat(s1, s2, 15);
	printf("s1:%s\n", s1);
	return (0);
}
 */