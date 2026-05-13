/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:17:26 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 05:16:29 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (8);
	else if (c > 64 && c < 91)
		return (8);
	else if (c > 96 && c < 123)
		return (8);
	else
		return (0);
}

/* //Test  
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	for(int i = 0; i <= 127; i++)
		printf("i:%d\n%d\n", i, isalnum(i));
	int c = 0;
	if (ft_isalnum(c) == isalnum(c))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
} */