/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:25:51 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/27 21:33:20 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;

	i = 0;
	s = (unsigned char*) s;
	while(i < n)
	{
		s[i] = 0;
		i++;
	}
}
