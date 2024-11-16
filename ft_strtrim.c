/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:03:24 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/15 22:15:47 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(const char *set, char c)
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
