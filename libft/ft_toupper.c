/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:44:47 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/06 14:51:57 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <stdio.h>
int	main(void)
{
	if (ft_toupper('a') == 'A')
		printf("%s\n", "a becomes A");
	if (ft_toupper(122) == 'Z')
		printf("%s\n", "z becomes Z");
	return (0);
}*/