/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:51:36 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/04 06:39:03 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*cpy;

	i = -1;
	len = 0;
	while (s1[len])
		len++;
	cpy = (char*)malloc (len * sizeof(char));
	if (cpy == NULL)
		return (cpy);
	while (s1[++i])
		cpy[i] = s1[i];
	cpy[i] = '\0';
	return (cpy);
}

int	countwords(char const *s, char c)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c)
			s++;
		count++;
	}
	return (count);
}

char	**split(char const *s, char c)
{
	int	i;
	int	w_size;
	char	**split;
	int	elements;

	i = 0;
	elements = countwords(s, c);
	split = (char **)malloc((elements + 1) * sizeof(char *));
	while (index < elements)
	{	
		while (*s)
		{
			if (*s == c)
				s++;
		
		}
	}
}
