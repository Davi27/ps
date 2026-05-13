/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 04:08:14 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 05:27:13 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	ret;

	i = 0;
	signal = 1;
	ret = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
		if (nptr[i++] == 45)
			signal *= -1;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		ret *= 10;
		ret += nptr[i] - '0';
		i++;
	}
	return (ret * signal);
}

/* int main(void)
{
	printf("%d\n", ft_atoi("\n 8"));
	printf("%d\n", atoi("\t 8"));
    printf("%d\n", ft_atoi("  +2147483647"));
    printf("%d\n", atoi("  +2147483647"));
	return (0);
}  */