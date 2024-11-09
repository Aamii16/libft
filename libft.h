/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:12:41 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/09 16:30:08 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H 

int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isascii(int);
int	ft_isdigit(int);
int	ft_isprint(int);
int	ft_tolower(int);
int	ft_touppper(int);
int	ft_strlen(const char *);
int	ft_strncmp(const char *, const char *, size_t);
char	*ft_strstr(const char *, const char *);
char	*ft_strnstr(const char*, const char *, size_t);
char	*ft_strrchr(const char *, int);
char	*ft_strchr(const char *, int);
char	*ft_strdup(const char *);
char	*ft_strjoin(const char *, const char *);
char	ft_bzero(void *, size_t);
void	*ft_memchr(const void *, int, size_t);
void	ft_memcmp(const void *, const void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memset(void *, int, size_t);
void	*ft_calloc(size_t, size_t);
size_t	ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
int	ft_atoi(const char *);
char	*ft_strtrim(const char *, const char *);
char	*ft_substr(const char *, unsigned int, size_t);
char	**ft_split(const char, char);
char	*ft_itoa(int);
char	*ft_strmapi(char const, char *(unsigned int, char));
void	ft_striteri(char *, void *(unsigned int, char *));
void	ft_putchar_fd(char, int);
void	ft_putendl_fd(char, int);
void	ft_putstr_fd(char *, int);
void	ft_putnbr_fd(int);


#endif
