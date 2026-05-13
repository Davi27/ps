/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:15:24 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/06 14:50:59 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	else
		return (0);
}

/* Test  
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = 0;

	if (ft_isdigit(c) == isdigit(c))
		printf("Same as the original function\n");
	else
		printf("Different from the original function\n");
	return (0);
}
*/
