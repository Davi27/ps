/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:33:06 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/03 13:10:58 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;

	temp_d = dest;
	temp_s = src;
	while (n--)
		*temp_d++ = *temp_s++;
	return (dest);
}

/* int	main(void)
{
	char s1[] = "Old string";
	char s2[] = "New string";

	printf("%s\n", s1);
	ft_memcpy(s1, s2, 10);
	printf("%s\n", s1);
	return (0);
} */
