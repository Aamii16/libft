/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:01:54 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/15 22:12:59 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest <= src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	return (dest);
}
