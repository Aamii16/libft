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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	s = (unsigned char *) s;
	c = (unsigned char *) c;
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
