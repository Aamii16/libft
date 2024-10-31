/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:14:30 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/31 09:41:37 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*sub;

	i = start - 1;
	size = 0;
	while (s[++i] && size < len)
		size++;
	sub = (char*)malloc(size * sizeof(char));
	if (sub == NULL)
		return (sub);
	i = 0;
	while (s[start + i] && i < len )
	{
		sub[i] = s[i + start]
		i++;
	}
	sub [size] = '\0';
	return (sub);
}
