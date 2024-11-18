/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:14:30 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/15 22:01:19 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (!len || !ft_strlen(s) || start > ft_strlen(s))
		return (ft_strdup(""));
	i = start;
	size = -1;
	while (++size < len && s[i])
		i++;
	sub = (char *)malloc((size + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < size)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub [size] = '\0';
	return (sub);
}
