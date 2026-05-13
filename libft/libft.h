/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davimar3 <davimar3@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 07:29:26 by davimar3          #+#    #+#             */
/*   Updated: 2026/03/03 13:31:30 by davimar3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*******************************************/
/*				INCLUDES				   */
/*******************************************/

# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>

/*******************************************/
/*				ASCII					   */
/*******************************************/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isspace(int c);
int		ft_isignal(int c);

/*******************************************/
/*				STRINGS					   */
/*******************************************/

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

/*******************************************/
/*				MEMORY					   */
/*******************************************/

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

/********************************************/
/*				FILES						*/
/********************************************/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/********************************************/
/*				PRINTF						*/
/********************************************/

int		ft_printf(const char *str, ...);
int		process_args(va_list args, char *str, int i);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnum(long nb);
int		ft_printaddr(unsigned long long addr);
int		ft_printhex(unsigned long long hex, char c);

/********************************************/
/*				STRUCT						*/
/********************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/********************************************/
/*				LISTS						*/
/********************************************/

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif