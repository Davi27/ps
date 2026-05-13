/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:58:32 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 01:30:56 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*temp_s;
	unsigned char		*temp_d;
	size_t				i;

	temp_s = src;
	temp_d = dest;
	i = 0;
	if (temp_d == temp_s || n == 0)
		return (dest);
	else if (temp_d > temp_s)
		while (n--)
			temp_d[n] = temp_s[n];
	else
	{
		while (i < n)
		{
			temp_d[i] = temp_s[i];
			i++;
		}
	}
	return (dest);
}

/* int main(void)
{
	char buffer1[20] = "Hello, world!";
	char buffer2[20] = "Hello, world!";

	char src1[] = "ABCDEFG";
	char dest1[20];
	ft_memmove(dest1, src1, 8);
	printf("ft_memmove: %s\n", dest1);

	char dest2[20];
	memmove(dest2, src1, 8);
	printf("memmove   : %s\n", dest2);

	printf("Before: %s\n", buffer1);
	ft_memmove(buffer1 + 2, buffer1, 10);
	printf("After (ft_memmove): %s\n", buffer1);

	strcpy(buffer2, "Hello, world!");
	memmove(buffer2 + 2, buffer2, 10);
	printf("After (memmove)   : %s\n", buffer2);

	char buf3[20] = "123456789";
	char buf4[20] = "123456789";

	ft_memmove(buf3, buf3 + 2, 5);
	printf("ft_memmove: %s\n", buf3);

	memmove(buf4, buf4 + 2, 5);
	printf("memmove   : %s\n", buf4);

	return 0;
} */