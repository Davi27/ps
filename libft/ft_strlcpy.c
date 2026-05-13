/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:04:54 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 10:19:28 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	i;

	ret = 0;
	i = 0;
	while (src[ret])
		ret++;
	if (!dst || !src || size == 0)
		return (ret);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ret);
}

/* int	main(void)
{
	char s1[] = "destino";
	char *s2 = "source";

	printf("%s\n", s1);
	printf("%zu\n", ft_strlcpy(s1, s2, 0));
	ft_strlcpy(s1, s2, 5);
	printf("%s\n", s1);
	return (0);
} */
