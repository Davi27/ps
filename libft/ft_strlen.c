/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:32:06 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:37:12 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/* Test 
#include <stdio.h>
int	main(void)
{
	char *str = "Take it all back";
	if (ft_strlen(str) == strlen(str))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
}
*/