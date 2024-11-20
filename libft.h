/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:41 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/20 03:46:50 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s, const char *d, size_t n);
char	*ft_strstr(const char *s, const char *d);
char	*ft_strnstr(const char *s, const char *d, size_t n);
char	*ft_strrchr(const char *d, int c);
char	*ft_strchr(const char *d, int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s, const void *d, size_t n);
void	*ft_memcpy(void *d, const void *s, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memset(void *s, int c, size_t size);
size_t	ft_strlcat(char *d, const char *s, size_t n);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
int		ft_atoi(const char *s);
void	*ft_calloc(size_t c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strtrim(const char *s, const char *d);
char	*ft_substr(const char *s, unsigned int start, size_t size);
char	*ft_strjoin(const char *s, const char *d);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int c);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *a, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *n);
int		ft_lstsize(t_list *l);
t_list	*ft_lstlast(t_list *l);
void	ft_lstadd_back(t_list **l, t_list *n);
void	ft_lstdelnode(t_list *l, void (*del)(void*));
void	ft_lstclear(t_list **l, void (*d)(void *));
void	ft_lstiter(t_list *l, void (*f)(void *));
t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *));

#endif
