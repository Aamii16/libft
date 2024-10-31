/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:39:32 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/31 02:26:58 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;
	char				*b;

	i = 0;
	j = 0;
	b = (char *)big;
	while (big[i] && i < len)
	{
		while (little[j] && little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return (b + i);
		i++;
	}
	return (NULL);
}
