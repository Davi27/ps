/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:54:56 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/07 17:36:50 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	int				len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/* char ft_toupper_str(unsigned int in, char c)
{
	in++;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}


#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_strmapi("There was another in the fire", ft_toupper_str));
	return (0);
} */