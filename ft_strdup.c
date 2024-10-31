/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:31:04 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/31 08:56:46 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*cpy;

	i = -1;
	len = 0;
	while (s1[len])
		len++;
	cpy = malloc (len * sizeof(char));
	if (cpy == NULL)
		return (cpy);
	while (s1[++i])
		cpy[i] = s1[i];
	cpy[i] = '\0';
	return (cpy);
}

#include<string.h>
int main()
{
	char *s;
	char *main;
	char *mine;
	main = strdup(s);
	mine = ft_strdup(s);
	printf("main is %s\n", main);
	printf("mine is %s\n", mine);
}
