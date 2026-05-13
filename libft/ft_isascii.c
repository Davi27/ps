/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:25:46 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/06 14:50:56 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

/* Test  
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = 0;
	if (ft_isascii(c) == isascii(c))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
}
*/
