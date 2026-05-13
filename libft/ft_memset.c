/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:56:53 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 22:56:30 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = s;
	while (n--)
		*temp++ = (unsigned char)c;
	return (s);
}

/* Test 
#include <stdio.h>
int	main(void)
{
	char str[] = "Password: 123456789!";
	printf("%s\n", str);
	ft_memset(str + 10, 42, 9);
	printf("%s\n", str);
	return (0);
}
*/