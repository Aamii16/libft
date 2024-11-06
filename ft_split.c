/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:51:36 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/04 07:23:07 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;

    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (size != 0)
        dest[i] = '\0';
    i = 0 ;
    while (src[i])
        i++;
    return (i);
}

int	countwords(char const *s, char c, char **split, int elements)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	return (count);
}

int	wordsize(const char *s,char c,  size_t *i)
{
	size_t	w_size;

	w_size = 0;
	while(s[*i] == c && s[*i])
		(*i)++;
	while(s[*i] != c && s[*i])
	{
		(*i)++;
		w_size++;
	}
	return (w_size);
}

void	free_pt(char **split, int e)
{
	while (e >= 0)
	{
		free(split[e]);
		e--;
	}
	free(split);	
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	int 	e;
	int	elements;
	size_t	w_size;
	char	**split;

	e = -1;
	i = 0;
	elements = countwords(s, c);
	split = (char **)malloc((elements + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i] && e < elements + 1)
	{
		w_size = wordsize(s, c, &i);
		if (!w_size)
			break;
		split[++e] = malloc((w_size + 1) * sizeof(char));
		if (!split[e])
		{
			free_pt(split, e);
			return (NULL);
		}	
		ft_strlcpy(split[e], s + i - w_size, w_size + 1);
	}
	split[elements] = '\0';
	return (split);
}
int main()
{
	char *s = "ak,lm,ko,,,fgdfg,";
	char c = ',';
	int i = 0;
	char **split = ft_split(s, c);
	while (split[i])
	{
		puts(split[i]);
		i++;
	}
}
