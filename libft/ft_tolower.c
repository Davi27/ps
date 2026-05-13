/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:50:05 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 13:39:47 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	if (ft_tolower('A') == 'a')
		printf("%s\n", "A becomes a");
	if (ft_tolower(90) == 'z')
		printf("%s\n", "Z becomes z");

	printf("Return: %c\n", ft_tolower(-2));
	printf("Return: %c\n", tolower(-2));
	return (0);
} */