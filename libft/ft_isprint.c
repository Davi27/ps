/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:28:01 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 05:11:56 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}
/* 
#include <ctype.h>

int	main(void)
{
	int c = 0;
	if (ft_isprint(c) == isprint(c))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
}
*/
