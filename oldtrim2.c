/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:43:08 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/02 05:59:22 by amzahir          ###   ########.fr       */
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
	int	start;

	i = 0;
	len = ft_strlen(s1);
	while (isset(set, s1[++i]))
		len--;
	start = i;
	i = ft_strlen(s1) + 1;
	while (isset(set, s1[--i]))
		len--;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return(NULL);
	i = 0;
	while (s1[start] && start < len)
	{
		printf("eee len %d\n", len);
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[len] = '\0';
	return (trim);
}
int main()
{
	char *set= "aoei";
	char *s = "kamiko";
	char *t = ft_strtrim(s, set);
	puts(t);
}

