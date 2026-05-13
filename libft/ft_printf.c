/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:30:24 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/03 12:41:24 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	process_args(va_list args, char *str, int i)
{
	char	c;

	c = str[i + 1];
	if (c == '%')
		return (ft_printchar(c));
	else if (c == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printnum(va_arg(args, int)));
	else if (c == 'u')
		return (ft_printnum(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_printaddr(va_arg(args, unsigned long long)));
	else if (c == 'x')
		return (ft_printhex(va_arg(args, unsigned int), 'x'));
	else if (c == 'X')
		return (ft_printhex(va_arg(args, unsigned int), 'X'));
	else
		return (ft_printchar('%') + ft_printchar(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;
	char	c;

	va_start(args, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			c = str[i];
			write(1, &c, 1);
			ret++;
		}
		else if (str[i + 1] && str[i] == '%')
			ret += process_args(args, (char *)str, i++);
		else
			return (-1);
		i++;
	}
	va_end(args);
	return (ret);
}
