/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:44:56 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/31 09:51:15 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	int		i;
	char	*joined;

	len = ft_strlen(s1) + ft_strlen(s2) - 1;
	joined = (char*) malloc (len * sizeof(char));
	if (joined == NULL)
		return (joined);
	while (s1)
	{
		joined[i] = *s1;
		i++;
		s1++;
	}
	while(s2)
	{
		joined[i] = *s2;
		i++;
		s2++;
	}
	joined[len] = '\0';
	return (joined);
}
