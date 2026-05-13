/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:10:33 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 06:05:10 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = s;
	while (n--)
		*temp++ = '\0';
}

/* Test 
#include <unistd.h>
int	main(void)
{
	char str[] = "Erase the beginning and Keep the end!\n";
	
	for (int i = 0; i < 38; i++)
		write(1, &str[i], 1);
	ft_bzero(str, 24);
	for (int i = 0; i < 38; i++)
		write(1, &str[i], 1);
	return (0);
}
*/