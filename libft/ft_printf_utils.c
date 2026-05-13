/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:30:32 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/03 12:41:51 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printstr(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
		ft_printchar(str[i++]);
	return (i);
}

int	ft_printnum(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_printchar('-');
		nb = -nb;
		count += ft_printnum(nb);
	}
	else if (nb > 9)
	{
		count += ft_printnum(nb / 10);
		count += ft_printnum(nb % 10);
	}
	else
		count += ft_printchar(nb + 48);
	return (count);
}

int	ft_printaddr(unsigned long long addr)
{
	int	count;

	count = 0;
	if (addr == 0)
	{
		count += write(1, "(nil)", 5);
	}
	else
	{
		count += write(1, "0x", 2);
		count += ft_printhex(addr, 'x');
	}
	return (count);
}

int	ft_printhex(unsigned long long hex, char c)
{
	int	count;

	count = 0;
	if (hex > 15)
	{
		count += ft_printhex(hex / 16, c);
		count += ft_printhex(hex % 16, c);
	}
	else if (hex < 10)
		count += ft_printchar(hex + 48);
	else if (hex > 9 && hex < 16)
	{
		if (c == 'x')
			count += ft_printchar(hex + 87);
		else if (c == 'X')
			count += ft_printchar(hex + 55);
	}
	return (count);
}
