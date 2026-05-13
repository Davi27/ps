/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:42:33 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 20:04:35 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	to_upp_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
	{
		if (*c >= 97 && *c <= 122)
		*c -= 32;
	}

}

int	main(void)
{
	char	s2[] = "Testing iteration";

	printf("str2: %s\n", s2);
	ft_striteri(s2, to_upp_even);
	printf("str2: %s\n", s2);
	return (0);
} */