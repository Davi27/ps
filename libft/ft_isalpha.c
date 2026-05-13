/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:05:20 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/06 14:50:53 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1024);
	else if (c > 96 && c < 123)
		return (1024);
	else
		return (0);
}

/* Test  
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = 0;
	if (ft_isalpha(c) == isalpha(c))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
}
*/
