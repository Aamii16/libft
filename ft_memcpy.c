/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:33:47 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/15 22:00:23 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
