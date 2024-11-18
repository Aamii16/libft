/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:19:05 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/15 22:06:36 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	u;

	i = 0;
	if (!s)
		return (NULL);
	p = (unsigned char *) s;
	u = (unsigned char ) c;
	while (i < n)
	{
		if (p[i] == u)
			return (p + i);
		i++;
	}
	return (NULL);
}
