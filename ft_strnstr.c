/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:39:32 by amzahir           #+#    #+#             */
/*   Updated: 2024/11/08 17:13:09 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	i = 0;
	j = 0;
	b = (char *)big;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return (b + i);
		i++;
	}
	return (NULL);
}
