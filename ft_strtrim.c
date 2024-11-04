/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:03:24 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/04 01:51:43 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}
*/

int	isset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		len;


	len = ft_strlen(s1);
	while (isset(set, *(s1++)))
		len--;
	i = ft_strlen(s1);
	while (isset(set, s1[--i]))
		len--;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	i = -1;
	while (*s1 && i < len)
	{
		printf("test %d\n", i);
		trim[++i] = *(s1 - 1);
		s1++;
	}
	trim[len] = '\0';
	return (trim);
}
/*
int main()
{
	char *set= "aoei";
	char *s = "aioo";
	char *t = ft_strtrim(s, set);
	puts(t);
}
*/
