/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 05:47:05 by davimar3          #+#    #+#             */
/*   Updated: 2025/11/18 18:36:40 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}

// #include <stdio.h>
// int	main(void)
// {
// 	size_t	n = 5;
// 	size_t	s = sizeof(int);

// 	printf("✅ Normal allocation test:\n");
// 	int *arr = ft_calloc(n, s);
// 	if (!arr)
// 	{
// 		printf("ft_calloc returned NULL\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < n; i++)
// 		printf("%d ", arr[i]); // should all be 0
// 	printf("\n");
// 	free(arr);

// 	/* Compare with system calloc */
// 	printf("\n✅ Compare with system calloc:\n");
// 	int *sys = calloc(n, s);
// 	if (!sys)
// 	{
// 		printf("calloc returned NULL\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < n; i++)
// 		printf("%d ", sys[i]); // should all be 0
// 	printf("\n");
// 	free(sys);

// 	/* Test with zero nmemb or size */
// 	printf("\n✅ Zero-size test:\n");
// 	void *zero = ft_calloc(0, 10);
// 	printf("ft_calloc(0, 10) -> %p\n", zero);
// 	free(zero);

// 	/* Overflow test */
// 	printf("\n✅ Overflow test:\n");
// 	void *overflow = ft_calloc(SIZE_MAX, 2);
// 	printf("ft_calloc(SIZE_MAX, 2) -> %p (should be NULL)\n", overflow);
// 	free(overflow);

// 	return (0);
// }
