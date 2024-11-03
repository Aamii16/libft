/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:14:30 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/02 00:40:14 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*sub;

	i = start;
	size = 0;
	if (!len || !ft_strlen(s) || start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] && size < len)
	{
		size++;
		i++;
	}
	sub = (char *)malloc((size + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < size)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub [size] = '\0';
	return (sub);
}
/*
int main()
{
	char str[] = "abc";
	char *sub;
	int	arr[10];
	for (int i = 0; i < 10 * sizeof(int) - 3; i++)
	{
		printf("%d, ", *(int *)((char *)arr + i));
	}
	//sub = ft_substr(str, 5, 0);
	//puts(sub);
}*/
