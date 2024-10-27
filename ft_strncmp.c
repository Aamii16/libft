/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:35 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/27 17:02:27 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	
	i = 0;
	if(!n)
		return(0);
	s1 = *(unsigned char) s1;
	s2 = *(unsigned char) s2;
	while(s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			//return(s1[i] - s2[i]);
			break;
		i++;
	}
	return(s1[i] - s2[i]);
}
