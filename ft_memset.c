/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:53:19 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/27 21:20:11 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long int	i;

	i = 0;
	while(i < n)
	{
		(unsigned char*)s[i] = (unsigned char*) c;
		i++:
	}
	return(s);
}
