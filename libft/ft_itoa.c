/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:39:37 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 05:01:03 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_filler(long num, char *ret, int i)
{
	int		div;
	long	temp;

	div = 1;
	temp = num;
	while (temp >= 10)
	{
		temp /= 10;
		div *= 10;
	}
	while (div > 0)
	{
		ret[i] = (num / div) + '0';
		num %= div;
		div /= 10;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

static int	ft_size(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	else if (n == 0)
		size = 1;
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	num;
	int		i;

	i = 0;
	num = n;
	ret = malloc(ft_size(num) + 1);
	if (!ret)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		ret[i++] = '-';
	}
	return (ft_filler(num, ret, i));
}

/* #include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(+2147483647));
	printf("%s\n", ft_itoa(-0));
	return (0);
}
 */