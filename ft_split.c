/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:51:36 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/09 15:40:28 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

char	**getsplit(char const *s, char c, int *count, int *e, size_t *i)
{
	char	**split;

	*count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		(*count)++;
	}
	*i = 0;
	*e = -1;
	split = malloc((*count + 1) * sizeof(char *));
	return (split);
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

	split = getsplit(s, c, &elements, &e, &i);
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
	free_pt(split, i);
}
