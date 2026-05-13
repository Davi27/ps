/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:04:28 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/21 22:03:44 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_total_strs(char const *s, char c)
{
	int	words;
	int	flag;
	int	i;

	words = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 1;
		else if (flag == 1)
		{
			words++;
			flag = 0;
		}
		i++;
	}
	return (words);
}

static char	**ft_free_all(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (NULL);
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**ft_members(char const *s, char c, char **arr, int words)
{
	int		i;
	int		k;
	int		len;

	i = 0;
	k = 0;
	len = 0;
	while (i < words)
	{
		k += len;
		len = 0;
		while (s[k] == c)
			k++;
		while (s[k + len] && s[k + len] != c)
			len++;
		arr[i] = ft_substr(s, k, len);
		if (!arr[i])
			return (ft_free_all(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	if (!s)
		return (NULL);
	words = ft_total_strs(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (ft_members(s, c, arr, words));
}

/* 

void	print_split(char **arr)
{
	if (!arr)
	{
		printf(" (null pointer)\n");
		return;
	}
	printf("[ ");
	for (int i = 0; arr[i]; i++)
		printf("\"%s\" ", arr[i]);
	printf("]\n");
}

void	test(char *s, char c)
{
	printf("========================================\n");
	printf("Input: \"%s\" | delimiter: '%c'\n", s, c);
	char **arr = ft_split(s, c);
	print_split(arr);
}

int main(void)
{
	test("hello world split test", ' ');
	test("   spaced   out string   ", ' ');
	test("one,two,three", ',');
	test(",,,multiple,,,delims,,", ',');
	test("", ' ');
	test("no delimiter here", ',');
	test("42", '4');
	test("split\0hidden", 't');
	test(NULL, ' ');             
	test("a", '\0');
	test("     ", ' ');           
	test("abc", 'c');  
	test("cabc", 'c');
	test("cccabcaaa", 'c');
}
 */