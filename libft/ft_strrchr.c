/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:59:30 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/08 15:37:31 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cmp;

	i = ft_strlen(s);
	cmp = (char) c;
	while (i + 1)
	{
		if (s[i] == cmp)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = ft_strlen(s);
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)&s[i]);
// 	}
// 	while (i >= 0)
// 	{
// 		if (s[i] == (char)c)
// 		{
// 			return ((char *)&s[i]);
// 		}
// 		i--;
// 	}
// 	return (NULL);
// }
/* #include <stdio.h>

int main(void)
{
	char *s1 = "Walk me home";
	printf("%s\n", s1);
	printf("%s\n", ft_strrchr(s1, 'm'));
	return (0);
} */