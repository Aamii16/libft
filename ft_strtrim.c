/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:03:24 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/02 06:16:10 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}


int     isset(const char *set, char c)
{
        while (*set)
        {
                if (*set == c)
                        return (1);
                set++;
        }
        return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	int	i;
	int	len;

	len = ft_strlen(s1);
	while (*s1 && isset(set, s1))
		len--;
	while ( 


}
