/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:14:30 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/31 09:22:53 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*sub;

	i = -1;
	size = 0;
	while (s[++i] && size < len)
		size++;
	sub = (char*)malloc(size * sizeof(char));
	
	sub = (char*)s + start;
	sub [size] = '\0';
	return (sub);
}
