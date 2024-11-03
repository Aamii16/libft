/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:51:36 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/02 06:18:08 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	countwords(char const *s, char c)
{
	int	count;
	int	i;
	count = 0;
	while (s[++i])
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}
