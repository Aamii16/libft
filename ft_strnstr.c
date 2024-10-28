/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzahir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:39:32 by amzahir           #+#    #+#             */
/*   Updated: 2024/10/28 22:28:44 by amzahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;
	char				*b;
	char				*l;

	i = 0;
	j = 0;
	b = (char*)big;
	l = (char*)little;
	if(*little == '\0')
		return(big);
	while(b[i] && i < len)
	{
		while(l[j] && l[j] == b[i + j])
			j++;
		
		i++;
	}

	return(NULL);
}
