/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:25:56 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/22 01:32:01 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_beg(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	while (s1[i])
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			return (i);
	}
	return (i);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	ret;
	size_t	j;
	int		found;

	ret = ft_strlen(s1) - 1;
	while (ret > 0)
	{
		j = 0;
		found = 0;
		while (set[j])
		{
			if (s1[ret] == set[j])
			{
				ret--;
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			return (ret);
	}
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	new_start;
	size_t	new_end;
	size_t	len;
	size_t	str_len;

	if (!s1 || !set)
		return (NULL);
	str_len = ft_strlen(s1);
	new_start = ft_beg(s1, set);
	if (str_len == new_start)
		return (ft_strdup(""));
	new_end = ft_end(s1, set);
	len = (new_end - new_start) + 1;
	return (ft_substr(s1, new_start, len));
}
/* int	main(void)
{
	char *str = "Alguma coisa";
	char *set = "Aals";
	printf("%s\n", ft_strtrim(str, set));
	char *s = ft_strtrim("aaaabcdebaaaa", "a");
	printf("%s\n",s);
	return (0);
}
 */